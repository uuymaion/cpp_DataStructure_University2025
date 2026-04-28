#include <bits/stdc++.h>
using namespace std;
#define int long long // 避免再計算的時候爆掉
vector<int> tree;
vector<int> sub_sum; // 算所有點後面的子數總和

// 計算子樹的總和
int count(int i){
    int sum = 0;
    if(i >= tree.size() || tree[i]==-1){
        return 0;
    }else{
        if(sub_sum[i]==-1){
            sum = tree[i] + count(i*2) + count(i*2+1);
            sub_sum[i] = sum;
        }else{ // 有算過就直接回傳，就不用再算一次
            return sub_sum[i]; 
        }
        return sum;
    }
}

// 回傳long long main會出錯
// signed本身就代表了signed int
signed main(){ 
    string input;
    while(getline(cin, input)){
        if(input.empty()) continue;  // 這三行是用來讀一行多個變數的 要記

        stringstream ss(input);
        string temp; // 紀錄目前讀到的value
        tree.assign(1, -1); // assign是vector並assign(size, value)
        while(ss >> temp){
            if(temp=="None"){
                tree.push_back(-1);
            }else{
                tree.push_back(stoll(temp));  // stoll的意思是String to long long
            }
        }

        int tem; 
        int max_sum = 0; // 紀錄最大值，直接用max命名的話容易跟library衝突
        sub_sum.assign(tree.size(), -1);
        sub_sum[1] = count(1); // 這邊就已經將所有子樹都算完了，後面就不用進到count()

        for(int i=2;i<tree.size();i++){ // 從第二個數開始尋找最大值
            tem = sub_sum[i];
            tem = (sub_sum[1]-tem)*tem;
            if(tem>max_sum){
                max_sum = tem;
            }
        }
        cout << max_sum << endl;  
    }
     
    return 0;
}

