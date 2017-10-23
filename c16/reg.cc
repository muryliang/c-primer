#include "my.h"

int main() {
    string pattern("[[:alpha:]]+\\.c(pp|ee)");
    regex r(pattern);
    smatch results;
    string test_str = "hehe.cee";
    if (regex_search(test_str, results, r)) {
        cout << results.ready() << " " <<results.size() << " " << results.empty() << endl;
        for (auto i = results.begin(); i != results.end(); ++i) {
            cout << results.position(i - results.begin()) << endl;
            cout << i->str() << endl;
        }
    }
    return 0;
}
