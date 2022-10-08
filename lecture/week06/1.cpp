#include <iostream>

using namespace std;

void head_up(int a[], ){

}

void heap_down(int a[], int i, int n){
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int min_pos = i;
    if(l < n && a[min_pos] > a[l]) min_pos = l;
    if(r < n && a[min_pos] > a[r]) min_pos = r;
    if(i != min_pos) {
        swap(a[i], a[min_pos]);
        heap_down(a, min_pos, n);
    }
}

int cut_min(int a[], int n){
    int res = a[0];

    a[0] = a[n - 1];

    heap_down(a, 0, n - 1);

    return res;
}

void add(int a[], int n, int x){
    a[n] = x;
    n = n + 1;
}
 
int main(){

    int a[] = {1, 6, 8, 7, 12, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);

    cout << cut_min(a, n) << endl;
    cout << cut_min(a, n - 1) << endl;
    cout << cut_min(a, n - 2) << endl;
    cout << cut_min(a, n - 3) << endl;
    cout << cut_min(a, n - 4) << endl;
    cout << cut_min(a, n - 5) << endl;
    cout << cut_min(a, n - 6) << endl;


    return 0;
}