#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector <DATATYPE> VECTOR NAME ;
    // for ( DATATYPE NAME : VECTOR NAME)

    vector <char> alphabet = {'a','b','c','d','e'} ;

    for(char val : alphabet){
        cout << val << "\n" ;
    }

    //To find the size of the variable :  variable_name.size()
    
    cout << "Size = " << alphabet.size() << "\n" ;  

    return 0;
}