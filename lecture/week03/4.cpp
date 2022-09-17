#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node * prev;
    node(int x){
        val = x;
        prev = next = NULL;
    }
    void print(){
        cout << val << endl;
    }
};

struct dll{
    node * head;
    node * tail;
    ll(){
       head = NULL; 
       tail = NULL;
    }
    void add(int x){
        node * n = new node(x);
        if(head == NULL){
            head = tail = n;
        }else{
            tail->next = n;
            n->prev = tail;
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
    void rprint(){
        node * current = tail;
        while(current != NULL){
            cout << current->val << " ";
            current = current->prev;
        }
    }
};

int main(){

    dll dl;

    for(int i = 1; i <= 10; ++i){
        dl.add(i);
    }

    dl.print();
    cout << endl;
    dl.rprint();

    return 0;
}