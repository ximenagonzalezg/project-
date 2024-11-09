#include <string> 
using namespace std;

class Appointment{
    private: 
        int idPacient; 
        int idDoctor; 
        string date; 
        string time; 
    public: 
        void setDate (string); 
        void setTime (string); 
        string showDetails (); 
        bool checkAvailability(); 
}; 