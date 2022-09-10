#include <iostream>
#include <cmath>

using namespace std;


bool f2(int x){
    bool result = true;

    if(x == 1){
        result = false;
    }

    for(int i = 2; i <= sqrt(x); ++i){
        cout << i << " ";
        if(x % i == 0){
            result = false;
            break;
        }
    }

    return result;
}

bool f(int x){
    bool result = true;

    if(x == 1){
        result = false;
    }

    for(int i = 2; i < x; ++i){
        cout << i << " ";
        if(x % i == 0){
            result = false;
            break;
        }
    }

    return result;
}

int main(){

    int x;
    cin >> x;
    cout << f2(x);

    return 0;
}