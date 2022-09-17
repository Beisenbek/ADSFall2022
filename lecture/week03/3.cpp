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
    node * head;
    node * tail;
    ll(){
       head = NULL; 
       tail = NULL;
    }
    void add(int x){
        node * n = new node(x);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
    }
    void print(){
        node * current = head;
        while(current != NULL){
            cout << current->val << " ";
            current = current->next;
        }
    }
};

int main(){

    ll l;

    for(int i = 1; i <= 10; ++i){
        l.add(i);
    }

    l.print();

    return 0;
}