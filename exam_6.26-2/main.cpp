#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct student{
    int number;
    string name;
    string sex;
    int age;
};
struct people{
    string referee;
    string people;
    int achievement[5];
};
int main() {
    student t[10];
    student st;
    string s;
    people k[10][10];

    people pe;
    int i,j;
    ofstream inf("/Users/s20181106278/Desktop/inf.txt");
    ifstream onf("/Users/s20181106278/Desktop/onf.txt");
    ifstream enf("/Users/s20181106278/Desktop/enf.txt");
    if(onf.is_open())
    {
        cout<<"ok";
        for(i=0;i<5;++i)
        {
            onf>>t[i].number>>t[i].name>>t[i].sex>>t[i].age;
        }
        onf.close();
    }
    if(enf.is_open())
    {
        for(i=0;i<1;i++)
        {
            for(j=1;j<7;j++)
            {
                enf>>k[i][j].people;
            }
        }
        for(i=1;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                enf>>k[i][j].referee>>k[i][j].achievement[j+1];
            }
        }
        enf.close();
    }
    if(inf.is_open())
    {
        for(int i=0;i<5;i++)
        {
            inf<<t[i].number<<" "<<t[i].name<<t[i].sex<<t[i].age<<endl;
           
        }
        for(int i=1;i<8;i++)
        {
            for(j=1;j<6;j++)
            {
                inf<<k[i][j].achievement[j]<<endl;
            }
        }
        cout<<"ok";
        inf.close();
    }
    return 0;
}
