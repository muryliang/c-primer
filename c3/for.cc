#include "my.h"

int main() {
    int ia[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    using int_arr = int[3] ;
    for (int_arr *p = ia; p != &ia[2]; p++)  {
        for (int *q = *p; q != &(*p)[3]; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }
    /*
    for (int_arr &p : ia){
        for (int  q : p) {
            cout << q << " ";
        }
        cout << endl;
    }
    */
    
    /*
    for (size_t i = 0; i < 2; i++)
        for (size_t k = 0; k < 3; k++)
            cout << ia[i][k] << " ";
    */
    return 0;

}
