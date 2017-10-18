#include "msg.h"

int main() {
    Message msg1("msg1"), msg2("msg2");
    Folder fold1("fold1"), fold2("fold2");
    msg1.save(fold1);
    msg2.save(fold1);
    msg1.save(fold2);
    cout << "after init saving" << endl;
    fold1.show();
    fold2.show();
    msg1.remove(fold1);
    cout << "after remove msg1 from fold1" << endl;
    fold1.show();
    msg1 = msg2;
    cout << "after assign msg2 to msg1" << endl;
    fold1.show();
    fold2.show();
    return 0;
}

