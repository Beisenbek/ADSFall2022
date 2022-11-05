#include <iostream>

using namespace std;

int f1(char c){
    return c - int('a') + 1;
}

void f(string t){
    int n = t.size();
    int h[n];
    int p = 1;
    int q = (1 << 20) + 1;

    for(int i = 0; i < n; ++i){
        if(i == 0){
            h[i] = (f1(t[i]) * p) % q;
        }else{
            h[i] = (h[i - 1] + (f1(t[i]) * p) % q ) % q;
        }
        p = (p * 31) % q;
    }

    for(int i = 0; i < n; ++i){
        cout << h[i] << endl;
    }
}

int main(){

    string text;
    getline(cin, text);

    f(text);


    return 0;
}