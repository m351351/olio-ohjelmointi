#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    //luodaan alussa opiskelija

    Student a ("aaa", 30);
    Student b ("bee", 29);
    Student c ("cee", 28);
    Student d ("dee", 27);


    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);






    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
            /*   case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            student *s = new student
                studentlist->lisää(student)
            break;*/

        case 1:

            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"opiskelijoiden nimet: ";
            for(Student s: studentList){
                cout<<s.getName() << " ";
            }

            cout<<endl;

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"opiskelijat nimen mukaan jarjestettyna: "<<endl;
            sort(studentList.begin(), studentList.end(),[](const Student& eka, const Student& toka)
                 {
                     return eka.getName() < toka.getName();
                 }

                 );

            for(Student s: studentList){
                s.printStudentInfo();
            }

            break;


        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"opiskelijat ian mukaan jarjestettyna: "<<endl;
            sort(studentList.begin(), studentList.end(),[](const Student& eka, const Student& toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }

                 );

            for(Student s: studentList){
                s.printStudentInfo();
            }



            break;


        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.


            string searchName;
            cout<<"nimi???: "<<endl;
            cin>> searchName;

            auto it = find_if(studentList.begin(), studentList.end(), [searchName](Student& s)
                              {
                                  return s.getName() == searchName;
                              });

            if (it != studentList.end()){
                cout << "student found"<<endl;
                it->printStudentInfo();
            }

            else
                cout<<"student not found";

            break;

        }

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

//käy vektorin oliot läpi
//delete

return 0;
}
