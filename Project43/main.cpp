#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Directory
{
private:
	string nameOfCompany;
	string owner;
	string number;
	string occupation; // Род деятельности
	string adress;
public:
	Directory() = delete;
	Directory(string nameOfCompany, string owner, string number, string occupation, string adress);
	void Print();
	void AddInFile();
	void ReadInFile();
	string findNameOfCompany(string nameOfCompany);
	string findOwner(string owner);
	string findNumber(string number);
	string findOccupation(string occupation);
	string findAdress(string adress);
	void SetNameOfCompany(string nameOfCompany);
	void SetOwner(string owner);
	void SetNumber(string number);
	void SetOccupation(string occupation);
	void SetAdress(string adress);
	string GetNameOfCompany();
	string GetOwner();
	string GetNumber();
	string GetOccupation();
	string GetAdress();
};

Directory::Directory(string nameOfCompany, string owner, string number, string occupation, string adress)
{
	this->nameOfCompany = nameOfCompany;
	this->owner = owner;
	this->number = number;
	this->occupation = occupation;
	this->adress = adress;
}

void Directory::Print()
{
	cout << "\nName of company: " << this->nameOfCompany;
	cout << "\nOwner: " << this->owner;
	cout << "\nNumber: " << this->number;
	cout << "\nOccupation: " << this->occupation;
	cout << "\nAdress: " << this->adress;
}

void Directory::AddInFile()
{
	ofstream out("Test.txt", ios::app);
	if (out.is_open() == true)
	{
		out << "Name of company: " << this->nameOfCompany << endl;
		out << "Owner: " << this->owner << endl;
		out << "Number: " << this->number << endl;
		out << "Occupation: " << this->occupation << endl;
		out << "Adress: " << this->adress << endl;
		out << endl << endl;
		out.close();
	}
}

void Directory::ReadInFile()
{
	ifstream in("Test.txt");
	if (in.is_open() == true)
	{
		string newSmth;
		do
		{
			getline(in, newSmth);
			cout << newSmth << endl;
		} while (!in.eof());
		in.close();
	}
}

string Directory::findNameOfCompany(string nameOfCompany)
{
	ifstream in("Test.txt");
	string newSmth;
	do
	{
		if (in.is_open() == true)
		{
			in >> newSmth;
			if (nameOfCompany == newSmth)
			{
				in.close();
				return nameOfCompany;
			};
		}
	} while (!in.eof());
}

string Directory::findOwner(string owner)
{
	ifstream in("Test.txt");
	string newSmth;
	do
	{
		if (in.is_open() == true)
		{
			in >> newSmth;
			if (owner == newSmth)
			{
				in.close();
				return owner;
			};
		}
	} while (!in.eof());
}

string Directory::findNumber(string number)
{
	ifstream in("Test.txt");
	string newSmth;
	do
	{
		if (in.is_open() == true)
		{
			in >> newSmth;
			if (number == newSmth)
			{
				in.close();
				return number;
			};
		}
	} while (!in.eof());
}

string Directory::findOccupation(string occupation)
{
	ifstream in("Test.txt");
	string newSmth;
	do
	{
		if (in.is_open() == true)
		{
			in >> newSmth;
			if (occupation == newSmth)
			{
				in.close();
				return occupation;
			};
		}
	} while (!in.eof());
}

string Directory::findAdress(string adress)
{
	ifstream in("Test.txt");
	string newSmth;
	do
	{
		if (in.is_open() == true)
		{
			in >> newSmth;
			if (adress == newSmth)
			{
				in.close();
				return adress;
			};
		}
	} while (!in.eof());
}

void Directory::SetNameOfCompany(string nameOfCompany)
{
	this->nameOfCompany = nameOfCompany;
}

void Directory::SetOwner(string owner)
{
	this->owner = owner;
}

void Directory::SetNumber(string number)
{
	this->number = number;
}

void Directory::SetOccupation(string occupation)
{
	this->occupation = occupation;
}

void Directory::SetAdress(string adress)
{
	this->adress = adress;
}

string Directory::GetNameOfCompany()
{
	return this->nameOfCompany;
}

string Directory::GetOwner()
{
	return this->owner;
}

string Directory::GetNumber()
{
	return this->number;
}

string Directory::GetOccupation()
{
	return this->occupation;
}

string Directory::GetAdress()
{
	return this->adress;
}

int main()
{
	Directory obj("STEP", "DMITRIY", "+38909-129328203", "EDUCATION", "SADOVAYA 3");
	//obj.AddInFile();
	Directory obj2("Microsoft", "DMITRIY", "+38909-129328203", "EDUCATION", "SADOVAYA 2");
	//obj2.AddInFile();
	obj2.ReadInFile();
	cout << obj.findNameOfCompany("Microsoft");
}
