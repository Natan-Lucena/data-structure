#include <iostream>
#include "dynamicStack.h"
using namespace std;

int main() {
    dynamicStack stack1;
    TypeItem item;
    int option;

    cout << "We are creating a stack:";
    do{
        cout << "press 0 to stop the app\n";
        cout << "press 1 to insert a value\n";
        cout << "press 2 to delete a value\n";
        cout << "press 3 to print the stack\n";
        
        cin >> option;

        switch(option){
            case 0: break;
            case 1:
                cout<< "Press the value \n";
                cin >> item;
                stack1.push(item);
            break;
            case 2:
                stack1.pop();
                cout << "Object removed: " << item << "\n";
            break;
            case 3:
                stack1.printDynamicStack();
                break;

        }
    }while(option != 0);

    return 0;
}