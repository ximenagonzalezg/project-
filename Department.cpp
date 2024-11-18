#include "Department.h"
Department::Department::(string _name){
    name = _name
}

list<Doctor> Department::showDoctors(){
    return doctors;    
}

void Department::addDoctor(doctor _doctor){
    doctors.push_back(_doctor); 
}

void Department::deleteDoctor(doctor _doctor){
    doctors.pop_back() 
    /*I didn't find how to do this action, because pop_back is for deleting the last item
    but I want to delete an specific one but I also don't have its index :( */
}
