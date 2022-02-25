#include "std_lib_facilities.h"
#include "Temps.h"

istream& operator>>(istream& is, Temps& t){
    return is >> t.max >> t.min;
}

vector<Temps> Temps::readTemps(string fileName){
    vector<Temps> data;
    
    ifstream ist {fileName};
    if (!ist) error("can't open input file ", fileName);

    for(Temps t; ist >> t;){
        data.push_back(t);
    }

    return data;
}

void Temps::tempStats(vector<Temps> data){
    double max = 0;
    int maxIndex;
    double min = 0;
    int minIndex;
    
    int index = 0;

    for(const auto& d : data){
        if (d.max > max){
            max = d.max;
            maxIndex = index;
        }

        if (d.min < min){
            min = d.min;
            minIndex = index;
        }

        index ++;
    }

    cout << "Largest temp: " << max << " at day " << maxIndex << endl;
    cout << "Smallest temp: " << min << " at day " << minIndex << endl;
}