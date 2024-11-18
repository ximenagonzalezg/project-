#include "Patient.h"
Patient::Patient(int _id, string _name, string _phone, int _age, string _address):Person(_id,_name,_phone){
    age = _age; 
    address = _address; 
}

void Patient::setAge(int _age){
    age = _age;
}

void Patient::setAddress (string _address){
    address = _address; 
} 

int Patient::getAge(){ 
    return age;
}

string Patient::getAddress(){ 
    return address;
}

MedicalHistory Patient::getMedicalHistory(){
    return medicalHistory; 
}

string Patient::getDetails(){
   string details = "Age: " + to_string (age) + "\nAddress: " + address + "\nMedical History:" + medicalHistory.getDetails() + "\n------\n";
   return details;  
