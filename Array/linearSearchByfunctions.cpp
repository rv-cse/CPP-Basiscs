#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int search){
    for( int i = 0 ; i < size ; i++){
        if(arr[i] == search){
            return i ;
        }
    }
    return -1;
}

int main(){
    int arr[] = {8,9,5,4,6,7,1,3,12,18} ;
    int size = 10 ;
    int search = 3 ;

    cout << "The index Number is : " << linearSearch( arr, size, search) << "\n" ;

    return 0;
}