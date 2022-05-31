#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
	string name;
	string surname;
	uint32_t age;



public:
	Person();
	Person(string name, string surname, uint32_t age);

	string GetName();
	string GetSurname();
	uint32_t GetAge();

	void SetName(string name);
	void SetSurname(string surname);
	void SetAge(uint32_t age);


	~Person();



};
