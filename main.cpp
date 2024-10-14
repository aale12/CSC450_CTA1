/*
 * main.cpp
 *
 *  Created on: Oct 13, 2024
 *      Author: letai
 */
#include <iostream>
using namespace std;

// create a class person
class Person {
private:
	string firstName;
	string lastName;
	string address;
	string city;
	string zipCode;
public:
	// constructor
	void setDetails(string firstName, string lastName, string address, string city, string zipCode) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->address = address;
		this->city = city;
		this->zipCode = zipCode;
	}

	void printPersonDetails() {
		string attributes[] = {
				"First Name: " + firstName,
				"Last Name: " + lastName,
				"Address: " + address,
				"City: " + city,
				"Zip Code: " + zipCode
		};

		// print each attribute
		for (const string& a : attributes) {
			cout << a << endl;
		}
	}
};

int main() {


	//create instance of person
	Person person;
	person.setDetails("Tony", "Stark", "10880 Malibu Point", "Malibu", "902652");

	person.printPersonDetails();

    return 0;
}




