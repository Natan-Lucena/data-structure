#include <iostream>

using namespace std;

class User {
    private:
    int IRA;
    string name;

    public:
    User();
    User(int r, string n);
    int getIRA();
    string getName();
};