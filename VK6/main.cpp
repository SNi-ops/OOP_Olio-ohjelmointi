#include <algorithm>
#include <iostream>
#include <student.h>

#include <vector>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    string uusiNimi;
    int uusiIka;
    string etsiNimi;

    do{
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection){

            case 0:
                // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
                // Lisää uusi student StudentList vektoriin.
                cout <<endl << "CASE 0" << endl;

                cout << "Give student name: " << endl;
                cin >> uusiNimi;

                cout << "Give student age: " << endl;
                cin >> uusiIka;

                studentList.emplace_back(uusiNimi, uusiIka);

                cout << "Added name: " << uusiNimi << " and age: " << uusiIka << endl;
                break;
            case 1:
                // Tulosta StudentList vektorin kaikkien opiskelijoiden
                // nimet.
                cout << endl << "CASE 1" << endl;

                for(auto sl = studentList.begin(); sl != studentList.end(); ++sl){
                    cout << sl->getName() <<", "<<sl->getAge() << endl;
                }

                /*TAI:
                for(auto &sl: studentList){
                    cout << sl.getName() <<", "<<sl.getAge() << endl;
                }*/

                break;

            case 2:
                // Järjestä StudentList vektorin Student oliot nimen mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskelijat
                cout << endl << "CASE 2" << endl;

                cout << "Sorting student info by name..." << endl;

                sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                    return a.getName() < b.getName();
                });

                for(auto sl = studentList.begin(); sl != studentList.end(); ++sl){
                    sl->printStudentInfo();
                }


                break;

            case 3:
                // Järjestä StudentList vektorin Student oliot iän mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskelijat
                cout << endl << "CASE 3" << endl;

                cout << "Sorting student info by age..." << endl;

                sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                    return a.getAge() < b.getAge();
                });

                for(auto sl = studentList.begin(); sl != studentList.end(); ++sl){
                    sl->printStudentInfo();
                }

                break;
            case 4:{
                // Kysy käyttäjältä opiskelijan nimi
                // Etsi studentListan opiskelijoista algoritmikirjaston
                // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
                // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
                cout << endl << "CASE 4" << endl;

                cout << "Enter student name to find them: ";
                cin >> etsiNimi;

                auto it = find_if(studentList.begin(), studentList.end(), [etsiNimi](Student &a){
                    return a.getName() == etsiNimi;
                });

                if (it != studentList.end()){
                        it->printStudentInfo();
                    }
                    else{
                        cout << "There is no student named: " << etsiNimi << endl;
                    }

                }
                break;

            default:
                cout<< "Wrong selection, stopping..."<<endl;
                break;
        }

    } while(selection < 5);

return 0;
}
