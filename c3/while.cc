#include "my.h"

int main() {
    int i = 1;
    int j = 2;
    int k = 3;
    auto res = (i != j) < k;
    cout << res << endl;
    return 0;
}
