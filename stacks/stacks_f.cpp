#include <bits/stdc++.h>
using namespace std;

long long hanoi(int m, int n){
    if(n==1){
        return m;
    }
    return 2*hanoi(m, n-1) + m;
}

int main(void){
    int m, n;
    while(cin >> m >> n){
        cout << hanoi(m, n) << endl;
    }

}