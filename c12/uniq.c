#include "my.h"

int main() {
    unique_ptr<int> up(new int(32));
//    unique_ptr<int> down(up);
    return 0;
}
