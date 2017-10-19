#ifndef QUERY_H
#define QUERY_H

#include "my.h"

class TextResult {
    friend ostream& operator<<(ostream& os, const TextResult &t);
    private:
        string wd;
        shared_ptr<vector<string>> shareptr;
        set<int> seti;
    public:
        TextResult(const string& word, shared_ptr<vector<string>> svs, set<int> si);
};
TextResult::TextResult(const string& word, shared_ptr<vector<string>> svs, set<int> si):wd(word),
        shareptr(svs), seti(si) {}

ostream& operator<<(ostream& os, const TextResult &t) {
    os << "word: " << t.wd << endl;
    for (auto i:t.seti) {
        os << (*t.shareptr)[i] << endl;
    }
    return os;
}

class TextQuery {
    private:
        map<string, set<int>> mss;
        shared_ptr<vector<string>> contentptr = make_shared<vector<string>>();
    public:
        TextQuery(ifstream& ifs);
        TextResult query(const string& word);
};

TextQuery::TextQuery(ifstream &ifs) {
    string line;
    while (getline(ifs, line)) {
        contentptr->push_back(line);
        istringstream is(line);
        string word;
        while (is >> word) {
            mss[word].insert(contentptr->size()-1);
//            cout << "insert " + word + " into " << contentptr->size()-1 << endl;
        }
    }
}
    
TextResult TextQuery::query(const string& word) {
    return TextResult(word, contentptr, mss[word]);
}
#endif
