#include <bits/stdc++.h>
using namespace std;

string whatLine(string input){
    string ans = "";
    int n = input.length();
    for(int i=0;i<n;i++){
        int count = 1;
        while(i+1<n && input[i]==input[i+1]){ // if left is false, it can't  run right
            count++;
            i++;
        }
        ans += to_string(count) + input[i];
    }
    return ans;
}
int main(void){
    int input;
    while(cin >> input){

        if(input==-1){
            break;
        }

        string str = "1";
        while(input--){
            str = whatLine(str);
        }
        cout << str << endl;
    }
    
}