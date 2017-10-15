#include "my.h"

int main() {
    ifstream ifs("/tmp/aa");
    ofstream ofs1("/tmp/odd", ostream::out), ofs2("/tmp/even", ostream::out);
    istream_iterator<int> ii(ifs), eof;
    ostream_iterator<int> o1(ofs1, " "), o2(ofs2, " ");
    while (ii != eof) {
        if (*ii % 2)
            o1 = *ii;
        else
            o2 = *ii;
        ++ii;
    }
    return 0;
}
