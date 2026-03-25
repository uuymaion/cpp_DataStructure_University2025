#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    
    while(getline(cin, input)){
        if(input.empty()){
            continue;
        }
        cout << "Hello " << input << endl;
    }
    return 0;
}