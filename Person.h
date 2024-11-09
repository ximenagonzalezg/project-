#include <string> 
using namespace std;

class Person{
    private: 
        int id; 
        string name; 
        string phone; 
    public: 
        Person(int, string, string); 
        string showInfo(); 
}; 