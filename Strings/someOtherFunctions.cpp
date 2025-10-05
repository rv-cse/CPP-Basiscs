#include <iostream>
#include<string>

using namespace std;

int main(){
    string s = "Transformer" ;

    s.push_back('d') ;  // s.push_back()

    cout << s << endl;

    s.append("Movie") ;

    cout << s << endl;

    s.clear() ;

    cout << s.length() << endl;

    return 0;
}