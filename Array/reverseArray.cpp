#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0, end = size-1 ; 

    while(start <= end){
        swap( arr[start] , arr[end] ) ;
        start++ ;
        end-- ;
    }
}

int main(){
    int arr[] = {0,1,4,3,4,5,6,45,98,78} ;
    int size = 10 ;

    reverse(arr , size) ;

    cout << "The reverse array is : " ;

    for ( int i = 0 ; i < size ; i++ ){
        cout << arr[i] << " " ;
    }

    cout << "\n" ;

    return 0;
}