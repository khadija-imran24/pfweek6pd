#include<iostream>
using namespace std;
float totalCharge(char type,char time, int mins);
 main()
 {
    float charges;
    char type;
    char time;
    int mins;
    cout<<"enter your type(residential or premium)select r/p:";
    cin>>type;
    cout<<"enter call time(N for night and D for day):";
    cin>>time;
    cout<<"enter minutes of service used:";
    cin>>mins;
    charges=totalCharge(type,time,mins);
    cout<<"your charges are:"<<charges;
}
 float totalCharge(char type,char time, int mins)
 { 
    float charges;
    float chargesp=25;
    float chargesn=10;
    if(type=='p'&&time=='D'&&mins<=75)
    {
        charges=chargesp;

    }
      if(type=='p'&&time=='D'&&mins>75)
    {
        mins=mins-75;
        charges=chargesp+0.10*mins;

    }
      if(type=='p'&&time=='N'&&mins<=100)
    {
        charges=chargesp;

    }
      if(type=='p'&&time=='N'&&mins>100)
    {
        mins=mins-100;
        charges=chargesp+0.05*mins;

    }
    
      if(type=='r'&&(time=='D'||time=='N')&&mins>50)
    {
        mins=mins-50;
        charges=chargesp+0.20*mins;

    }
    return charges;
 }
    
     