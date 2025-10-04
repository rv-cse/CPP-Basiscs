#include<iostream>
using namespace std;

int main(){
    string q = "animals live in jungle";\

    int count = 0 ;

    for ( int i = 0 ; i < q.length() ; i++ ){
        if( q[i] == 'a' || q[i] == 'e' || q[i] == 'i' || q[i] == 'o' ||q[i] == 'u' ){
            count++ ;
        }
        
    }

    cout << count << "\n" ;

    return 0;
}
