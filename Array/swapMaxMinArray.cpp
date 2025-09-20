#include<iostream>
#include<climits>

using namespace std;

int reverse( int largest ,int smallest ){
    int temp = largest;
    largest = smallest;
    smallest = temp ;
    
    return ;
}

int main(){
    int arr[] = {5,4,8,7,1,2,9,3,6} ;
    int size = 9 ;


    int largest = INT_MIN ;

    for ( int i = 0 ; i < size ; i++ ){
        if (arr[i] > largest ){
            largest = arr [i] ;
        }
    }

    int smallest = INT_MAX ;

    for ( int i = 0 ; i < size ; i++ ){
        if ( arr[i] < smallest){
            smallest = arr[i] ;
        }
    }

    cout << largest << "\n" << smallest ;



    return 0;
}