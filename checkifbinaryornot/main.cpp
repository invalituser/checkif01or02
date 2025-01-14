#include<iostream>
#include<string>
using namespace std;

int main(){

    string binary = "101010";
    //int counter0s = 0; int counter1s;

    for(int counter = 0; counter < binary.length(); counter++){

        if ( binary[counter] != '0' && binary[counter] != '1'){
            cout << "\nerror";
            return 1;
        }   
        
    }
    cout << "that's true" << endl;
    return 0;    
}