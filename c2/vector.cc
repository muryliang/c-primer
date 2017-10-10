#include "my.h"

int main() {
    vector<int> iv(10, 42);
    vector<int> iv2 = {42,42,42,42,42,42,42,42,42,42};
    vector<int> iv3;
    for (int i = 0; i < 10; i++)
        iv3.push_back(42);
    vector<string> vs;
    string tmp;
    while (cin >> tmp)
        vs.push_back(tmp);

    for (auto c: vs)  {
        for (auto &d: c) {
            d = toupper(d);
        }
        cout << c << endl;
    }
    return 0;

}
