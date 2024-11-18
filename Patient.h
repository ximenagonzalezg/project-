#include <string> 
using namespace std;

#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Medical history.cpp"

class Patient: public Person{
    private:
        int age; 
        string address;
        MedicalHistory medicalHistory; 
          
    public: 
        Patient (int _id, string _name, string _phone, int _age, string _address); 
        void setAge(int);
        void setAddress(string);
        int getAge (); 
        string getAddress (); 
        MedicalHistory getMedicalHistory (); 
        string getDetails(); 
}; 
#endif 
