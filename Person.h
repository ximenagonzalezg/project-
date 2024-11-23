#include <string> 
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
    protected: 
        int id; 
        string name; 
        string phone; 
    public: 
        Person(int, string, string); 
        void setPhone (string); 
        int getId(); 
        string getName(); 
        string getPhone (); 
        string getDetails ();  
}; 
#endif // PERSON_H
