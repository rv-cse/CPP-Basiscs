#include<iostream>
using namespace std;

int main(){
    int arr[10] = {78,45,12,63,41,94,75,61,45,18} ;

    int n = 41;

    for ( int i = 0 ; i < 10 ; i++ ){
        if(arr[i] == n){
            cout << "The index no is : " << i << "\n" ;
        }
    }

    return 0;
}