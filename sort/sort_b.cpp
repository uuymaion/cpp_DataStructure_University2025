// unfinished

#inclulde <bits/stdc++.h>
using namespace std;
#define int long long;

vector<int> list;
vector<int> list_temp;
void insertion(int n){
    list_temp = list;
    vector<int> list_insertion(list.size(), 0);
    int min = list[0];
    for(int i=0;i<n && i<list.size()-1;i++){
        
    }
    cout << endl;
}
void bubble(int n){
    list_temp = list;
    for(int i=0;i<n && i<list.size()-1;i++){
        if(list[i]<list[i+1]){
            int tem = list[i];
            list[i] = list[i+1];
            list[i+1] = tem;
        }
        for(int j=0;j<list.size();j++){
            cout << list[j] << " ";
        }
    }
    cout << endl;
}
void selection(int n){
    
}
signed main(){
    int m, n;
    string input;
    while(cin >> input){
        stringstream ss(input);
        string value;
        while(ss >> value){
            list.push_back(stoll(value));
        }
        
    }
    return 0;
}
