#include <iostream>
#include <string>
using namespace std;
int main(){
    int how;
    cin >> how;
    int num;
    string input;
    
    for(int i=0;i<how;i++){
        cin >> num;
        cout << "Hello ";
        cin.ignore();
        for(int j=0;j<num;j++){
            getline(cin, input);
            cout << input;
            if(j!=num-1){
                cout << ", ";
            }
        }
        cout << endl;
    }
}