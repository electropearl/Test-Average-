#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    double grade1, grade2, grade3, grade4, grade5, grade6;
    double grade7, grade8, grade9,average;


    string firstName1, firstName2, firstName3;

    inFile.open("gradesData.txt");
    outFile.open("gradesAvg.txt");
    outFile<<fixed<<showpoint;
    outFile<<setprecision(2);

    cout<<"Processing Data..."<< endl;

    inFile>>firstName1;
    outFile<<" "<<firstName1<< endl;
    inFile>>grade1>>grade2>>grade3;
    average = (grade1+grade2+grade3)/3;
    outFile<<" Average test scores: "<<average<< endl;
    outFile<<endl;

    inFile>>firstName2;
    outFile<<" "<<firstName2<< endl;
    inFile>>grade4>>grade5>>grade6;
    average = (grade4+grade5+grade6)/3;
    outFile<<" Average test scores: "<<average<< endl;
    outFile<<endl;

    inFile>>firstName3;
    outFile<<" "<<firstName3<< endl;
    inFile>>grade7>>grade8>>grade9;
    average = (grade7+grade8+grade9)/3;
    outFile<<" Average test scores: "<<average<< endl;
    outFile<<endl;


    inFile.close();
    outFile.close();
    return 0;
}