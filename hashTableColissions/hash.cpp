#include <iostream>
#include "hash.h"

    int Hash::hashFunction(User user){
        return (user.getIRA() % max_posi);
    }

    Hash::Hash(int itensSize, int lenghtSize){
        quanty_itens = 0;
        max_itens = itensSize;
        max_posi = lenghtSize;
        structure = new User[lenghtSize];
    }
    Hash::~Hash(){
        delete [] structure;
    }

    bool Hash::isFull(){
        return (quanty_itens == max_itens);
    }
    bool Hash::isEmpty(){
        return quanty_itens == 0;
    }

    int Hash::lenght(){
        return quanty_itens;
    }

    void Hash::add(User user){
        if(isFull()){
            cout << "The hash is full\n";
            return;
        }
        int local = hashFunction(user);
        while(structure[local].getIRA() > 0){
            local = (local + 1) % max_posi;
        }
        structure[local] = user;
        quanty_itens++;
    }
    void Hash::remove(User user){
        if(isEmpty()){
            cout<< "Hash table is empty\n";
            return;
        }
        int local = hashFunction(user);
        bool value = false;
        while(structure[local].getIRA() != -1){
            if(structure[local].getIRA() == user.getIRA()){
                cout << "Element removed\n";
                structure[local] = User(-2, " ");
                quanty_itens--;
                value = true;
                break;
            }
            local = (local  + 1) % max_posi;
        }
        if(!value) {
            cout << "Element does not exits\n";
        }
    }
    void Hash::find(User& user,bool& finder){
        int local = hashFunction(user);
        finder = false;
        while(structure[local].getIRA() != -1){
            if(structure[local].getIRA() == user.getIRA()){
                finder = true;
                user = structure[local];
                break;
            }
            local = (local + 1) % max_posi;
        }
    }

    void Hash::print(){
        cout << "Hash table:\n";
        for(int i = 0; i< max_posi; i++){
            if(structure[i].getIRA() >= 0){
                cout << i << ":" << structure[i].getName() << "/" << structure[i].getIRA() << "\n";
            }
        }
    }