#include <iostream>
using namespace std;

int main(){
    string s ;

    cout << "Enter a Sentence : " ;
    getline(cin,s) ;

    for ( int i = 0 ; i < s.length() ; i++ ){
        if( i % 2 == 0 ){
            s[i] = 'A' ;
        }
    }

    cout << "After change : " << s << endl ;

    return 0;
}