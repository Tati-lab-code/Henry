#include<iostream>
#include<fstream>
using namespace std;
struct Employee
{
    string ID, FirstName, LastName, Dept, Status;
    double salary, Netpay, NHIMA, NAPSA, Paye;
    int age, NRC;
};
Employee Person[30];
void AddEmployee();
int main()
{
    cout<<"Add employee: "<<endl;
    AddEmployee();
}
void AddEmployee()
{
    ofstream Records;
    Records.open("EmployeeRecords.txt");
    if(Records)
    {
        for(int i=0; i<30;i++)
        {
            cout<<"Employee ID: ";
            cin>>Person[i].ID;
            cout<<"NRC No: ";
            cin>>Person[i].NRC;
            cout<<"First Name: ";
            cin>>Person[i].FirstName;
            cout<<"Last Name: ";
            cin>>Person[i].LastName;
            cout<<"Age: ";
            cin>>Person[i].age;
            cout<<"Department: ";
            cin>>Person[i].Dept;
            cout<<"Status: ";
            cin>>Person[i].Status;
            cout<<"Net Pay: ";
            cin>>Person[i].Netpay;
            Records<<Person[i].ID<<"\t\t";
            Records<<Person[i].NRC<<"\t\t";
            Records<<Person[i].FirstName<<"\t\t";
            Records<<Person[i].LastName<<"\t\t";
            Records<<Person[i].age<<"\t\t";
            Records<<Person[i].Dept<<"\t\t";
            Records<<Person[i].Status<<"\t\t";
            Records<<Person[i].Netpay<<endl;
        }
        Records.close();
    }
    else
    {
       cout<<"Could not open file"<<endl;
    }
}
