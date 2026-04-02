#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    vector<string> list;
    string input;

    while(getline(cin, input)){
        if(input=="0")break;

        if(isalpha(input[input.length()-1])){
            input = input + " ";
        }

        string voc = "";

        for(char c : input){
            if(isalpha(c)){
                voc = voc + c;
            }else if(!isalpha(c) && !voc.empty()){
                int index = -1;

                for(int i=0;i<list.size();i++){
                    // cout << list[i] << "/";
                    if(list[i]==voc){
                        index = i;
                        break;
                    }
                }
                if(index!=-1){
                    cout << index+1;
                    list.erase(list.begin()+index);
                }else{
                    cout << voc;
                }
                list.insert(list.begin(), voc);
                voc = "";
                cout << c; 
                
            }else if(!isalpha(c) && voc.empty()){
                cout << c;
            }
        }
        cout << endl;
    }
}