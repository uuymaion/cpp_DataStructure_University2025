#include <bits/stdc++.h>
using namespace std;
// not a effective method
int main(void){
    int input;
    while(cin >> input){
        int count = 1;
        while(input!=1){
            count++;
            if(input%2==1){
                input = input*3 + 1;
            }else{
                input /= 2;
            }
        }
        cout << count << endl;
    }
}