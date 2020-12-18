#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    ifstream inFile;

    double grade1, grade2, grade3, grade4, grade5, grade6;
    double grade7, grade8, grade9,average;


    string firstName1, firstName2, firstName3;

    inFile.open("gradesData.txt");

    cout<<fixed<<showpoint;
    cout<<setprecision(2);

    inFile>>firstName1;
    cout<<" "<<firstName1<< endl;
    inFile>>grade1>>grade2>>grade3;
    average = (grade1+grade2+grade3)/3;
    cout<<" Average test scores: "<<average<< endl;
    cout<<endl;

    inFile>>firstName2;
    cout<<" "<<firstName2<< endl;
    inFile>>grade4>>grade5>>grade6;
    average = (grade4+grade5+grade6)/3;
    cout<<" Average test scores: "<<average<< endl;
    cout<<endl;

    inFile>>firstName3;
    cout<<" "<<firstName3<< endl;
    inFile>>grade7>>grade8>>grade9;
    average = (grade7+grade8+grade9)/3;
    cout<<" Average test scores: "<<average<< endl;
    cout<<endl;


    inFile.close();

    return 0;
}