#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main(){
    int n;
    vector<int> list;
    while(cin >> n){
        if(n==0){
            break;
        }
        list.assign(0, 0);
        cin.ignore();
        string input;
        getline(cin, input);
        stringstream ss(input);
        int value;
        while(ss >> value){
            list.push_back(value);
        }
        sort(list.begin(), list.end());
        int team = n/2;
        cout << team << endl;
        for(int i=0;i<team;i++){
            cout << list[i]+list[list.size()-i-1] << " ";
        }
        cout << endl;
    }
    return 0;
}