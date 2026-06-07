#indef LIBERARYUSER_H
#define LIBERARYUSER_H

class LiberaryUser{
public:
     virtual void registerAccount() = 0;
     virtual void requestBook() = 0;
};
#endif
