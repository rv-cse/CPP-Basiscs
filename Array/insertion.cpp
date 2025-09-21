#include<iostream>
using namespace std;

int main(){
    int arr[10], n , newElement , loc ;

    cout << "Enter the number of elements in array out of 10 : " ;
    cin >> n;
    
    cout << "Enter " << n << " Elements : " ;

    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    cout << "Enter the Element which you want to insert : " ;
    cin >> newElement ;

    cout << "Enter the location : " ;
    cin >> loc ;

    if(n == 10){
        cout << "Overflow condition." ;
        return 0;
    }

    for( int k = n-1 ; k >= loc ; k-- ){    // k is index of last element
            arr[k+1] = arr[k] ;
        }

    arr[loc] = newElement ;

    n = n+1 ;

    cout << "Array after Insertion : " ;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }

    cout << "\n" ;

    return 0;
}