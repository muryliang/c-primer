#include "my.h"
#include <ctime>

int main() {
    std::default_random_engine e;
    std::uniform_int_distribution<unsigned> u(0,6);
    e.seed(std::time(0));
    vector<int> vi(6, 0);
    for (auto i = 0; i < 100; ++i) {
        vi[u(e)]++;
    }
    for (auto i = 0; i < 6; ++i) {
        cout << i << ": " << string(vi[i], '*') << endl;
    }
    return 0;
}
