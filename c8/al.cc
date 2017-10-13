#include "my.h"

int main() {
    const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    const char digit[] = "1234567890";
    const char filter[] = "bdfhikltgjpqy";

    ifstream ifs("/tmp/word.txt");
    if (!ifs) {
        cerr << "can not open file" << endl;
        return -1;
    }

    string word, lword("");
    string::size_type start = 0, wlen = 0;
    while (ifs >> word) {
        string::size_type len = 0, end = 0;
        while (end != word.size()) {
            start = word.find_first_not_of(filter, end);
            if (start == string::npos)
                break;
            end = word.find_first_of(filter, start+1);
            if (end == string::npos)
                end = word.size();
            len = end - start;
            if (wlen < len) {
                wlen = len;
                lword = word;
            }
        }
    }
    cout << "largest: " << lword << " len: " << wlen << endl;
    return 0;
}
