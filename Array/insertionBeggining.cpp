#include<iostream>
using namespace std;

int main(){
    int n, data, newElement, arr[10] ;

    cout << "Enter the number of elements = ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Element which you want to insert : " ;
    cin >> newElement ;

    if(n == 10){
        cout << "Overflow condition." ;
        return 0;
    }
    
    for( int k = n-1 ; k >= 0 ; k-- ){
            arr[k+1] = arr[k] ;
    }

    arr[0] = newElement;

    n = n+1;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}