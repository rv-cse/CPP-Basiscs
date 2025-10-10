#include<iostream>
using namespace std;

int main(){
    int one[10];
    int two[10];
    int sum[10];

    int n ;
    cout << "Enter the number of elements in array : " ;
    cin >> n ;
    
    cout << "Enter " << n << " elements of first array : " << "\n" ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> one[i] ;
    }

    cout << "Enter " << n << " elements of second array : " << "\n" ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> two[i] ;
    }

    for ( int i = 0 ; i < n ; i++ ){
        sum[i] = one[i] + two[i] ;
    }

    cout << "The new array is : " ;

    for ( int i = 0 ; i < n ; i++ ){
        cout << sum[i] << " " ;
    }

    return 0 ;
}