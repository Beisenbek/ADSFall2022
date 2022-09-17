#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node(int x){
        val = x;
        next = NULL;
    }
    void print(){
        cout << val << endl;
    }
};

struct ll{

};

int main(){

    node n1(5);
    node n2(51);
    node n3(15);
    node n4(507);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    node * current = &n1;

    while(current != NULL){
        cout << current->val << " ";
        current = current->next;
    }
    

    return 0;
}