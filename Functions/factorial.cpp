#include<iostream>
using namespace std;

long factorial(int n){
    long fac = 1;

    for(int i = 1; i <= n ; i++){
        fac = fac * i ;
    }

    return fac;
}

int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    cout << "The factorial of " << n << " is : " << factorial(n) << "\n" ;
     
    return 0;
}