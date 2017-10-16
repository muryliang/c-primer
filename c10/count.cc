#include "my.h"

void printStat(unordered_map<string,int> &a);
int main() {
    unordered_map<string, int> umsi;
    string name;
    ifstream ifs("/tmp/aa");
    while (ifs >> name) {
        ++umsi[name];
    }
    ifs.close();
    /*
    for( auto i: umsi) {
        cout << i.first << " " << i.second << endl;
    }
    */
    auto c = umsi.find("ee");
    cout << c->first << " " << c->second << endl;
    return 0;
}

void printStat(unordered_map<string,int> &a) {
    cout << "load factor and max: " << a.load_factor() << " " << a.max_load_factor() << endl;
    cout << a.bucket("aa") << endl;
    cout << a.bucket("ee") << endl;
    cout << "bucket count: " << a.bucket_count() << endl;
    cout << "bucket size of aa: " << a.bucket_size(a.bucket("aa")) << endl;
    for (auto i = a.begin(a.bucket("aa")); i != a.end(a.bucket("aa")); ++i)
        cout << i->first << " " << i->second  << endl;
}
