#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, how;
    cin >> n;
    while(n--){

        cin >> how;
        queue<string> line;
        for(int i=0;i<how;i++){ // input in line(type is queue)
            string name;
            cin >> name;
            line.push(name);
        }

        while(line.size()>1){ // size means length of queue
            for(int i=0;i<2;i++){
                line.push(line.front());
                line.pop();
            }
            line.pop();
        }

        cout << line.front() << endl;
    }
}