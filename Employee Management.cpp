#include <iostream>
#include <string>
#include<conio.h>
#include<fstream>
using namespace std;

struct Employee {
  int id;
  string name;
  float salary;
};

const int MAX_EMPLOYEES = 100;

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee() {
  if (employeeCount == MAX_EMPLOYEES) {
    cout << "Cannot add more employees, the list is full!" << endl;
    return;
  }

  cout << "Enter employee id: ";
  cin >> employees[employeeCount].id;

  cout << "Enter employee name: ";
  cin >> employees[employeeCount].name;

  cout << "Enter employee salary: ";
  cin >> employees[employeeCount].salary;
  
  ofstream Data("DAta.txt", ios::app);
  Data<<"Employee ID : "<<employees[employeeCount].id;
  Data<<"Employee Name : "<<employees[employeeCount].name;
  Data<<"Employee Salary : "<<employees[employeeCount].salary;
  Data.close();

  employeeCount++;
  cout << "Employee added successfully!" << endl;
  cout<<"Press any key to continue";
  getch();
  system("cls");
}

void updateEmployee() {
  int id;
  cout << "Enter the id of the employee you want to update: ";
  cin >> id;

  for (int i = 0; i < employeeCount; i++) {
    if (employees[i].id == id) {
      cout << "Enter new name: ";
      cin >> employees[i].name;
      cout << "Enter new salary: ";
      cin >> employees[i].salary;
      cout << "Employee updated successfully!" << endl;
      ofstream Data("DAta.txt", ios::app);
 	 Data<<"Employee ID : "<<employees[employeeCount].id<<endl;
 	 Data<<"Employee Name : "<<employees[employeeCount].name<<endl;
     Data<<"Employee Salary : "<<employees[employeeCount].salary<<endl;
 	 Data.close();
      return;
    }
  }

  cout << "Employee not found!" << endl;
  cout<<"Press any key to continue";
  getch();
  system("cls");
}

void deleteEmployee() {
  int id;
  cout << "Enter the id of the employee you want to delete: ";
  cin >> id;

  for (int i = 0; i < employeeCount; i++) {
    if (employees[i].id == id) {
      for (int j = i; j < employeeCount - 1; j++) {
        employees[j] = employees[j + 1];
      }
      employeeCount--;
      cout << "Employee deleted successfully!" << endl;
      cout<<"Press any key to continue";
  getch();
  system("cls");
      return;
    }
  }

  cout << "Employee not found!" << endl;
  cout<<"Press any key to continue";
  getch();
  system("cls");
}

void viewEmployees() {
  if (employeeCount == 0) {
    cout << "No employees to display!" << endl;
    return;
  }

  cout << "ID\tName\tSalary" << endl;
  for (int i = 0; i < employeeCount; i++) {
    cout << employees[i].id << "\t" << employees[i].name << "\t" << employees[i].salary << endl;
  }
  cout<<"Press any key to continue";
  getch();
  system("cls");
}

#include <bits/stdc++.h>
#define max 20
using namespace std;
 
// Structure of Employee
struct employee {
    string name;
    long int code;
    string designation;
    int exp;
    int age;
};
 
int num;
void showMenu();
 
// Array of Employees to store the
// data in the form of the Structure
// of the Array
employee emp[max], tempemp[max],
    sortemp[max], sortemp1[max];
 
// Function to build the given datatype
void build()
{
    cout << "Build The Table\n";
    cout << "Maximum Entries can be "
         << max << "\n";
 
    cout << "Enter the number of "
         << "Entries required";
    cin >> num;
 
    if (num > 20) {
        cout << "Maximum number of "
             << "Entries are 20\n";
        num = 20;
    }
    cout << "Enter the following data:\n";
 
    for (int i = 0; i < num; i++) {
        cout << "\nEmployee Name ";
        cin >> emp[i].name;
 
        cout << "Employee ID ";
        cin >> emp[i].code;
 
        cout << "Designation ";
        cin >> emp[i].designation;
 
        cout << "Experience ";
        cin >> emp[i].exp;
 
        cout << "Age ";
        cin >> emp[i].age;
        cout<<endl;
        ofstream Data("DAta.txt", ios::app);
        Data<<"Employee ID : "<<emp[i].code<<endl;
 		 Data<<"Employee Name : "<<emp[i].name<<endl;
  		Data<<"Employee Designation : "<<emp[i].designation<<endl;
  		Data<<"Employee Experience : "<<emp[i].exp<<endl;
  		Data<<"Employee Age : "<<emp[i].age<<endl<<endl;
  		Data.close();
    }
	cout<<"Press any key to continue";
 	 getch();
 	 system("cls");
 
    showMenu();
}
 
// Function to insert the data into
// given data type
void insert()
{
    if (num < max) {
        int i = num;
        num++;
 
        cout << "Enter the information "
             << "of the Employee\n";
        cout << "Name ";
        cin >> emp[i].name;
 
        cout << "Employee ID ";
        cin >> emp[i].code;
 
        cout << "Designation ";
        cin >> emp[i].designation;
 
        cout << "Experience ";
        cin >> emp[i].exp;
 
        cout << "Age ";
        cin >> emp[i].age;
        cout<<endl;
        ofstream Data("DAta.txt", ios::app);
        Data<<"Employee ID : "<<emp[i].code<<endl;
 		 Data<<"Employee Name : "<<emp[i].name<<endl;
  		Data<<"Employee Designation : "<<emp[i].designation<<endl;
  		Data<<"Employee Experience : "<<emp[i].exp<<endl;
  		Data<<"Employee Age : "<<emp[i].age<<endl<<"\n\n";
        cout<<"Press any key to continue";
        getch();
        system("cls");
    }
    else {
        cout << "Employee Table Full\n";
        cout<<"Press any key to continue";
  		getch();
  		system("cls");
    }
 
    showMenu();
}
 
// Function to delete record at index i
void deleteIndex(int i)
{
    for (int j = i; j < num - 1; j++) {
        emp[j].name = emp[j + 1].name;
        emp[j].code = emp[j + 1].code;
        emp[j].designation
            = emp[j + 1].designation;
        emp[j].exp = emp[j + 1].exp;
        emp[j].age = emp[j + 1].age;
    }
    cout<<"Press any key to continue";
  getch();
  system("cls");
    return;
}
 
// Function to delete record
void deleteRecord()
{
    cout << "Enter the Employee ID "
         << "to Delete Record";
 
    int code;
 
    cin >> code;
    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            deleteIndex(i);
            num--;
            break;
        }
    }
    cout<<"Press any key to continue";
  getch();
  system("cls");
    showMenu();
}
 
void searchRecord()
{
    cout << "Enter the Employee"
         << " ID to Search Record";
 
    int code;
    cin >> code;
 
    for (int i = 0; i < num; i++) {
 
        // If the data is found
        if (emp[i].code == code) {
            cout << "Name "
                 << emp[i].name << "\n";
 
            cout << "Employee ID "
                 << emp[i].code << "\n";
 
            cout << "Designation "
                 << emp[i].designation << "\n";
 
            cout << "Experience "
                 << emp[i].exp << "\n";
 
            cout << "Age "
                 << emp[i].age << "\n";
            break;
        }
    }
 	cout<<"Press any key to continue";
  getch();
  system("cls");
    showMenu();
}
 
// Function to show menu
void showMenu()
{
 
    cout << "-----------------------------------------------------------------------------------------------------------------"
         << "\n                                                      Employee                                                 \n"
         << "                                                   Management System                                             \n"
         << "\n---------------------------------------------------------------------------------------------------------------\n\n";
 
    cout << "Available Options:\n\n";
    cout << "Enter 1st Employee Data          (1)\n";
    cout << "Insert New Entry of Employees    (2)\n";
    cout << "Delete Entry of Employees        (3)\n";
    cout << "Search an Employee Record        (4)\n";
    cout << "Exit                             (5)\n";
 
    int option;
 
    // Input Options
    cin >> option;
 
    // Call function on the bases of the
    // above option
    if (option == 1) {
        build();
    }
    else if (option == 2) {
        insert();
    }
    else if (option == 3) {
        deleteRecord();
    }
    else if (option == 4) {
        searchRecord();
    }
    else if (option == 5) {
        return;
    }
    else {
        cout << "Expected Options"
             << " are 1/2/3/4/5";
 		system("cls");
        showMenu();
    }
}
 
// Driver Code
int main()
{
	
    showMenu();
    return 0;
}