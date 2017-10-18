#include "my.h"

struct C {
    static int count;
    vector<int> a;
    C(vector<int> p ):a(p) {};
    C(const C& q) {a = q.a; cout << " in copy" << endl;}
//    C(C&& q) {a = std::move(q.a);  cout << "in move constructor" << endl;}
    C& operator=(const C& q) { a = q.a; cout << "in assign" << endl; return *this;}
//    C& operator=(C&& q) noexcept { a = std::move(q.a); cout << "in move assign" << endl;  return *this;}
    C sorted() const &;
//    C sorted() const &&;
};

C create() {
    return C(vector<int>{1,2,3,4});
}
int C::count = 0;
C C::sorted() const & {
//    C ret(*this);
    cout << "in sorted" << ++count << endl;
 //   return ret.sorted();
    return create().sorted();
}
/*
C C::sorted() const && {
    C ret(*this);
    cout << "in right sorted" << ++count << endl;
    return create().sorted();
 //   return create().sorted();
}
*/
int main() {
    vector<int> k{1,2,3,4,5};
    C a(k);
    C b(a);
    C c(std::move(b));
    c = a;
    C d(k);
    d =  std::move(c);
    cout << "done" << endl;
    create().sorted();
    return 0;
}
