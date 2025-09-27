#include<iostream>
using namespace std ;

void swap(int &x , int &y){
    int temp ;

    temp = x ;
    x = y ;
    y = temp ;

    return;
}

int main(){
    int a,b ;
    cout << "Enter two numbers : " ;
    cin >> a >> b ;
    
    swap(a,b);

    cout <<  "After swap A = " << a << " B = " << b << "\n" ;

    return 0 ;
}