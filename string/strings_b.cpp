#include <bits/stdc++.h>
using namespace std;

int main(void){
    int how, group;
    while (cin >> how >> group) {

        vector<int> level(how);
        for(int i=0;i<how;i++){
            cin >> level[i];
        }
        sort(level.begin(), level.end());

        vector<int> diff(how-1);
        for(int i=0;i<how-1;i++){
            diff[i] = level[i+1] - level[i]; 
        }
        sort(diff.begin(), diff.end());
        
        int ans=0;
        for(int i=0;i<group;i++){
            ans += diff[i];
        }

        cout << ans << endl;

    }
}
