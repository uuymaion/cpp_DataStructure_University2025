#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string input;
    while(getline(cin, input)){
        if(input.empty()){
            continue;
        }

        stringstream ss(input);
        int num;
        int total = 1;
        while(ss >> num){
            total *= num;
        }

        for(int i=0;i<total;i++){
            cout << "Hello World\n";
        }
        cout << endl;
    }
    return 0;
}