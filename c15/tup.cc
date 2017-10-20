#include "my.h"

int main() {
    std::tuple<int, string, vector<int>> tt(20,"hehe",{1,2,3,4});
    std::tuple<int, string, vector<int>> tt2(20,"hehe",{1,2,3});
    cout << std::get<1>(tt) << endl;
    cout << std::tuple_size<decltype(tt2)>::value << endl;
    return 0;
}
