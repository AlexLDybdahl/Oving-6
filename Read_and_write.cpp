#include "std_lib_facilities.h"
#include "Read_and_write.h"


void writeToFile(){
    string oname;
    cout << "Please enter name of output file: ";
    cin >> oname;
    ofstream ost {oname};
    if (!ost) error("can't open output file ", oname);

    while (true)
    {
        string word;
        cout << "Please enter a string: ";
        cin >> word;

        if (word == "quit"){
            break;
        }
        ost << word << endl;
    }
     
}

void readFile(){
    string iname;
    cout << "Please enter name of input file: ";
    cin >> iname;

    ifstream ist {iname};
    if (!ist) error("can't open input file ", iname);

    string oname;
    cout << "Please enter name of output file: ";
    cin >> oname;
    ofstream ost {oname};
    if (!ost) error("can't open output file ", oname);

    string line;
    int lineNumber = 1; 
    while (ist >> line){
        ost << lineNumber << "." << line << endl;
        lineNumber += 1;
    }
}
