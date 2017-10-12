#include "my.h"

int main() {
    ifstream is("/tmp/bb");
    if ( !is ) {
        cerr << "can not open file for read" << endl;
        return -1;
    }

    string line;
    vector<string> vs;
    while (std::getline(is, line)) {
        vs.push_back(line);
    }

    for (auto st: vs) {
        cout << st << endl;
    }

    return 0;
}

