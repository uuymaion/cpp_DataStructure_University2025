#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a, b;
    while(cin >> a >> b){

        if(a.length()!=b.length()){
            cout << "False\n";
            continue;
        }

        vector<bool> check(a.length(), true);
        int count = 0;
        int one = 0, two = 0; // address
        for(unsigned int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                check[i] = false;
                count++;
                if(count==1){
                    one = i;
                }else if(count==2){
                    two = i;
                }
            }
        }
        if(count==2 and a[one]==b[two] and a[two]==b[one]){
            cout << "True";
        }else if(count){

        }else{
            cout << "False";
        }
        cout << endl;
    }
}
