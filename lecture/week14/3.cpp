#include <iostream>

using namespace std;

int p[100];
int size[100];

int create_set(int x){
    p[x] = x;
    size[x] = 1;
}

//first optimization
int find_set(int x){
    if(x == p[x]) return x;
    p[x] = find_set(p[x]);
    return p[x];
}

//second optimization
void union_set(int x, int y){
    int a = find_set(x);
    int b = find_set(y);
    if(a != b){
        if(size[a] < size[b]) swap(a, b);
        p[b] = a;
        size[a] += size[b];
    }
}


int main(){

    return 0;
}