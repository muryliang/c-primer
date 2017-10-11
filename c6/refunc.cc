#include "my.h"

void f(){
    cout << "no args" << endl;
}

void f(int a) {
    cout << "one int" << endl;
}

void f(int a, int b) {
    cout << "two int" << endl;
}

void f(double a , double b = 3.14){ 
    cout << "two double with one default" << endl;
}

/*
void f(char a) {
    cout << "one char" << endl;
}
*/
void f(short a) {
    cout << "one short" << endl;
}
int main() {
    f('2');
}
