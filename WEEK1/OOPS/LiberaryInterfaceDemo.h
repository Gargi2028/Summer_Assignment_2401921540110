#include <iostream>
#include "KidUser.h"
#include "AdultUser.h"

using namespace std;
int main (){

    KidUser kid;
    
    kid.age = 10;
    kid.registerAccount();
    
    kid.age = 18;
    kid.registerAccount();
    
    kid.bookType = "Kids";
    kid.requestBook();
    
    kid.bookType = "Fiction";
    kid.requestBook();
    
    cout << endl;
    
    AdultUser adult;
    
    adult.age = 6 ;
    adult.registerAccount();
    
    adult.age = 24;
    adult.registerAccount();
    
    adult.bookType = "Kids";
    adult.requestedBook();
    
    adult.bookType = "Fiction";
    adult.requestedBook();
    
    return 0;

}
