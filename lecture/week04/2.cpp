#include <iostream>

using namespace std;


int bs(int a[], int n, int x){
    int res = -1;
    int l = 0; 
    int r = n - 1;
    int m;

    while(l <= r){
        m = l + (r - l)/ 2;
        if(x < a[m]){
           r = m - 1;
        }else if(x == a[m]){
           break;
        }else{
            l = m + 1;
        }
    }

    if(a[m] == x){
        res = m;
    }

    return res;
}

int main(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    cin >> x;

    cout << bs(a, n, x);

    return 0;
}