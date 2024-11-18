#include "Medical history.h"
MedicalHistory::MedicalHistory(){
    diagnosis = "NONE"; 
    treatment = "NONE"; 
}

void MedicalHistory::setDiagnosis(string _diagnosis){
    diagnosis = _diagnosis; 
}

void MedicalHistory::setTreatment(string _treatment){
    treatment = _treatment; 
}

string MedicalHistory::getDetails(){
    string details = "Diagnosis: " + diagnosis + "\nTreatment: " + treatment + "\n------\n";
    return details; 
}
