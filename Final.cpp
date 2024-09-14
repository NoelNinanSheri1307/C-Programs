#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

class Admin {
private:
    string user_name = "Admin";
    string password = "Admin@2024";

public:
    Admin(string a, string b) {
        if (a != user_name || b != password) {
            cout << "INVALID CREDENTIALS\n";
            exit(1);
        }
    }
    virtual ~Admin() {}
};

class Employee : public Admin {
protected:
    string emp_id;
    string name;
    int age;
    double salary;

public:
    Employee(string _emp_id, string _name, int _age, double _salary) :              Admin("Admin", "Admin@2024") {
        emp_id = _emp_id;
        name = _name;
        age = _age;
        salary = _salary;
    }

    virtual void get_data(string emp_id_input) = 0;
    virtual ~Employee() {}
};

class Doctor : public Employee {
private:
    string specialization;

public:
    Doctor(string _emp_id, string _name, int _age, double _salary, string _specialization)
        : Employee(_emp_id, _name, _age, _salary), specialization(_specialization) {}

    void get_data(string emp_id_input) {
        if (emp_id == emp_id_input) {
            cout << "\nEmployee ID : " << emp_id << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Salary : " << salary << endl;
            cout << "Specialization : " << specialization << endl;
        } else {
            cout << "Employee ID not found." << endl;
        }
    }
};

class Nurse : public Employee {
protected:
    int working_hours;

public:
    Nurse(string _emp_id, string _name, int _age, double _salary, int _working_hours)
        : Employee(_emp_id, _name, _age, _salary), working_hours(_working_hours) {}

    void get_data(string emp_id_input) {
        if (emp_id == emp_id_input) {
            cout << "\nEmployee ID : " << emp_id << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Salary : " << salary << endl;
            cout << "Working Hours : " << working_hours << endl;
        } else {
            cout << "Employee ID not found." << endl;
        }
    }
};

class Technician : public Employee {
protected:
    string dept;

public:
    Technician(string _emp_id, string _name, int _age, double _salary, string _dept)
        : Employee(_emp_id, _name, _age, _salary), dept(_dept) {}

    void get_data(string emp_id_input) {
        if (emp_id == emp_id_input) {
            cout << "\nEmployee ID : " << emp_id << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Salary : " << salary << endl;
            cout << "Department : " << dept << endl;
        } else {
            cout << "Employee ID not found." << endl;
        }
    }
};

class Patient : public Admin {
protected:
    string pname;
    int page;
    char gender;

public:
    Patient(string a, string b) : Admin(a, b) {}

    void getdetails() {
        cout << "\nEnter name of the patient: ";
        cin.ignore();
        getline(cin, pname);
        cout << "Enter the age: ";
        cin >> page;
        cout << "Enter the gender of the patient (M/F): ";
        cin >> gender;
    }
    void pdetails() {
        cout << "\nPatient: " << pname << endl;
        cout << "Age: " << page << endl;
        cout << "Gender: " << gender << endl;
    }
    void bookAppointment() {
        string consultationDept, timeSlot;

        cout << "\nEnter department of consultation: ";
        cin.ignore();
        getline(cin, consultationDept);

        cout << "Enter time slot (10:00, 12:00, 2:00, or 4:00): ";
        getline(cin, timeSlot);
        cout << "Appointment Booked Successfully" << endl;
    }
    virtual ~Patient() {}
};

class InPatient : public Patient {
    int nod;
    int rate;
    int med_charges;
    int ser_charges;
    int i_total;

public:
    void In_Patient() {
        cout << "\nNumber of days spent in the hospital: ";
        cin >> nod;
        if (nod < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        cout << "Daily Rate: $";
        cin >> rate;
        if (rate < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        cout << "Hospital Medication Charges: $";
        cin >> med_charges;
        if (med_charges < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        cout << "Charges for Hospital Services: $";
        cin >> ser_charges;
        if (ser_charges < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        i_total = (nod * rate) + med_charges + ser_charges;
        cout << "Patient Total Charges: $" << i_total << endl << endl;
    }
};

class OutPatient : public Patient {
    int medication;
    int service;
    int o_total;

public:
    void Out_Patient() {
        cout << "\nHospital Medication Charges: $";
        cin >> medication;
        if (medication < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        cout << "Charges for Hospital Services: $";
        cin >> service;
        if (service < 0) {
            cout << "Only Positive Number Allowed" << endl;
            return;
        }
        o_total = medication + service;
        cout << "Patient Total Charges: $" << o_total << endl << endl;
    }
};

class Finance {
public:
    string name;
    float consultationFee;
    float medicationCost;
    float testCost;
    float totalBill;

    Finance() {
        name = "";
        consultationFee = 0.0f;
        medicationCost = 0.0f;
        testCost = 0.0f;
        totalBill = 0.0f;
    }

    void generateBill() {
        cout << "\nEnter patient name: ";
        getline(cin, name);
        cout << "Enter consultation fee: $";
        cin >> consultationFee;
        cout << "Enter medication cost: $";
        cin >> medicationCost;
        cout << "Enter test cost: $";
        cin >> testCost;

        totalBill = consultationFee + medicationCost + testCost;

        cout << "\n*************************************************" << endl;
        cout << "*             Baby Memorial Hospital              *" << endl;
        cout << "***************************************************" << endl;
        cout << "Billing Details:" << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Consultation Fee: $" << consultationFee << endl;
        cout << "Medication Cost: $" << medicationCost << endl;
        cout << "Test Cost: $" << testCost << endl;
        cout << "Total Bill: $" << totalBill << endl;
        cout << "***************************************************" << endl;
    }
};

class SalaryDetails {
public:
    string name;
    float salary;

    SalaryDetails() : name(""), salary(0.0f) {}

    SalaryDetails(string _name, float _salary) : name(_name), salary(_salary) {}
};

SalaryDetails calculateSalaryAndDisplay() {
    float baseSalary = 0.0f;
    int professionOption;
    int experienceYears;

    cout << "Select a profession:" << endl;
    cout << "1. Doctor" << endl;
    cout << "2. Nurse" << endl;
    cout << "3. Surgeon" << endl;
    cout << "4. Therapist" << endl;
    cout << "5. Administrative Staff" << endl;
    cout << "6. Support Staff" << endl;
    cout << "Enter the option number: ";
    cin >> professionOption;

    cin.ignore();

    switch (professionOption) {
        case 1:
            baseSalary = 50000.0f;
            break;
        case 2:
            baseSalary = 25000.0f;
            break;
        case 3:
            baseSalary = 75000.0f;
            break;
        case 4:
            baseSalary = 40000.0f;
            break;
        case 5:
            baseSalary = 70000.0f;
            break;
        case 6:
            baseSalary = 15000.0f;
            break;
        default:
            cout << "Invalid option." << endl;
            return SalaryDetails("", -1.0f);
    }

    string name;
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter years of experience: ";
    cin >> experienceYears;

    if (experienceYears < 0) {
        cout << "Invalid years of experience." << endl;
        return SalaryDetails("", -1.0f);
    }

    float totalSalary = baseSalary * (1.0f + 0.05f * experienceYears);

    cout << "Name: " << name << endl;
    cout << "Total Salary: $" << totalSalary << endl;

    return SalaryDetails(name, totalSalary);
}

int main() {
    string u, p;
    cout << "Enter Username - ";
    cin >> u;
    cout << "Enter Password - ";
    cin >> p;
    Admin(u, p);
    cout << "LOGIN SUCCESSFUL\n";

    const int numDoctors = 3;
    Doctor doctors[numDoctors] = {
        Doctor("1", "Dr. Smith", 35, 12345, "MBBS"),
        Doctor("2", "Dr. Johnson", 40, 13500, "Cardiology"),
        Doctor("3", "Dr. Williams", 38, 13000, "Neurology")
    };

    Nurse nurse("4", "Nurse Jane", 28, 8000, 8);
    Technician tech("5", "Technician Mike", 40, 10000, "Lab");

    Finance finance;
    Patient patient(u, p);

    int choice;
    Employee* employeePtr;

    cout << "\n***************************************************" << endl;
    cout << "*             Baby Memorial Hospital              *" << endl;
    cout << "***************************************************" << endl;

    cout << "Choose an option:\n";
    cout << "1) Schedule appointment for patient\n";
    cout << "2) View salaries\n";
    cout << "3) View doctor info\n";
    cout << "4) View nurse info\n";
    cout << "5) View technician info\n";
    cout << "6) Bill\n";
    cout << "7) Exit\n";

    while (1) {
        cout << "\nChoose an option (1-7):";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            patient.bookAppointment();
            break;
        case 2: {
            SalaryDetails result = calculateSalaryAndDisplay();
            if (result.salary == -1.0f) {
                return 1;
            }
            break;
        }

        case 3:
            int docChoice;
            cout << "\nEnter doctor ID to view info: ";
            cin >> docChoice;
            if (docChoice > 0 && docChoice <= numDoctors) {
                doctors[docChoice - 1].get_data(to_string(docChoice));
            } else {
                cout << "Invalid doctor ID." << endl;
            }
            break;
        case 4:
            employeePtr = &nurse;
            employeePtr->get_data("4");
            break;
        case 5:
            employeePtr = &tech;
            employeePtr->get_data("5");
            break;
        case 6: {
            Finance patient1;
            patient1.generateBill();
            break;
        }
        case 7:
            cout << "\nTHANK YOU. VISIT AGAIN!" << endl;
            exit(1);
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }

    return 0;
}
