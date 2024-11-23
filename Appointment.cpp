#include "Appointment.h"
Appointment::Appointment(Patient _patient, Doctor _doctor){
    date = "NONE"; 
    time = "NONE"; 
    patient = _patient; 
    doctor = _doctor;
}
    
void Appointment::setDate(string _date){
    date = _date;
}

void Appointment::setTime(string _time){
    time = _time;
}

string Appointment::getDate (){
    return date; 
}

string Appointment::getTime (){
    return time; 
}

Patient Appointment::getPatient (){
    return patient; 
}

Doctor Appointment::getDoctor (){
    return doctor; 
}

string Appointment::getDetails (){
    string details = "Patient: " + patient.getName()+ "\nDoctor: " + doctor.getName() + "\nDate: " + date + "\nTime: " + time + "\n------\n";
    return details;
}

bool Appointment::checkAvailability(string _date){
    return date != _date; 
}
