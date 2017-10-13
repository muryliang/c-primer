#include "my.h"

class mdate {
    private:
        string month;
        string year;
        string date;
    public:
        mdate(const string& time);
        void pdate() {
            cout << month << " " << date << " " << year << endl;
        }
};

mdate::mdate(const string& time) {
    //jan 1, 1990
    if (time.find(',') != string::npos) {
        string::size_type blank = time.find_first_of(' ');
        month.assign(time.substr(0, blank));
        string::size_type comma = time.find_first_of(',');
        date.assign(time.substr(blank+1, comma - blank - 1));
        string::size_type blank2 = time.find_last_of(' ');
        year.assign(time.substr(blank2+1));
        cout << month  << " " + date << " " + year << endl;
    }
}

int main() {
    mdate d("January 1, 1990");
    return 0;
}

