#include "Doctor.h"
Doctor::Doctor (int _id, string _name, string _phone, string _specialty, Department _department):Person(_id,_name,_phone){
    specialty = _specialty; 
    department = _department;
}

string Doctor::getSpecialty(){
    return specialty; 
}

void Doctor::setDepartment(_department){
    department = _department
}

string Doctor::getDepartment(){
    return department; 
}

string Doctor::getDetails(){
    string details = "Specialty: " + specialty+ "\nDepartment: " + department.getName() + "\n------\n";
    return details;
}
