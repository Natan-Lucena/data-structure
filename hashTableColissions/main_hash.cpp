#include <iostream>
#include "hash.h"

using namespace std;

int main(){

    int size;
    int max;

    cout << "HashMap App: \n";
    cout << "What is the size of the hash?\n";
    cin >> size;
    cout << "What is the max of elements?\n";
    cin >> max;
    cout << "The charge factor is: <<" << (float)max /  (float) size << endl; 

    Hash userHash(max, size);
    int option;
    int IRA;
    string name;
    bool finder;
    do{
         cout << "Press 0 to stop\n";
        cout << "Press 1 to add a element!\n";
        cout << "Press 2 to remove a element!\n";
        cout << "Press 3 to find a element!\n";
        cout << "Press 4 to print the Hash!\n";
        cin >> option;

        if(option == 1){
            cout << "Which is the IRA of the user?\n";
            cin >> IRA;
            cout << "Which is the name of the user?\n";
            cin >> name;
            User user(IRA, name);
            userHash.add(user);
        }
        if(option == 2){
            cout << "Which is the IRA of the user you want to remove?\n";
            cin >> IRA;
            User user(IRA, " ");
            userHash.remove(user);
        }
        if(option == 3){
            cout << "Which is the IRA of the user you want to find?\n";
            cin >> IRA;
            User user(IRA, " ");
            userHash.find(user,finder);
            if(finder){
                cout << "The user was found\n";
                cout << "IRA: " << user.getIRA()<< " Name: " << user.getName() << "\n";
            }else{
                cout << "User not found\n";
            }
        }
        if(option == 4){
            userHash.print();
        }

    }while(option != 0);

    return 0;
}