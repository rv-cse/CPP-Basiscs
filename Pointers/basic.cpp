#include <iostream>

using namespace std;

int main(){
    int one = 5 ;
    int* ptr = &one ;

    cout << &one << "\n" ;
    cout << ptr << "\n" ;
    cout << *ptr << "\n" ;

    int** ptr2 = &ptr ;

    cout << &ptr << "\n" ;
    cout << ptr2 << "\n" ;
    cout << *ptr2 << "\n" ;

    return 0;
}