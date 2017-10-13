#include "my.h"

int main() {
    vector<string> vi = {"1", "2", "3"};
    double sum = 0;
    for (auto i: vi) {
        sum += std::stod(i);
    }
    cout << sum << endl;
    return 0;
}
