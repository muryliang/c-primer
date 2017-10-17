#ifndef TEXT_H
#define TEXT_H

#include "my.h" 

class TextResult {
    private:
        vector<string>& ref_content;
        set<int>::iterator begin, end;
    public:
        TextResult(vector<string>& ref, set<int>::iterator b, set<int>::iterator e):ref_content(ref),
                begin(b),end(e) {}
        ostream& print(ostream &os) const;
};

ostream& TextResult::print(ostream &os) const {
    for(auto i = begin; i != end; ++i)
        os << "line(" << *i << ") " << ref_content[*i] << endl;
    return os;
}

class TextQuery {
//    friend class TextResult;
    private:
        vector<string> content;
        map<string, set<int>> wcount;
    public:
        TextQuery(istream &is);
        TextQuery():TextQuery(cin) {}  //default read in from stdin
        TextResult query(const string &s);
};

TextQuery::TextQuery(istream &is) {
    size_t count = 0;
    string line;

    if (is.fail()) {
        throw runtime_error("the input stream is error");
    }
    is.clear();
    while (getline(is, line)) {
        content.push_back(line);
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wcount[word].insert(count);
        }
        ++count;
    }
}

TextResult TextQuery::query(const string &s) {
    return TextResult(content, wcount[s].begin(), wcount[s].end());
}

#endif
