#include <iostream>
using namespace std;
int main(){
    int input;
    int how;

    cin >> input;
    for(int j=0;j<input;j++){

        cin >> how;

        for(int i=0;i<how;i++){
            cout << "Hello World\n";
        }
        cout << endl;
    }
    return 0;
}