#include <string> 
#include <vector>
using namespace std;

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Doctor.cpp"

class Department{
    private: 
        string name; 
        vector<Doctor> doctors; 
    public: 
        Department(string);
        vector<Doctor> showDoctors ();  
        void addDoctor(Doctor); 
        void deleteDoctor (Doctor); 
}; 
#endif // DEPARTMENT_H
