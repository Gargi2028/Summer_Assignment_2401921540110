#ifndef ADULTUSER_H
#define ADULTUSER_H

#include <iostream>
#include <string>
#include "LibraryUser.h"

using namespace std;

class AdultUser : public LibraryUser{

public:
    int age;
    string bookType;

    void registerAccount(){
    
        if (age > 12)
            cout << "You have successfully registered " << endl;
        else
            cout << "Sorry, Age must be greater than 12 to register as a adult" << endl;
    }

    void requestBook(){
    
        if (bookType == "Fiction")
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        else
            cout << "you are allowed to take only adult books" << endl;
    }
};

#endif
