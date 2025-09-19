#include<iostream>
using namespace std;

int main(){
    int n, newElement, arr[10] ;

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

    arr[n+1] = newElement;
   
    for(int i = 0; i < n+1; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}