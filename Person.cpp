#include "Person.h"
Person::Person(int _id, string _name, string _phone){
    id = _id; 
    name = _name; 
    phone = _phone; 
}

void Person::setPhone(string _phone){
    phone = _phone; 
}

int Person::getId(){
    return id; 
}

string Person::getName(){ 
    return name;
}

string Person::getPhone(){
    return phone;
}
    
string Person::getDetails(){
    string details = "ID: " + to_string (id) + "\nName: " + name + "\nPhone: " + phone + "\n------\n";
    return details; 
}
