#include <iostream>

using namespace std;

int p[100];

int create_set(int x){
    p[x] = x;
}

//first optimization
int find_set(int x){
    if(x == p[x]) return x;
    p[x] = find_set(p[x]);
    return p[x];
}

void union_set(int x, int y){
    int a = find_set(x);
    int b = find_set(y);
    if(a != b){
        p[x] = b;
    }
}


int main(){

    return 0;
}