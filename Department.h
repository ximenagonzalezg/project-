#include <string> 
#include <vector>
using namespace std;

#include "Doctor.cpp"

class Department{
    private: 
        string name; 
        list<Doctor> doctors; 
    public: 
        Department(string);
        list<Doctor> showDoctors ();  
        void addDoctor(doctor); 
        void deleteDoctor (doctor); 
}; 
