#include "my.h"

int main() {
    int ia[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    for (auto &p : ia){
        for (auto  q : p) {
            cout << q << " ";
        }
        cout << endl;
    }
    
    /*
    for (size_t i = 0; i < 2; i++)
        for (size_t k = 0; k < 3; k++)
            cout << ia[i][k] << " ";
    */
    return 0;

}
