#include<iostream>
using namespace std;
string grade(int percent);
 main()
 {
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    string name;
    string result;
    int percent;
    float totalMarks;
    cout<<"enter the marks of subject 1(1-100):";
    cin>>marks1;
    cout<<"enter the marks of subject 2(1-100):";
    cin>>marks2;
    cout<<"enter the marks of subject 3(1-100):";
    cin>>marks3;
    cout<<"enter the marks of subject 4(1-100):";
    cin>>marks4;
    cout<<"enter the marks of subject 5(1-100):";
    cin>>marks5;
    cout<<"enter name:";
    cin>>name;
    totalMarks=marks1+marks2+marks3+marks4+marks5;
    cout<<"total marks are"<<totalMarks<<endl;
    percent=(totalMarks/500)*100;
    cout<<"percentage is:"<<percent<<endl;
    result=grade(percent);
    cout<<"grade is:"<<result;
 }
 string grade(int percent)
{
    string grade;
     if(percent<40)
    {
        grade="F";
    }
    else if (percent>=40&&percent<=50)
    {
        grade="D";
    }
     else if (percent>=51&&percent<=60)
    {
        grade="C";
    }
     else if (percent>=61&&percent<=70)
    {
        grade="B";
    }
     else if (percent>=71&&percent<=80)
    {
        grade="B+";
    }
     else if (percent>=81&&percent<=90) 
    {
        grade="A";
    }
    else if (percent>=91&&percent<=100)
    {
        grade="A+";
    }
     return grade;
     
}

     