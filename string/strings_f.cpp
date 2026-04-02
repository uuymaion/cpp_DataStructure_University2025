#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    int how; cin >> how;
    while(how--){

        string input; cin >> input;
        int count = 0;

        for(int i=0;i<input.length();i++){
            if(input[i]=='O'){
                count++;
                int temp = 2;
                while(i+1<input.length() && input[i+1]=='O'){
                    count += temp;
                    temp++;
                    i++;
                }    
            }
        }
        cout << count << endl;
    }
}