#include <string> 
using namespace std;

#ifndef MEDICAL HISTORY_H
#define MEDICAL HISTORY_H

class MedicalHistory{
    private: 
        string diagnosis; 
        string treatment; 
    public: 
        MedicalHistory (); 
        void setDiagnosis (string); 
        void setTreatment (string); 
        string getDetails (); 
}; 
#endif
