#include "std_lib_facilities.h"
#include "Read_and_write.h"
#include "count.h"

void countLetters(){
    vector<int> stats(26);
    
    string iname;
    cout << "Please enter name of input file: ";
    cin >> iname;
    ifstream ist {iname};
    if (!ist) error("can't open outputfile ", iname);

    char letter;
    
    while(!ist.eof()){
        ist.get(letter);
        stats[static_cast<int>(tolower(letter) - 'a')] ++;
    }

    string oname;
    cout << "Please enter name of output file: ";
    cin >> oname;
    ofstream ost {oname};
    if (!ost) error("can't open outputfile ", oname);
    
    int count = 0;

    for (const auto& l : stats){
        ost << static_cast<char> ('a' + count) << " : " << l << endl;
        count++;
    }

}