#ifndef KIDUSER_H
#define KIDUSER_H

#include <iostream>
#include <string>
#include "LibraryUser.h"

using namespace std;

class KidUser : public LibraryUser{

public:
    int age;
    string bookType;

    void registerAccount(){
    
        if (age < 12)
            cout << "You have successfully registered " << endl;
        else
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
    }

    void requestBook(){
    
        if (bookType == "Kids")
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        else
            cout << " you are allowed to take only kids books" << endl;
    }
};

#endif
