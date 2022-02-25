#pragma once

class Temps{
    private:
        double max;
        double min;

    public:
        Temps(){};

        vector<Temps> readTemps(string fileName);

        void tempStats(vector<Temps> data);

        friend istream& operator>>(istream& is, Temps& t);
};

