#include "my.h"

int main() {
    map<string, pair<string,string>> msvs;
    string input;
    ifstream ifs("/tmp/bb");
    if (ifs.fail()) {
        cerr << "error" << endl;
        return -1;
    }
    while (getline(ifs, input)) {
        istringstream iss(input);
        string first, second, date;
        iss >>first >> second >> date;
        if (iss.fail()) {
            cerr << "can not get two args" << endl;
            break;
        }
        msvs[first] = {second, date};
    }
    ifs.close();
    for (auto i: msvs) {
        cout << i.first << " : " << i.second.first << " " << i.second.second << endl;
    }
    map<string,int>::key_type a("hehe");
    cout << a << endl;
    return 0;
}
