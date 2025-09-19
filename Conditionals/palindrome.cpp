#include <iostream>
using namespace std;

int main(){
    int n;
    int original;
    int rev = 0;
    int rem;

    cout << "Enter the number : " ;
    cin >> n ;

    original = n ;

    while(n>0){
        rem = n % 10 ;                          // For last number
        rev = rev * 10 + rem ;                  // Build reverse number
        n = n / 10 ;                            // Remove last digit
    }

    if(original == rev){
        cout << "This is Palindrome." ;
    }
    else{
        cout << "This is not Palindrome." ;
    }

    return 0;
}
