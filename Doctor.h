#include <string> 
#include <vector>
using namespace std;
#include "Person.h"

class Doctor: public Person{
    private:
        string specialty;  
        Department department;  
    public: 
        Doctor (int _id, string _name, string _phone, string _specialty, Department _department); 
        string getSpecialty();
        void setDepartment (_department);
        string getDepartment(); 
        string getDetails(); 
}; 
