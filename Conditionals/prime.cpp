/*we can also check with using sqrt(n) for best performance and speed. For using sqrt we add a library <cmath>*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    bool isPrime = true ;

    if(n <= 1){
        isPrime = false ; 
    }
    else{
        for(int i = 2 ; i <= n-1 ; i++){
            if( n%i == 0 ){
                isPrime = false ;  
                break;
            }    
        }
    }

    if(isPrime){
        cout << "The given number is prime.\n" ;
    }
    else{
         cout << "The given number is not prime.\n" ;
    }

    return 0;
}
