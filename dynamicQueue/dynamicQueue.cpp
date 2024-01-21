#include <iostream>
#include "dynamicQueue.h"
#include <cstddef>
#include <new>

using namespace std;
    
    dynamicQueue::dynamicQueue() {
        first = NULL;
        last = NULL;
    }
    dynamicQueue::~dynamicQueue(){
        Node* temp;
        while(first != NULL){
            temp = first;
            first = first -> next;
            delete temp;
        }
        last = NULL;
    }

    bool dynamicQueue::isFull(){
        Node* newNode;
        try{
            newNode = new Node;
            delete newNode;
            return false;
        }catch(bad_alloc exception){
            return true;
        }
    }
    bool dynamicQueue::isEmpty(){
        return (first == NULL && last == NULL);
    }

    void dynamicQueue::push(TypeItem item){
        if(isFull()){
            cout << "The queue is full\n";
            return;
        }
        Node* newNode = new Node;
        newNode -> value = item;
        newNode -> next = NULL;
        if(first == NULL){
            first = newNode;
            last = newNode;
            cout << "All done\n";
            return;
        }
        last -> next = newNode;
        last = newNode;
        cout << "All done\n";
        }
    TypeItem dynamicQueue::pop(){
        if(isEmpty()){
            cout << "The queue is empty\n";
            return 0;
        }
        Node* temp = first;
        TypeItem item  = temp -> value;
        first = first -> next;
        if(first == NULL){
            last = NULL;
        }
        delete temp;
        return item;
    }

    void dynamicQueue::printQueue(){
        Node* temp = first;
        cout << "Queue: [ ";
        while(temp != NULL){
            cout << temp-> value << " ";
            temp = temp -> next;
        }
        cout << "]";
    }