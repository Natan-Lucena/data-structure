#include "user.h"
    User::User(){
        IRA = -1;
        name = " ";
    }
    User::User(int r, string n){
        IRA = r;
        name = n;
    }
    int User::getIRA(){
        return IRA;
    }
    string User::getName(){
        return name;
    }