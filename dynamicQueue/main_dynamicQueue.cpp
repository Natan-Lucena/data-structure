  #include <iostream>
#include "dynamicQueue.h"

using namespace std;

int main() {
    dynamicQueue queue1;
    int option;
    TypeItem item;


    cout << "Queue program:\n";
    do{
        cout << "Press 0 to stop the app\n";
        cout << "Press 1 to push a element\n";
        cout << "Press 2 to pop a element\n";
        cout << "Press 3 to print the queue\n";
        
        cin >> option;


        switch(option){
            case 0: break;
            case 1:
                cout<< "Press the value \n";
                cin >> item;
                queue1.push(item);
            break;
            case 2:
                item = queue1.pop();
                cout << "Object removed: " << item << "\n";
            break;
            case 3:
                queue1.printQueue();
                break;

        }
    }while(option != 0);
    return 0;
}