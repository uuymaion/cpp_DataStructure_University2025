#include <iostream>
using namespace std;
int main(){
    int input;
    while(cin >> input){
        if(input == 0){
            break;
        }else{
            cout << input << " is the input number" << endl;
        }
    }
    return 0;

}