#include "my.h"

int main(int ac, char *av[]) {
    if (ac == 1) {
        cerr << "need one argument" << endl;
        return -1;
    }

    fstream fs(av[1], ostream::app);
    fs << "hehe" << endl;
    fs.close();
    return 0;
}

