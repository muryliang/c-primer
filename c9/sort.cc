#include "my.h"

bool compare(const int &i, const int &j) {
    return i > j;
}
bool bigger(const string& i) {
    return i.size() > 4;
}

int main() {
    string::size_type sz = 4;
    vector<string> vs{"aaa", "bbbbb", "cccccccc", "dd" , "eee", "fffff"};
    auto split = partition(vs.begin(), vs.end(), [sz](const string& a) { 
            return a.size() > sz;});
    vs.erase(split, vs.end());
    ploop(vs);
    return 0;
}
