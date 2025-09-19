#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n ;
    cout << "Enter the size of array : " ;
    cin >> n ;


    int sam[n] ;

    cout << "Enter the elements of array : " ;

    for( int i = 0 ; i < n ; i++ ){
        cin >> sam[i] ;
    }

    cout << "The elements of array are : " ;

    for( int i = 0 ; i < n; i++ ){
        cout << sam[i] << " " ;
    }
    
    int largest = INT_MIN ;

    for ( int i = 0 ; i < n ; i++ ){
        if(sam[i] > largest) ;
        largest = sam[i] ;
    }
    
    cout << "\nThe largest number is : " << "\n" ;
    cout << largest ;

    return 0;
}