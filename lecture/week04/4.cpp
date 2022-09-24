#include <iostream>

using namespace std;


int bs2(int a[], int x, int l, int r){
    if(l > r) return -1;
    int m = l + (r - l)/ 2;
    if(a[m] == x) return m;
    if(a[m] > x){
        return bs2(a, x, l, m - 1);
    }
    return bs2(a, x, m + 1, r);
}

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

void assert(int testNo, int expected, int output){
    if(output == expected){
        printf("Test: %i - Passed.\n", testNo);
    }else{
        printf("Test: %i - Failed.\n", testNo);
    }
}

void test1(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 1;
    int expected = bs(a, n, x);
    assert(1, expected, bs2(a, x, 0, n - 1));
}

void test2(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    int expected = bs(a, n, x);
    assert(2, expected, bs2(a, x, 0, n - 1));
}

void test3(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 5;
    int expected = bs(a, n, x);
    assert(3, expected, bs2(a, x, 0, n - 1));
}

int main(){

    test1();
    test2();
    test3();
  
    return 0;
}