#include<iostream>
using namespace std;

int main(){
    int s ;     // s is the size of the array
    cout << "Enter the size of the array : " ;
    cin >> s ;

    int n, newElement, arr[s] ;

    cout << "Enter the number of elements : ";
    cin >> n;

    if(n == s){
        cout << "Overflow condition!" << "\n" ;
        return 0;
    }

    cout << "Enter " << n << " Elements : " ;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the Element which you want to insert : " ;
    cin >> newElement ;

    int k = n-1 ;

    arr[k+1] = newElement ;

    n= n+1 ;

    cout << "Array after Insertion : " ;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }

    cout << "\n" ;
    
    return 0;
}