#pragma once

class CourseCatalog {
    private:
        map<string, string> catalog;
    public:
        CourseCatalog();

        void addCourse(string code, string name);
        void removeCourse(string code);
        string getCourse(string code);

        vector<string> readCatalog();
        void writeCatalog();
        
        void testClass();
        void printCatalog();

        friend ostream& operator<<(ostream& os, const CourseCatalog& cc); 
};
