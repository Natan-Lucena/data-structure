#include <iostream>
#include "dynamicStack.h"
#include <cstddef>

using namespace std;

    dynamicStack::dynamicStack() {
        NodeFirst = NULL;
    }
    dynamicStack::~dynamicStack(){
        Node* nodeTemp;
        while(nodeTemp != NULL){
            nodeTemp = NodeFirst;
            NodeFirst = NodeFirst ->next;
            delete nodeTemp;
        }
    }

    bool dynamicStack::isEmpty(){
        return NodeFirst == NULL;
    }
    bool dynamicStack::isFull(){
        Node* newNode;
        try{
            newNode = new Node;
            delete newNode;
            return false;
        }catch(bad_alloc exception){
            return true;
        }
    }

    void dynamicStack::push(TypeItem item){
        if(isFull()){
            cout << "The stack is full\n";
            return;
        }
        Node* newNode = new Node;
        newNode -> value = item;
        newNode -> next = NodeFirst;
        NodeFirst = newNode;
    }
    TypeItem dynamicStack::pop(){
        if(isEmpty()){
            cout << "The stack is empty\n";
            return 0;
        }
        Node* nodeTemp;
        nodeTemp = NodeFirst;
        TypeItem item  = NodeFirst -> value;
        NodeFirst = NodeFirst -> next;
        return item;
    };
    void dynamicStack::printDynamicStack(){
        Node* nodeTemp = NodeFirst;
        cout << "Stack [";
        while(nodeTemp != NULL){
            cout << nodeTemp ->value << " ";
            nodeTemp = nodeTemp -> next;
        }
        cout << "]\n";

    }