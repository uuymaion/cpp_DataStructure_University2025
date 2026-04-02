#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    vector<string> list;
    string input;

    while(getline(cin, input)){
        if(input=="0")break;
        
        // 若有句尾無標點符號，就加一個空格來辨識
        if(isalpha(input[input.length()-1])){ 
            input = input + " ";
        }

        // 建立一個放單字的空間
        string voc = "";

        // 逐字讀
        for(char c : input){

            if(isalpha(c)){ // 是字母就存進voc
                voc = voc + c;
            }else if(!isalpha(c) && !voc.empty()){ // 非字母
                int index = -1; // 起始值用來辨識index有沒有變動
                for(int i=0;i<list.size();i++){
                    // 測試用
                    // cout << list[i] << "/"; 
                    if(list[i]==voc){ // 有人和voc一樣就紀錄
                        index = i;
                        break;
                    }
                }
                if(index!=-1){ // index沒變代表list沒有這個字
                    cout << index+1;
                    list.erase(list.begin()+index); // 刪除list的索引index上的字
                }else{
                    cout << voc;
                }
                list.insert(list.begin(), voc);
                voc = "";
                cout << c; 
                
            }else if(!isalpha(c) && voc.empty()){ // 避免出現連續兩個非字母，就會出錯
                cout << c;
            }
        }
        cout << endl;
    }
}
