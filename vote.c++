#include<iostream>
using namespace std;
int main()
{
    int age;
    char name[10];
    cout<<"What is your name? " <<" \n";
    cin>>name;
    cout<<"Hello " << name <<"\n" << "Kindly Enter your age: " << "\n";
    cin>>age;
    if(age>=18)
    {
        cout<< name << " you are eligible to vote.";
    }else if(age>=16)
    {
        cout<< name << " you can vote as a minor.";
    }else
    {
        cout<<"Sorry " << name <<" you are not eligible to vote. ";
    }
    return 0;
}