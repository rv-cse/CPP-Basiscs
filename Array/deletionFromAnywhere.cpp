#include<iostream>
using namespace std;

int main(){
    int s ;   // s is size of array
    cout << "Enter the size of array : " ;
    cin >> s ;

    int arr[s] , n ;   // n = number of elements in array 

    cout << "Enter the number of elements in array : " ;
    cin >> n ;

    if ( n <= 0 ){
        cout << "Overflow Condition !" ;
    }
    else{
        cout << "Enter " << n << " elements : " ;

        for ( int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ;
        }

        int loc;

        cout << "Enter the location : " ;
        cin >> loc ;
    
        for( int k = loc-1; k < n ; k++){
            arr[k] = arr[k+1] ;
        }

        n = n-1 ;

        cout << "Array after deletion : " ;
        
        for ( int i = 0 ; i < n ; i++ ){
            cout << arr[i] << " " ;
        }
    }

    return 0;
}