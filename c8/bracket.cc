#include "my.h"


void process(istringstream & );
int main() {
    string s("( 1 + 2 ) * ( 3 + 4 )");
    istringstream iss(s);
    process(iss);
    return 0;
}

void process(istringstream& in) {
    string chr;
    stack<string> ss;
    while (in >> chr) {
        if ( chr == ")") {
            if (ss.empty()) {
                cerr << "some error" << endl;
                return;
            }
            string s, tmp;
            while ((tmp = ss.top()) != "(") {
                s.append(tmp);
                ss.pop();
            }
            ss.pop(); //pop "("
            ss.push(s);
        } else {
            ss.push(chr);
        }
    }
    string s;
    while (!ss.empty()) {
        s.append(ss.top());
        ss.pop();
    }
    cout << s << endl;
}
        

