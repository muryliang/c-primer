#include "my.h"

int main() {
    char *a = "hehe";
    char *b = "haha";
    char *p = new char[20]();
    strcpy(p,a);
    strcat(p,b);
    cout << p << endl;
    return 0;
}
