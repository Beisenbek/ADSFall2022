#include <iostream>

using namespace std;

int main(){

    
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    int l = 0; 
    int r = n - 1;

    int x;
    cin >> x;

    while(l < r){
        cout << l << " " << r << endl;
        int m = (l + r) / 2;
        if(x < a[m]){
           r = m - 1;
        }else if(x == a[m]){
           cout << m;
           r = m;
           break;
        }else{
            l = m;
        }
    }

    if(x != a[r]){
        cout << "not found!";
    }

    return 0;
}