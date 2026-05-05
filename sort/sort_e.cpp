#include <iostream>
#define int long long
using namespace std;
signed main(){
    int m, n;
    while(cin >> m >> n){
        cin.ignore();
        int k;
        cin >> k;
        cin.ignore();
        
        if(k<m || k>n){
            cout << -1 << endl;
        }else{
            int search = m + (n-m)/2;
            int count = 1;
            while(search!=k){
                if(search>k){
                    n = search-1;
                }else if(search<k){
                    m = search+1;
                }
                search = m + (n-m)/2;
                count++;
            }
            cout << count << endl;
        }

    }
    return 0;
}