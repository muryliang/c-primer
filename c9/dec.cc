#include "my.h"

int main() {
    int k ;
    cout << "input a number" << endl;
    cin >> k;
    auto f = [&k]() -> bool { 
        if (k <= 0) {
            return true;
        }
        while (--k > 0) ;
        return false;
    };
    cout << f() << endl;
}
