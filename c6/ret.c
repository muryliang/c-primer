#include <stdio.h>

char * ch(void) {
    return "hehe";
}
int main(void) {
    char *p = ch();
    printf ("%s", p);
    return 0;
}
