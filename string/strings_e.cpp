#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    cin >> n;
    while(n--){
        int how;
        cin >> how;
        priority_queue<int> left;
        priority_queue<int, vector<int>, greater<int>> right;

        long long count = 0;
        for(int i=0;i<how;i++){
            int value;
            cin >> value;
            
            left.push(value);
            right.push(left.top());
            left.pop();

            if (left.size() < right.size()) {
                left.push(right.top());
                right.pop();
            }

            if (i%2 != 1) {
                count+= left.top();
            }else {
                count += (long long)(left.top() + right.top()) / 2;
            }
        }
        cout << count << endl;

    }
}