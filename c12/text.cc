#include "text.h"

ostream& print(ostream& co, TextResult tr) {
    return tr.print(co);
}

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    cout << "read done" << endl;
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main(int ac, char *av[]) {
    if (ac != 2) {
        cerr << "error number of args, must be 2" << endl;
        return -1;
    }
    ifstream infile(av[1]);
    runQueries(infile);
    return 0;
}
