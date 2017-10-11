#ifndef PERSON_H
#define PERSON_H

#include "my.h"

struct Person {
    private:
        string name{"non"};
        string addr{"103"};
        int p = 3;
    public:
        const string& getname() const { return name;}
        const string& getaddr() const { return addr;}
    //    int* getint() const { return &p;}
        int getint2() const { return p;}
};

ostream& print(ostream &os, const Person& a);

#endif
