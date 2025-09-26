#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector <int> name ; // creates a vector with 0 values.

    // cout << name[0];


    // vector <int> var = {2,4,6,8,0} ;

    // cout << var[0] << "\n";
    // cout << var[1] << "\n";
    // cout << var[2] << "\n";
    // cout << var[3] << "\n";
    // cout << var[4] << "\n";   

    vector <int> vec(5,1) ; 

    cout << vec[2] << "\n";
    cout << vec[3] << "\n";
    cout << vec[1] << "\n";
    cout << vec[4] << "\n";
    cout << vec[0] << "\n";

    return 0;
}