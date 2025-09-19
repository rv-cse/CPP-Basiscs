#include<iostream>
using namespace std;

int main(){
    int count;
     
    while(true)
    {
        int n ;
        cin >> n ;

        count++;

        if(n%2 != 0){
            break;
        }

    }

    cout << count ;
    
}