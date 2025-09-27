#include <iostream>
using namespace std ;

int sumOfNatural(int a){
    int sum = 0 ;
    for (int i = 1 ; i <= a ; i++ ){
        sum = sum + i ;
    }
    return sum ;
}

int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;

    cout << "The sum of natural numbers is : " << sumOfNatural(n) << "\n" ;

    return 0 ;
}