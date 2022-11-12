#include <iostream>
#include <vector>

using namespace std;

vector<size_t> f(string str){
    size_t n = str.size();
    vector<size_t> v(n);
    v[0] = 0;
    for(size_t i = 1; i < n; ++i){
        size_t j = v[i - 1];
        while(j > 0 && str[j] != str[i]){
            j = v[j-1];
        }
        if(str[i] == str[j]){
            v[i] = j + 1;
        }
    }

    return v;
}

int main(){

    string pattern;
    string text;
    getline(cin, pattern);
    getline(cin, text);

    string str = pattern + '#'  + text;

    vector<size_t> v = f(str);
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == pattern.size()){
            cout << "found!";
            return 0;
        }
    }

    cout << "not found!";

    return 0;
}