#include "Doctor.h"
Doctor::Doctor (int _id, string _name, string _phone, string _specialty):Person(_id,_name,_phone){
    specialty = _specialty;
}
   
string Doctor::getSpecialty(){
    return specialty; 
}
