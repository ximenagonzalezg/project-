#include <string> 
using namespace std;

class Department{
    private: 
        int idDoctor; 
        string name; 
        int idDoctors; 
    public: 
        Department(string); 
        string addDoctor(int); 
        string deleteDoctor (int); 
        string showDoctors (); 
}; 