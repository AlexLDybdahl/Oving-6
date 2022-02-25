#include "std_lib_facilities.h"
#include "Read_and_write.h"
#include "count.h"
#include "debug.h"
#include "Catalog.h"
#include "Temps.h"

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
