#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter array size : " ;

    cin >> n ;
     
    int arr[n];

    cout << "Enter array elements : " ;
    
    for (int i = 1 ; i <= n ; i++){
        cin >> arr[i];
    }

    cout << "The elements of array are : " ;

    for (int i = 1 ; i <= n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}