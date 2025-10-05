#include<iostream>
using namespace std;

int main(){
    string q ;

    cout << "Enter a Sentence : " ;
    getline(cin,q) ;

    int count = 0 ;

    for ( int i = 0 ; i < q.length() ; i++ ){
        if( q[i] == 'a' || q[i] == 'e' || q[i] == 'i' || q[i] == 'o' ||q[i] == 'u' ){
            count++ ;
        }
    }

    cout << "The number of vowels in the sentence is : " << count << "\n" ;

    return 0;
}
