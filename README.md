# Hospital Management System
This system allows the management of pacients, doctors, appointments, cites, and medical history of the pacients. The attributes and methods of each class cover differents aspects of the hospital management.  

Clases: 
-> Person
Base class that represents any person in the system with attributes like id, name, phone, and methods to show info, and update phone. It’s extended by other classes to avoid redundancy.

-> Patient
Represents a patient register in the hospital, inheriting from Person, with additional attributes like age and address and methods to update address.   

-> Doctor
Represents a doctor who works in the hospital, also inheriting from Person, with an additional attribute specialty to specify their medical field and method to obtain the specialty 

-> Appointment
Represents a medical appointment schedule between a pacient and a doctor, with attributes for date and time, and methods to show details, reschedule, and check availability

-> Medical History
Represents a patient’s medical history , including the diagnosis and treatments, linked to a specific patient by the idPatient. Methods include add diagnosis, add treatment, and show history. 

-> Department
Represents a hospital department, holding an id, name, a list of doctors, and methods to add, remove, and view the doctors in each department. 

Example of System Use: 

1. Register a patient: An instance of Patient is created and its information is saved.
2. Register a doctor: The Doctor class stores the doctor's information and specialty.
3. Schedule an Appointment: An Appointment instance is created that links the patient to the doctor on a specific date and time.
4. Update medical history: In the Medical History class, diagnoses and treatments are added as the patient receives medical care.
5. Manage departments: The Department class organizes doctors according to their specialty, facilitating the administration of hospital staff.

This management system is ideal for keeping basic control of the most important aspects of a hospital, organizing appointments, doctors and patients.

