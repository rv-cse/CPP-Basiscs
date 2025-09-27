#include <iostream>
using namespace std;

int main(){
    int s ;   // s is size of array
    cout << "Enter the size of array : " ;
    cin >> s ;

    int arr[s] , n ;   // n = number of elements in array 

    cout << "Enter the number of elements in array : " ;
    cin >> n ;

    if (n <= 0){
        cout << "Underflow Condition!" << "\n";
    }else{

    cout << "Enter " << n << " elements : " ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    arr[0] = 0 ;
    
    for ( int s = n-n ; s < n ; s++ ){
    arr[s] = arr[s+1] ;
    }

    n = n-1 ;

    cout << "Array after deletion from Beginning : " ;

    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " " ; 
    }
    }

    return 0;
}