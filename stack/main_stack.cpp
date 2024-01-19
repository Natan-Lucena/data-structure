#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    stack stack1;
    TypeItem item;
    int option;

    cout << "We are creating a stack:";
    do{
        cout << "press 0 to stop the app\n";
        cout << "press 1 to insert a value\n";
        cout << "press 2 to delete a value\n";
        cout << "press 3 to print the stack\n";
        
        cin >> option;

        if(option == 1){
            cout<< "Press the value";
            cin >> item;
            stack1.push(item);
        }
        if(option == 2){
            stack1.pop();
        }
        if(option == 3){
            stack1.printStack();
        }
    }while(option != 0);

    return 0;
}