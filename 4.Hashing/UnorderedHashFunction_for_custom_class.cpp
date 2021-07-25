#include<iostream>
#include<unordered_map>
#include<cstring>

using namespace std;

class Student{
    public:
    string firstname;
    string lastname;
    string rollno;

    Student(string f, string l, string no){
        firstname = f;
        lastname = l;
        rollno = no;
    }

    bool operator==(const Student &s) const{
        return rollno == s.rollno?true:false;
    }

};

class HashFn{
    public:
    size_t operator()(const Student &s) const{
        return s.firstname.length()+s.lastname.length();
    }

};

int main()
{
    unordered_map<Student,int,HashFn> student_map;

    Student s1("Kuldeep","Dwivedi","010");
    Student s2("Kuldeep","Dwivedi","110");
    Student s3("Rahul","Sharma","210");
    Student s4("Akshay","Raghav","310");

    // Add student - marks to hashmap
    student_map[s1] = 100;
    student_map[s2] = 120;
    student_map[s3] = 11;
    student_map[s4] = 45;

    // iterate over all students.
    for(auto s:student_map){
        cout<<s.first.firstname<<" "<<s.first.rollno<<"Marks" <<s.second<<endl;
    }
    return 0;

}