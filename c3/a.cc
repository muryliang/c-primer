#include "my.h"

int main() {
    int ai[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    auto &p = ai;
    cout << p[1][2] << endl;
    return 0;

}
