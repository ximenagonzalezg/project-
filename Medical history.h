#include <string> 
using namespace std;

class MedicalHistory{
    private: 
        int idPacient; 
        string diagnosis; 
        string treatment; 
    public: 
        void setDiagnosis (string); 
        void setTreatment (string); 
        string showHistory (); 
}; 