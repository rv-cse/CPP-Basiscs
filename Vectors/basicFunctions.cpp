#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> sample ;
    
    sample.push_back(50) ;
    sample.push_back(40) ;
    sample.push_back(30) ;

    // cout << sample[0] << "\n" ;

    for ( int value : sample ){
        cout << value << "\n" ;
    }

    cout << "Size after push = " << sample.size() << "\n" ;

    cout << sample.front() << "\n" ;  // to print the first element of vector
    cout << sample.back() << "\n" ;   // to print thr last element of vector

    sample.pop_back() ;
    sample.pop_back() ;

    for (int value1 : sample){
        cout << value1 ;
    }

    cout <<"\n" ;

    cout << "Size after pop = " << sample.size() << "\n" ;

    return 0;
}