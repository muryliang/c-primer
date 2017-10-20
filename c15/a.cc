#include "my.h"

/* 
 * 参数的右值引用表示保留传入参数的引用左右特性，
 * 如果内部要传给其他函数，还需要std::forward<T>(arg) 作为参数才行
 */
template <typename T> void sw(T &&a, T &&b) {
    typename std::remove_reference<T>::type tmp = a;
    a = b;
    b = tmp;
}

class A {
    friend ostream& operator<<(ostream &os, const A& p);
    private:
        int a;
        int b;
    public:
        A(int m = 20, int n=30): a(m), b(n) {}
};

ostream& operator<<(ostream &os, const A& a) {
    return os << a.a << " and " << a.b << endl;
}

int main() {
    vector<A> vi;
    vi.emplace_back();
    cout << "print vi" << endl;
    ploop(vi);
    return 0;
}

