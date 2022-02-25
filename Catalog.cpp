#include "std_lib_facilities.h"
#include "Catalog.h"

CourseCatalog::CourseCatalog(){
    map<string, string> catlog;
}

void CourseCatalog::addCourse(string code, string name){
    catalog.insert(pair<string, string>(code, name));
}

void CourseCatalog::removeCourse(string code){
    catalog.erase(code);
}

string CourseCatalog::getCourse(string code){
    return catalog.at(code);
}

void CourseCatalog::testClass(){
    CourseCatalog();
    CourseCatalog::addCourse("TDT4110","ITGK");
    CourseCatalog::addCourse("TDT4102","objekt");
    CourseCatalog::addCourse("TMA4100","Matte 1");

    for (const auto& elem : catalog){
        cout << elem.first << "." << elem.second << endl;
    }
}

void CourseCatalog::printCatalog(){
    for (const auto& elem : catalog){
            cout << elem.first << "." << elem.second << endl;
        }  
}

vector<string> CourseCatalog::readCatalog(){
    string iname;
    cout << "Please enter name of input file: ";
    cin >> iname;

    ifstream ist {iname};
    if (!ist) error("can't open input file ", iname);
    
    vector<string> info;

    string subject;
    
    while (ist >> subject){
        string subject;
        getline(ist, subject);

        info.push_back(subject);
    }

    return info;
}

void CourseCatalog::writeCatalog(){
    string oname;
    cout << "Please enter name of output file: ";
    cin >> oname;
    ofstream ost {oname};
    if (!ost) error("can't open output file ", oname);

    string subject;
    int lineNumber = 1; 
    for (const auto& sub : catalog){
        ost << lineNumber << ". " << sub.first << " " << sub.second << endl;
        lineNumber ++;
    }
}


