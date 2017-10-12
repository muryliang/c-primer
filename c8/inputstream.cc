#include "my.h"

int main() {
    vector<string> vs;
    ifstream ifm("/tmp/bb");
    if (!ifm) {
        cerr << "can not open file" << endl;
        return -1;
    }
    string line;
    while (getline(ifm, line)) {
        vs.push_back(line);
    }

    ifm.close();
    istringstream ism; 
    for (auto row: vs) {
//        istringstream ism(row); //auto destructed every loop
//        cout << "now " <<  row << endl;
        ism.str(row);
        if (!ism) {
            cerr << " ism failed" << endl;
        }
        string word;
        while (ism >> word) {
            cout << word << endl;
        }
        ism.clear();
    }

    return 0;
}
