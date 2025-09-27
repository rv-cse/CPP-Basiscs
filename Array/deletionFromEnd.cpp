#include <iostream>
using namespace std;

int main(){
    int Q[10] = {2,3,4,5,6,7,8,9} ;

    int capacity = 10 ;
    int n = 8 ; // n = number of elements

    if (capacity <= 0){
        cout << "Underflow Condition!" ;
    }

    int k = n-1 ;

    Q[k] = 0 ;

    cout << "Array after deletion : " ;

    for ( int i = 0 ; i < capacity ; i++ ){
        cout << Q[i] << " " ;
    }

    return 0;
}