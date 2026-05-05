#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;

struct mos{
    float number, w, s, d;
};
bool cmp(mos a, mos b){
    if(a.d!=b.d){
        return a.d > b.d;
    }
    if(a.s!=b.s){
        return a.s > b.s;
    }
    if(a.w!=b.w){
        return a.w < b.w;
    }
    return a.number < b.number;

}
signed main(){
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        cin.ignore();
        vector<mos> list;

        for(int i=0;i<n;i++){
            mos temp;
            cin >> temp.number >> temp.w >> temp.s >> temp.d;
            list.push_back(temp);
        }
        sort(list.begin(), list.end(), cmp);
        // sort像一個裁判，把兩個數字a b抓去比較，回傳true就把a放前面
        for(int i=0;i<n;i++){
            cout << list[i].number << " ";
        }
        cout << endl;
    }
    return 0;
}
