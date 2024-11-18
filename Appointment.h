#include <string> 
using namespace std;

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Patient.cpp"
#include "Doctor.cpp"

class Appointment{
    private: 
        Patient patient; 
        Doctor doctor; 
        string date; 
        string time; 
    public: 
        Appointment (); 
        void setDate (string); 
        void setTime (string); 
        string getDate(); 
        string getTime();
        Patient getPatient(); 
        Doctor getDoctor();  
        string getDetails (); 
        bool checkAvailability(); 
}; 
#endif 
