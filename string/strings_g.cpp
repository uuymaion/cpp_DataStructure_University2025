#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void){
    string input;
    while(cin >> input){
        int len = input.length();
        input += input;
        
        set<string> str;
        
        for(int i=0;i<len;i++){
            string temp = "";

            for(int j=0;j<len;j++){
                temp += input[i+j];
            }

            if(!str.count(temp)){ // 檢查temp是否有和str存的東西重複
                cout<<temp<<" ";
            }
            str.insert(temp);
        }
        
        
        cout<<endl;
        

    }
}