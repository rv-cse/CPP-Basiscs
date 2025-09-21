#include <iostream>
using namespace std;

int main(){
    int arr[5], n, newElement, loc ;

    cout << "Enter the number of elements in array out of 5 : " ;
    cin >> n ;

    if( n == 5 ){
        cout << "Overflow Condition" ;
        return 0;
    }

    cout << "Enter the elements : " ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    cout << "Enter the new element :" ;
    cin >> newElement ;

    cout << "Enter location : " ;
    cin >> loc ;



    


}