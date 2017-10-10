#include "my.h"

int main() {
    int mcount = 0;
    string ms, tmp;

    if (cin >> tmp) {
        int tcount = 1;
        string ts = tmp;
        while (cin >> tmp) {
            if (ts == tmp) {
                ++tcount;
//                cout << "now tcount is " << tcount << " for " << tmp << endl;
            } else {
                if (tcount > mcount) {
                    mcount = tcount;
                    ms = ts;
                }
                ts = tmp;
                tcount = 1;  // restart
            }
        }
        if (tcount > mcount) {
            mcount = tcount;
            ms = ts;
        }
    }
    cout << "max: " << ms << " , count: " << mcount << endl;
    return 0;
}
        

