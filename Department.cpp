#include <algorithm> 
#include "Department.h"
Department::Department(string _name){
    name = _name; 
}

vector<Doctor> Department::showDoctors(){
    return doctors; 
}

void Department::addDoctor(Doctor _doctor){
    doctors.push_back(_doctor); 
}

void Department::deleteDoctor(Doctor _doctor){
    for (auto it = doctors.begin(); it != doctors.end(); ++it) {
        if (it->getId() == _doctor.getId()) {
            doctors.erase(it);
            break;
        }
    }
}
