#include<iostream>
using namespace std;

int sum(int x);

int sum(int x){
    int sum = 0 ;
    int rem;

    while(x>0){
        rem = x % 10 ;
        sum = sum + rem ;
        x = x / 10 ;
    }

    return sum;
}

int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    cout << "The sum of digits is : " << sum(n) << "\n" ;

    return 0;
}