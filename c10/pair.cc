#include "my.h"

int main() {
    vector<pair<string, int>> vpsi;
    ifstream ifs("/tmp/aa");
    string str;
    int val;
    while (ifs >> str >> val) {
//        vpsi.push_back({str, val});
//        vpsi.push_back(make_pair(str,val));
        pair<string, int> tmp(str,val);
        vpsi.push_back(tmp);
    }
    if (ifs.fail() && !ifs.eof()) {
        cerr << "error" << endl;
        return -1;
    }
    ifs.close();
    for (auto i:vpsi) {
        cout << i.first << " :" ;
        cout << i.second << endl;
    }
    return 0;
}
