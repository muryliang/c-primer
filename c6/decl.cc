#include "my.h"

int g[10] = {1,2,3,4,5,6,7};
using int_array = int[10];

//int (&ch(void))[10] { 
//int_array& ch() {
//auto ch() -> int(&)[10] {
decltype(g)&  ch() {
    return g;
}

int main() {
    int (&a)[10] = ch();
    a[3] = 20;
    for (auto i: g) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
