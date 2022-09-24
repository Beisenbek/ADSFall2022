#include <iostream>

using namespace std;

int main(){

    
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    int l = 0; 
    int r = n - 1;

    int x;
    cin >> x;
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

    if(l > r){
        cout << "not found!";
    }else
    if(a[m] == x){
        cout << m << endl;
    }

    return 0;
}