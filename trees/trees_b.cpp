#include <bits/stdc++.h>
using namespace std;

int how;
int a, b, c, d;

int main(){
    int how;
    int a, b, c, d;
    vector<int> parent;
    vector<int> record;

    while(cin >> how){
        parent.assign(how, -1);
        record.assign(how, 0);
        vector<int> record(how, 0);
        for(int i=0;i<how-1;i++){
            cin >> a >> b;
            parent[b] = a;
        }
        cin >> c >> d;
        int temp = parent[c]; // temp is c's parent
        record[c] = 1;
        while(true){
            record[temp] = 1;
            if(parent[temp]==-1) break;
            else{
                temp = parent[temp]; // temp become temp's parent
            }
        }
        /*
        for(int i=0;i<how;i++){
            cout << record[i] << " ";
        }
        cout << endl;
        */
        int tem = d;
        int ans = -1;
        while(true){
            if(record[tem]==1){
                ans = tem;
                break;
            }else{
                tem = parent[tem];
            }
        }
        cout << ans << endl;
    }
    return 0;
}