#include "my.h"

class func{
    public:
        int operator()(int a, int b) {
            return a + b;
        }
};
int mymul(int a, int b){ 
    return a * b;
}

int main() {
    std::function<int(int,int)> fii1 = mymul, fii2 = func();
    std::function<int(int,int)> fii3 = [](int a, int b) { return a+b*2 ;};
    cout << fii1(1,2) << " " << fii2(2,3) << " " << fii3(2,3) << endl;

    return 0;
}
