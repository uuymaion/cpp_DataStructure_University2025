#include <iostream>
using namespace std;
#define int long long
signed main(){
    int n, count = 1;
    while(cin >> n){
        if(n<0){
            break;
        }
        cin.ignore();
        int number = 1;
        int ans = 0;
        while(n!=0&&n!=1){
            number = number*2;
            ans++;
            if(n==number){
                break;
            }else if(n<number*2){
                ans++;
                break;
            }
        }
        cout << "Case " << count << ": " << ans << endl;
        count++;
    }
    return 0;
}