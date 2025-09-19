#include<iostream>
using namespace std;

int factorial(int x);

int factorial(int x){
    int factorial = 1 ;

    for(int i = 1 ; i <= x ; i++){
        factorial = factorial * i ;
    }

    return factorial;
}

int main(){
    int n,r ;

    cout << "Enter the value of n and r : " ;
    cin >> n >> r ;

    int ncr ;

    ncr = factorial(n) / (factorial(r) * factorial(n-r));
    
    cout << "The ncr is : " << ncr << "\n" ;

    return 0;
}