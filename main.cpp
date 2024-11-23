#include <iostream>
#include <string>
#include "Person.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.cpp"
#include "Department.cpp"
#include "Patient.cpp"

int main() 
{
    Department dpt("Cardiology");

    Doctor d1 (78456, "Genaro", "442 114 7854", "Cardiology"); 
    Doctor d2 (2446, "Leticia", "442 6789 234", "Nutrition"); 

    dpt.addDoctor(d1);
    dpt.addDoctor(d2);

    cout << "Doctors in " << dpt.getName() << " department:\n";
    vector<Doctor> doctors = dpt.showDoctors();
    for (size_t i = 0; i < doctors.size(); i++) {
        cout << " - " << doctors[i].getName() << " (" << doctors[i].getSpecialty() << ")\n";
    }

    Patient p1 (17896, "Ximena", "442 8307 639", 18, "Milenio III"); 

    // Create an appointment
    Appointment apt (p1, d1);
    apt.setDate("2024-11-23");
    apt.setTime("10:00 AM");

    // Print appointment details
    cout << "\nAppointment Details:\n";
    cout << "Patient: " << p1.getName() << "\n";
    cout << "Doctor: " << apt.getDoctor().getName() << "\n";
    cout << "Date: " << apt.getDate() << "\n";
    cout << "Time: " << apt.getTime() << "\n";

    // Remove a doctor from the department
    dpt.deleteDoctor(d2);

    // Print updated list of doctors in the department
    cout << "\nUpdated Doctors in " << dpt.getName() << " department:\n";
    doctors = dpt.showDoctors();
    for (size_t i = 0; i < doctors.size(); i++) {
        cout << " - " << doctors[i].getName() << " (" << doctors[i].getSpecialty() << ")\n";
    }

    return 0;
}
