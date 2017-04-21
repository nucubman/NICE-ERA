#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	
	
public:
	string Name;
	string Lastname;
	double Amount;
	string GetFullName(); //{
	//	return this->Lastname + " " + this->Name; // es esec sheileba 
	//}

	Person() {

	}

	Person(string name, string lastname) { //  class shi shiedzleba ramdenime Person is anu konstruktoris sheqmna ogond sxvadasxva parametrebit!
		this->Name = name;
		this->Lastname = lastname;
	}
  void SetName(string name, string lastname);
  this->Name = name;
  this->LastName = lastname;
};
 
string Person::GetFullName() {
	return this->Lastname + " " + this->Name;
}



void main(){
	Person p1("saba", "sekhniashvili");
	Person p2("sandro", "nutsubidze");

	Person p3;
  
  

	cout << p1.GetFullName() << endl;
	cout << p2.GetFullName() << endl;
	
  p3.SetName(name , lastname);

	system("pause");
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	
	
public:
	string Name;
	string Lastname;
	double Amount;
	string GetFullName(); //{
	//	return this->Lastname + " " + this->Name; // es esec sheileba 
	//}

	Person() {

	}

	Person(string name, string lastname) { //  class shi shiedzleba ramdenime Person is anu konstruktoris sheqmna ogond sxvadasxva parametrebit!
		this->Name = name;
		this->Lastname = lastname;
	}

	void SetName(string name, string lastname) {
		this->Name = name;
		this->Lastname = lastname;

	}
	
	

};
 
string Person::GetFullName() {
	return this->Lastname + " " + this->Name;
}



void main(){
	Person p1("saba", "sekhniashvili");
	Person p2("sandro", "nutsubidze");

	Person p3;
	string name, lastname;
	cin >> name >> lastname;
	

	cout << p1.GetFullName() << endl;
	cout << p2.GetFullName() << endl;

	Person *p4 = new Person;
	p4->SetName(name, lastname);
	cout << endl << p4->GetFullName() << endl;
	
	Person *persons = new Person[10]; // es sheqmnis 10 cal personas ! pointeri masivze person tipis obieqtebit!
	persons[0].GetFullName();

	system("pause");

}
//////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string Name;
	string Lastname;
public:
	double Amount;
	string GetFullName();

	Person() {

	}

	Person(string name, string lastname) {
		this->Name = name;
		this->Lastname = lastname;
	}

	void SetName(string name, string lastname) {
		this->Name = name;
         this->Lastname = lastname;
	}
};

string Person::GetFullName() {
	return this->Lastname + " " + this->Name;
}

void main()
{
	Person p1("saba", "sekhniashvili");
	Person p2("sandro", "nutsubidze");

	
		cout << p1.GetFullName() << endl;
		cout << p2.GetFullName() << endl;
	
	//Person p3;

	string name, lastname;

	cin >> name >> lastname;

	//p3.SetName(name, lastname);

	//cout << endl << p3.GetFullName() << endl;

	Person *p4 = new Person;
	p4->SetName(name, lastname);
	cout << endl << p4->GetFullName() << endl;

	Person *persons = new Person[10];
	persons[0].GetFullName();

	for (int i = 0; i <= 10; i++) {
		cin >> name >> lastname;
		persons[i].SetName(name, lastname);
	}

		for(int i = 0; i <= 10; i++){
			cout << endl << persons[i].GetFullName() << endl;
	}

	system("pause");
}




