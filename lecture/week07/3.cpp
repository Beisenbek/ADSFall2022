#include <iostream>

using namespace std;



void merge(int * a, int l1, int r1, int l2, int r2){
    int i = l1;
    int i1 = l1;
    int i2 = l2;
    while(i1 <= r1 && i2 <= r2){
        if(a[i1] < a[i2]){
            a[i] = a[i1];
            i1++;
        }else {
            a[i] = a[i2];
            i2++;
        }
        i++;
    }
    if(i1 >= r1){
        for(int j = i2; j <= r2; ++j){
            a[i] = a[j];
            i++;
        }
    }
    if(i2 >= r2){
        for(int j = i1; j <= r1; ++j){
            a[i] = a[j];
            i++;
        }
    }

}

void msort(int * a, int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        msort(a, l, m);
        msort(a, m + 1, r);
    }
}

int main(){

    int a[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(a)/sizeof(int);

    msort(a, 0, n - 1);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}