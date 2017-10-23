#include "my.h"

int main() {
    string pattern("([[:alpha:]]+)\\.c(pp|ee)");
    regex r(pattern);
    smatch results;
    string test_str = "hehe.cee";
    string ss;
    std::regex_replace(std::back_inserter(ss), test_str.begin(), test_str.end(), r, "$2###rrrr###$2####$0");
    cout << ss << endl;
    return 0;
}
