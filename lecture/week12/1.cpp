#include <iostream>
#include <queue>

using namespace std;

struct vertex{
    int r;
    int c;
    vertex(int r, int c){
        this->r = r;
        this->c = c;
    }
};

queue<vertex> q;
int time[100][100];

void step(int r, int c, int n, int m, int t){
    if(r <= n  && c <= m && r >= 1 && c >=1 && time[r][c] == -1){
        time[r][c] = t;
        q.push(vertex(r, c));
    }   
}


int main(){

    int n, m;
    int r, c;
    cin >> n >> m >> r >> c;


    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            time[i][j] = -1;
        }
    }

    q.push(vertex(r, c));
    time[r][c] = 0;

    while(q.size() > 0){
        vertex cur = q.front();
        q.pop();
        int t = time[cur.r][cur.c];
        step(cur.r + 1, cur.c, n, m, t + 1);
        step(cur.r - 1, cur.c, n, m, t + 1);
        step(cur.r, cur.c + 1, n, m, t + 1);
        step(cur.r, cur.c - 1, n, m, t + 1);
    }

    int mx = -1;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            mx = max(mx, time[i][j]);
            cout << time[i][j] << "\t";
        }
        cout << endl;
    }   

    cout << mx << endl;

    return 0;
}