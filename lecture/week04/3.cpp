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
    int expected = 0;
    assert(1, expected, bs(a, n, x));
}

void test2(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    int expected = 2;
    assert(2, expected, bs(a, n, x));
}

void test3(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 5;
    int expected = -1;
    assert(3, expected, bs(a, n, x));
}

int main(){

    test1();
    test2();
    test3();
  
    return 0;
}