# Hospital Management System
In modern healthcare systems, managing patient information, doctor schedules, appointments, and departmental organization can be complex and error-prone when handled manually or with fragmented systems. This can lead to inefficiencies such as miscommunication, overlapping appointments, and inadequate tracking of medical histories.

Hospitals and clinics require a centralized, efficient, and scalable system that facilitates the management of patients, doctors, and appointments while maintaining detailed records such as medical histories and departmental structures. The system should streamline operations, ensure accurate information retrieval, and improve resource allocation to provide better healthcare services. 

This problem is particularly challenging in environments with a growing patient base and diverse medical professionals, requiring a solution that can adapt to varying roles and responsibilities while maintaining reliability and ease of use.

This system allows the management of pacients, doctors, appointments, departments, and medical history of the pacients. 

- Person: Base class representing shared characteristics of any individual in the system (patients or doctors). It’s extended by other classes to avoid redundancy.
- Patient: Represents a patient register in the hospital, inheriting from Person,
- Doctor: Represents a doctor who works in the hospital, also inheriting from Person
*Patient and Doctor represent specialized entities derived from Person. Their unique attributes and responsibilities align with their roles in a healthcare environment. 
- Appointment: Models the interaction between Patient and Doctor, encapsulating scheduling details. 
- Medical History: Centralizes the patient’s health records (diagnosis and treatments)
- Department: Groups Doctor objects to simulate real-world departamental organization and supports operations like adding and removin doctors. 

Example of System Use:
- Register a patient: An instance of Patient is created and its information is saved.
- Register a doctor: The Doctor class stores the doctor's information and specialty.
- Schedule an Appointment: An Appointment instance is created that links the patient to the doctor on a specific date and time.
- Update medical history: In the Medical History class, diagnoses and treatments are added as the patient receives medical care.
- Manage departments: The Department class organizes doctors according to their specialty, facilitating the administration of hospital staff.
This management system is ideal for keeping basic control of the most important aspects of a hospital, organizing appointments, doctors and patients.

Finally, my project is not ideal for small clinics or offices where centralized management is unnecessary. It’s also not suited for areas with limited technological infrastructure, resistance to automation, or the need for complex integrations with external systems.

<img width="410" alt="Captura de pantalla 2024-11-22 a la(s) 9 03 11 p m" src="https://github.com/user-attachments/assets/ae97c761-aa08-40a7-aeb1-b7a8fcc80c4d">
