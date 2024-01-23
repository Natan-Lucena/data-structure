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
        int local = hashFunction(user);
        structure[local] = user;
        quanty_itens++;
    }
    void Hash::remove(User user){
        int local = hashFunction(user);
        if(structure[local].getIRA() != -1){
            structure[local] = User(-1, " ");
            quanty_itens--;
        }
    }
    void Hash::find(User& user,bool& finder){
        int local = hashFunction(user);
        User aux = structure[local];
        if(user.getIRA() != aux.getIRA()){
            finder = false;
            return;
        } 
        finder = true;
        user = aux;
    }

    void Hash::print(){
        cout << "Hash table:\n";
        for(int i = 0; i< max_posi; i++){
            if(structure[i].getIRA() != -1){
                cout << structure[i].getName() << "/" << structure[i].getIRA() << "\n";
            }
        }
    }