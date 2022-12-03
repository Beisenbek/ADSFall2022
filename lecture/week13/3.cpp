#include <iostream>

using namespace std;

int a[100][100];
int color[100];
int n;
bool over;

void dfs(int v, int t){
    if(v == t){
        over = true;
        cout << t << " ";
        return;
    }
    if(!over){
        cout << v << " ";
        color[v] = 1;
        for(int i = 0; i < n; ++i){
            if(a[v][i] > 0 && color[i] == 0){
                dfs(i, t);
            }
        } 
    }
}

int main(){

    cin >> n;
   
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
        color[i] = 0;
    }
    over = false;
    dfs(0, 8);


    return 0;
}