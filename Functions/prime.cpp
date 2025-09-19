#include <iostream>
using namespace std;

int prime(int x){
    bool isPrime = true ;

    if (x <= 1){
        isPrime = false ;
    }
    else{
        for ( int i = 2 ; i < x ; i++ ){
            if(x%i == 0){
                isPrime = false ;
                break;
            }
        }
    }
    return isPrime ;
}

int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    if (prime(n)){
        cout << "The given number is Prime." << "\n" ;
    }
    else{
        cout << "The given number is not Prime." << "\n" ;
    }


    return 0;
}