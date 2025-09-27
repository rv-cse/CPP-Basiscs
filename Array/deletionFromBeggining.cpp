#include <iostream>
using namespace std;

int main(){
    int Q[10] = {2,3,4,5,6,7,8,9} ;

    int capacity = 10 ;
    int n = 8 ; // n = number of elements

    if (capacity <= 0){
        cout << "Underflow Condition!" ;
    }

    Q[0] = 0 ;
    
    for ( int s = n-n ; s < n ; s++ ){
        Q[s] = Q[s+1] ;
    }

    n = n-1 ;

    cout << "Array after deletion : " ;

    for ( int i = 0 ; i < n ; i++ ){
        cout << Q[i] << " " ; 
    }

    return 0;
}