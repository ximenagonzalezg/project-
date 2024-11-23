#include <string> 
#include <vector>
using namespace std;

#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor: public Person{
    private:
        string specialty;   
    public: 
        Doctor (int _id, string _name, string _phone, string _specialty); 
        string getSpecialty();
}; 
#endif // DOCTOR_H
