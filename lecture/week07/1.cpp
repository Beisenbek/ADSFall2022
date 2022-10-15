#include <iostream>

using namespace std;

int main(){

    int a[] = {1, 10, 7, 70, 12};
    int n = sizeof(a)/sizeof(int);

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}