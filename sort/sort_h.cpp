#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#define int long long
using namespace std;

vector<int> list;
vector<int> list_temp;
signed main(){
    int n, m;
    int count = 1;
    while(cin >> n){
        if(n==0){
            break;
        }
        cin >> m;
        list.assign(0, 0);
        list_temp.assign(0, 0);
        cin.ignore();
        string input;
        for(int i=0;i<n;i++){
            getline(cin, input);
            stringstream ss(input);
            int value;
            while(ss >> value){
                list.push_back(abs(value-m));
            }
        }
        int perfectValue=0, selectValue=0;
        list_temp = list;
        sort(list_temp.begin(), list_temp.end()); // 預設是由小到大 大道小就加一個greater()
        for(int i=0;i<n;i++){
            perfectValue += list_temp[i];

        }

        for(int i=0;i<n*n;i+=n){
            int min=list[i];
            for(int j=i+1;j<i+n;j++){
                if(list[j]<min){
                    min = list[j];
                }
                
            }
            selectValue += min;
        }
        /* test
        for(int i=0;i<n*n;i++){
            cout << list[i] << " ";
        }
        cout << endl;
        */
        cout << "Case " << count << ": " << perfectValue << " VS. " << selectValue << endl;
        if(perfectValue==selectValue){
            cout << "Perfect Teammate." << endl;
        }else{
            cout << "Just Teammate." << endl;
        }
        count++;
    }
    return 0;
}