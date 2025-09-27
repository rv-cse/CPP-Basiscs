#include<iostream>
using namespace std;

int main(){
    int s ;   // s is size of array
    cout << "Enter the size of array : " ;
    cin >> s ;

    int arr[s] , n ;   // n = number of elements in array 
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }
    cout << "Enter the number of elements in array : " ;
    cin >> n ;

    cout << "Enter " << n << " elements : " ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] ;
    }



     

}