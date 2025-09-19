#include<iostream>
using namespace std;

int change(int a){
    a = a*10 ;

    cout << "a = " << a << "\n" ;

    return 0;
}

int main(){
    int c = 5;

    change(c);

    cout << "c = " << c << "\n" ;

    return 0;
}