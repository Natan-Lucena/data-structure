#include <iostream>
#include "stack.h"

using namespace std;

    stack::stack(){
        size = 0;
        structure = new TypeItem[max_items];
    }// starta a stack
    stack::~stack(){
        delete [] structure;
    }// destroi

    bool stack::isFull(){
        return size == max_items;
    }
    bool stack::isEmpty(){
        return size == 0;
    }

    void stack::push(TypeItem item){
        if( isFull()){
            cout << "The stack is full\n";
            return;
        }
        structure[size] = item;
        size++;
    }
    TypeItem stack::pop(){
        if(isEmpty()){
            cout << "The stack is empty\n";
            return;
        }
        size--;
        return structure[size];
    }

    void stack::printStack(){
        cout << "Stack [ ";
        for(int i = 0; i < size; i++){
            cout << structure[i] << " ";
        }
        cout << "]\n";
    }

    int stack::lenght(){
        return size;
    }