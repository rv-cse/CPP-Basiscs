#include <iostream>
#include <climits>

using namespace std;

int main(){
    int arr[9] = {84,23,8,4,12,56,34,23,63} ;

    int smallest = INT_MAX;

    for(int i = 0 ; i <= 8 ; i++){
        if( arr[i] < smallest ){
            smallest = arr[i] ;
        }
    }

    cout << smallest << "\n" ;

    return 0;
}