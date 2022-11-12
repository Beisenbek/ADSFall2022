#include <iostream>

using namespace std;

size_t f2(string str){
    for(size_t i = str.size() - 1; i >=1; --i){
        if(str.substr(0, i)  == str.substr(str.size() - i, i)){
            return i;
        }
    }
    return 0;
}

void f(string str){
    for(size_t i = 1; i <= str.size(); ++i){
       cout << f2(str.substr(0, i)) << endl;
    }
}

int main(){

    string str;
    getline(cin, str);
    f(str);

    return 0;
}