#include <bits/stdc++.h>
using namespace std;
int main(void){
    string input;
    while(getline(cin, input)){
        stack<char> s;

        for(char i : input){
            if(!s.empty() && s.top() == i){ // 非空的+東西一樣
                s.pop(); // 丟出去
            }else{
                s.push(i); // 塞進去
            }
        }
        if(s.empty()){
            cout << "SUCCESS" << endl;
        }else{
            cout << "FAIL" << endl;
        }
    }
}
