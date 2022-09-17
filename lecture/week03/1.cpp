#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    queue<int> q;

    for(int i = 0; i < n; ++i){
        q.push(i);
    }

    for(int num = 1; num <= n; ++num){
        for(int j = 1; j <= num; ++j){
            q.push(q.front());
            q.pop();
        }
        a[q.front()] = num;
        q.pop();
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}