#include <iostream>
#include <string>
#include "Person.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.cpp"
#include "Department.cpp"
#include "Patient.cpp"

int main() {
    Patient p1 (17896, "Ximena González", "442 8307 639", 18, "Milenio III"); 

    Department dpt("Cardiology");

    Doctor d1 (78456, "Dr. Genaro", "442 114 7854", "Cardiology"); 
    Doctor d2 (2446, "Dr. Leticia", "442 6789 234", "Nutrition"); 

    dpt.addDoctor(d1);
    dpt.addDoctor(d2);

    cout << "Doctors in " << dpt.getName() << " department:\n";
    vector<Doctor> doctors = dpt.showDoctors();
    for (size_t i = 0; i < doctors.size(); i++) {
        cout << " - " << doctors[i].getName() << " (" << doctors[i].getSpecialty() << ")\n";
    }

    MedicalHistory medicalHistory1;
    medicalHistory1.setDiagnosis("Heart Condition");
    medicalHistory1.setTreatment("Regular check-ups and medication");
    p1.setMedicalHistory(medicalHistory1);

    cout << "\nPatient Details:\n";
    cout << p1.getDetails() << "\n";

    Appointment apt (p1, d1);
    apt.setDate("2024-11-23");
    apt.setTime("10:00 AM");

    cout << "\nAppointment Details:\n";
    cout <<apt.getDetails() << "\n";

    dpt.deleteDoctor(d2);

    cout << "\nUpdated Doctors in " << dpt.getName() << " department:\n";
    doctors = dpt.showDoctors();
    for (size_t i = 0; i < doctors.size(); i++) {
        cout << " - " << doctors[i].getName() << " (" << doctors[i].getSpecialty() << ")\n";
    }

    return 0;
}
