#include<iostream>
using namespace std;

int main(){
    int r[10] = {1,2,3,4,5,6,7,8,9} ;

    int capacity = 10 ;
    int n = 9 ;
    
    if ( capacity <= 0 ){
        cout << "Overflow Condition !" ;
    }
    else{

    int loc;

    cout << "Enter the location : " ;
    cin >> loc ;
    
    for( int k = loc-1; k < n ; k++){
        r[k] = r[k+1] ;
    }

    n = n-1 ;

    cout << "Array after deletion : " ;
    for ( int i = 0 ; i < n ; i++ ){
        cout << r[i] << " " ;
    }

    }

    return 0;
}