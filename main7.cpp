#include <iostream>
#include <string>
using namespace std;
class Student {
string name;
string id;
string level;
public:
Student()
{}
Student(string name, string id, string level)
{
this->name = name;
this->id = id;
this->level = level;
}
string getName()
{
return name;
}
string getID()
{
return id;
}
string getLevel()
{
return level;
}void showStudent()
{
cout<<" Student ID: "<<id<<endl;
cout<<" Name: "<<name<<endl;
cout<<" Level: "<<level<<endl;
}
};  
class Teacher
{
 protected:
string T_name;
string specialty;
public:
Teacher()
{}
Teacher(string T_name, string specialty)
{
this->T_name = T_name;
this->specialty = specialty;
}
string getName()
{
return T_name;
}
string getSpecialty()
{
return specialty;
}
void showTeacher()
{
cout<<"\n Teacher Name: "<<T_name<<"\n Specialty: "<<specialty;
}
};
class TA :public Student,  public Teacher
{
        string L_Name;
        string L_specialty;
Teacher supervisor;
public:
TA()
{
supervisor = Teacher();
}
TA(Teacher supervisor, string L_Name, string L_specialty)
{
 this->L_Name=L_Name;
 this->L_specialty=L_specialty;
this->supervisor = supervisor;
}
Teacher getSupervisor()
{
return supervisor;
}
void show_TA()
{

cout<<"\n Lab Taecher:"<<endl;
cout<<" Teacher Name:"<< L_Name <<endl;
cout<<" Teacher specialty:"<<L_specialty <<endl;
 
}
};


class CourseClass
{
string courseName;
int maxStud;
int nbStud;
Student *stud;
Teacher courseTeacher;
TA labTA;
public:
CourseClass(string courseName, Teacher courseTeacher, TA labTA)
{
this->courseName = courseName;
maxStud = 3;
stud = new Student[maxStud];
nbStud = 0;
this->courseTeacher = courseTeacher;
this->labTA = labTA;
}
void operator += (Student s)
{
 // Write Your Code Here
 /* overload the operator += (Student):
able to add a Student to the CourseClass. The Student will be added to the Stud array.*/
    if(nbStud < maxStud) {
    *(stud + nbStud) = s;
    nbStud++;}
    else cout<<"error"<<endl;
    
    
    
    
}
void show() {
cout<<"\n\n ************* Course Information ************* ";
cout<<"\n Course Name: "<<courseName;
cout<<"\n Course Teacher: ";
courseTeacher.showTeacher();
labTA.show_TA();
cout<<"\n Names of the Registered Students: \n";
for(int c = 0; c < nbStud; c++)
stud[c].showStudent();
}
};
int main()
{
string name;
string S_Name, S_Id, S_Level;// 3 Students data will be entered by the user
cout<<"Enter Student Name:"<<endl;
cin>>S_Name;
cout<<"Enter ID: "<<endl;
cin>>S_Id;
cout<<"Enter Student Level"<<endl;
cin>>S_Level;
Student s1(S_Name, S_Id , S_Level);
//------------------------------------------
cout<<"Enter Student Name:"<<endl;
cin>>S_Name;
cout<<"Enter ID: "<<endl;
cin>>S_Id;
cout<<"Enter Student Level"<<endl;
cin>>S_Level;
Student s2(S_Name, S_Id , S_Level);
//------------------------------------------
cout<<"Enter Student Name:"<<endl;
cin>>S_Name;
cout<<"Enter ID: "<<endl;
cin>>S_Id;
cout<<"Enter Student Level"<<endl;
cin>>S_Level;
Student s3(S_Name, S_Id , S_Level);
//------------------------------------------
Teacher t("Ali", "Programming Language");
TA ta(t, " Ibraheem", "System Programming");
CourseClass cc("CS182", t, ta);
Teacher t2("Mohammed", "Operating System");
TA ta1(t2 , " Adel ", "Cyber Security");
CourseClass cc2("CS222", t2, ta1);//-------------------------------------------
 // Write Your Code Here ( Call Operator Overloading function)
 
 cc+=s1;
 cc+=s1;
 cc2+=s3;
 cc.show();
cc2.show();
return 0;}