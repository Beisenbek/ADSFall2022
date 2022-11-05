#include <iostream>

using namespace std;

int f1(char c){
    return c - int('a') + 1;
}

void f(string t, string s){
    int n = t.size();
    int m = s.size();

    long long h[n];
    long long p[n];
    long long q = (1 << 30) + 1;

    p[0] = 1;

    for(int i = 1; i < max(n, m); ++i){
        p[i] = (p[i - 1] * 31) % q;
    }

    for(int i = 0; i < n; ++i){
        if(i == 0){
            h[i] = (f1(t[i]) * p[i]) % q;
        }else{
            h[i] = (h[i - 1] + (f1(t[i]) * p[i]) % q ) % q;
        }
    }
    long long h_s = 0;
    for(int i = 0; i < m; ++i){
        h_s += (f1(s[i]) * p[i]) % q;
    }

    for(int i = 0; i <= n - m; i++){
        long long d = h[i+m-1];
        if(i > 0){
            d -= h[i-1];
        }
        if( d == (h_s * p[i]) % q){
            cout << "found " << i << endl;
        }
    }

}

int main(){

    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);

    f(text, pattern);


    return 0;
}