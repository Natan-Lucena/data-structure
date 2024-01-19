#include <iostream>
#include "queue.h"

using namespace std;

    queue::queue(){
        first = 0;
        last = 0;
        structure = new TypeItem[max_itens];
    }
    queue::~queue(){
        delete [] structure;
    }

    bool queue::isFull(){
        return last - first == max_itens;
    }
    bool queue::isEmpty(){
        return first == last;
    }

    void queue::push(TypeItem item){
        if(isFull()){
            cout << "The queue is full\n";
            return;
        }
        structure[last % max_itens] = item;
        last++;
    }
    TypeItem queue::pop(){
        if(isEmpty()){
            cout << "The queue is empty\n";
        }
        first++;
        return structure[(first - 1) % max_itens];
    }

    void queue::printQueue(){
        cout << "Queue: [";
        for(int i = first; i < last; i++){
            cout << structure[i % max_itens] << " ";
        }
        cout << " ] \n";
    }