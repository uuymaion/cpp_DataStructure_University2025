#include <bits/stdc++.h>
using namespace std;
int main(void){

    long long K, L;
    int time = 1;

    while(cin >> K >> L){

        if(K==-1&&L==-1){
            break;
        }
        
        cout << "Case " << time << ": K = " << K << ", limit = " << L;
        
        int count = 0;

        while(K <= L){
            count++;
            if(K%2==0){
                K /= 2;
            }else{
                K = 3*K + 1;
            }

            if(K==1){
                count++;
                break;
            }
        }
        cout << ", number of terms = " << count << endl;
        time++;
    }
}