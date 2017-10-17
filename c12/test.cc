#include "my.h"

void getaline(istream &is) {
    string line;
    size_t count = 0;
    while (getline(is, line)) {
        cout << count << " : " << line << endl;
        count++;
    }
}
int main() {
    ifstream ifs("/tmp/aa");
    getaline(ifs); 
    return 0;
}
