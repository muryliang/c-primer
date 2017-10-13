#include "my.h"

int main() {
    vector<int> vi = {1,2,3,4,5,6};

    auto iter = vi.begin();
    while (iter != vi.end() ){
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        iter++;
        cout << "done" << endl;
    }
    return 0;
}
