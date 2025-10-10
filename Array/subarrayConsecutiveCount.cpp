#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,2,7};

    int k = 5;

    int count = 0 ;

    for ( int i = 0 ; i < 5 ; i++ ){
        if ( arr[i] + arr[i+1] == k ){
            count++ ;
        }
    }

    cout << "The count is : " << count  << "\n" ;

    return 0 ;
}