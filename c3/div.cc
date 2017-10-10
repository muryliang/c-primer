#include "my.h"

int main () {
    try {
        int a = 2 / 0;
    }
    catch (std::logic_error err) {
        cout << "error: " << err.what() << endl;
    }
    return 0;
}
