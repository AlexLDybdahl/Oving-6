//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// 
// keep_window_open() added for TDT4102, excercise 0

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"
#include "Read_and_write.h"
#include "count.h"
#include "debug.h"
#include "Catalog.h"
#include "Temps.h"

//------------------------------------------------------------------------------'

// C++ programs start by executing the function main

int main()
{	
	int i;
	cout << "oppgave:" << endl;
	cin >> i;

	switch (i)
	{
	case 0:
	{
		cout << "Capitals:\n";

		for (auto& elem : capitalsMap) {
			cout << getCapital(elem.first) << endl; 
		}
		break;
	}
	case 1:
	{
		CourseCatalog cc;

		cc.testClass();

		cc.addCourse("TDT4102", "c++");
		cout << "---------" << endl;
		cc.printCatalog();
		cout << "Verdien oppdateres ikke" << endl;
		break;
	}
	case 2:
	{
		CourseCatalog cc;

		cc.testClass();

		vector<string> subjects = cc.readCatalog();

		for (const auto& sub : subjects){
			cout << sub << endl;
		}
	}
	case 3:
	{
		Temps t;

		vector<Temps> data =  t.readTemps("temperatures.txt");

		t.tempStats(data);
	}
	default:
		break;
	} 

	
}

//------------------------------------------------------------------------------
