#include<iostream>
using namespace std;
 string wheather(string temp,string humidity);
 main()
 {
    string result;
    string temp;
    string humidity;
    cout<<"enter temperature:";
    cin>>temp;
    cout<<"enter humidity:";
    cin>>humidity;
    result=wheather(temp,humidity);
    cout<<result;
 }

string wheather(string temp,string humidity)
{
    string result;
   if(temp=="warm"&&humidity=="dry")
   {
    cout<<"play tennis";
   }
   if(temp=="warm"&&humidity=="humid")
   {
    cout<<"swim";
   }
   if(temp=="cold"&&humidity=="dry")
   {
    cout<<"play basketball";
   }
   if(temp=="cold"&&humidity=="humid")
   {
    cout<<"watch tv";
   }
   return result;
}