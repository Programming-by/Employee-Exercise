// Employee Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class clsEmployee {

private:

	int _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	float _Salary;
	string _Department;

public:

	clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, float Salary, string Department) {

		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;

	}

	int ID() {
		return _ID;
	}

	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	string FirstName() {
		return _FirstName;
	}


	void SetLastName(string LastName) {
		_LastName = LastName;
	}

	string LastName() {
		return _LastName;
	}

	void SetTitle(string Title) {
		_Title = Title;
	}

	string Title() {
		return _Title;
	}

	void SetEmail(string Email) {
		_Email = Email;
	}

	string Email() {
		return _Email;
	}
	
	void SetPhone(string Phone) {
		_Phone = Phone;
	}

	string Phone() {
		return _Phone;
	}

	void SetSalary(float Salary) {
		_Salary = Salary;
	}

	float Salary() {
		return _Salary;
	}
	void SetDepartment(string Department) {
		_Department = Department;
	}

	string Department() {
		return _Department;
	}

	string FullName() {

		return _FirstName + " " + _LastName;
	}

	void Print() {
		cout << "\nInfo:";  
		cout << "\n___________________";   
		cout << "\nID         : " << _ID;     
		cout << "\nFirstName  : " << _FirstName; 
		cout << "\nLastName   : " << _LastName;  
		cout << "\nFull Name  : " << FullName();
		cout << "\nTitle      : " <<_Title;
		cout << "\nEmail      : " << _Email;        
		cout << "\nPhone      : " << _Phone;
		cout << "\nSalary     : " << _Salary;
		cout << "\nDepartment : " << _Department;
		cout << "\n___________________\n";
	}


	void SendEmail(string Subject, string Body) {

		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;

	}

	void SendSMS(string TextMessage) {
		cout << "\nThe following SMS sent successfully to phone: " << _Phone;
		cout << "\n" << TextMessage << endl;
	}

};

int main()
{
	clsEmployee Employee1(10, "Anas", "Naamneh", "Software Developer", "my@gmail.com", "0799999999", 5000, "IT");
	
	Employee1.Print();

	Employee1.SendEmail("Hi", "How are you?");
	Employee1.SendSMS("How are you?");


	system("pause>0");
	return 0;
}

