#include "query.h"

int main() {
    ifstream ifs("/tmp/aa");
    if (!ifs) {
        cerr << "can not open" << endl;
        return -1;
    }
    TextQuery tq(ifs);
    ifs.close();
    string word;
    cout << "input: " << endl;
    while (cin >> word) {
        TextResult tr = tq.query(word);
        cout << tr;
    }
    return 0;
}
