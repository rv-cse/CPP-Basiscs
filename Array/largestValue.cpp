#include<iostream>
#include<climits>

using namespace std;

int main(){
    int one[10] = {34,56,26,78,96,70,35,64,27,18} ;

    int largest = INT_MIN ;

    for(int i = 0 ; i <= 9 ; i++){
        if( one[i] > largest ){
            largest = one[i];
        }
    }

    cout << largest << "\n" ;

    return 0;
}