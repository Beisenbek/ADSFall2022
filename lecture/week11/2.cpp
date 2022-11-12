#include <iostream>
#include <vector>

using namespace std;

size_t f2(string str){
    for(size_t i = str.size() - 1; i >=1; --i){
        if(str.substr(0, i)  == str.substr(str.size() - i, i)){
            return i;
        }
    }
    return 0;
}

vector<size_t> f(string str){
    size_t n = str.size();
    vector<size_t> v(n);
    for(size_t i = 1; i <= n; ++i){
       v[i-1] = f2(str.substr(0, i));
    }
    return v;
}

int main(){

    string str;
    getline(cin, str);
    vector<size_t> v = f(str);
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}