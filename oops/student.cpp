#include <cstring>

class student
{
    int age;
    
public:
char *name;
student(int age, char *name){
    this -> age = age;
    // Shallow copy
    // this -> name = name;
    // Deep copy
    this -> name = new char[strlen(name) + 1];
    strcpy(this -> name, name);
}
  
//   Copy constructor
  student(student const &s){
    this -> age = s.age;
    // this -> name = s.name;  // shallo copy

    // Deep copy
    this -> name = new char[strlen(s.name)+ 1];
    strcpy(this -> name, s.name);
  }

    void display(){
        cout << name << " " << age << endl;
    }
};

class students{
    static int totalStudents; // total number of students present

    public:
    int age;
    const int rollNumber;
    int &x;
    
    students(int r, int age): rollNumber(r), age(age), x(this -> age) {
        totalStudents++;

    }
    int getRollNumber(){
        return rollNumber;
    }

    static int getTotalStudents(){
        return totalStudents;
    }
    
    void display(){
        cout << rollNumber << " " << age << endl;
    }
};
int students :: totalStudents = 0; //initialize static data members