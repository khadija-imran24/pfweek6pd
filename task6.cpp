#include<iostream>
using namespace std;
float studio(string month, float stay);
float apartment(string month, float stay);
main()
{
    string month;
    float stay;
    cout<<"enter month:";
    cin>>month;
    cout<<"enter your stay:";
    cin>>stay;
    float result1;
    float result2;
    result1=studio(month,stay);
    result2=apartment(month ,stay);
    cout<<"studio:"<<result1<<"$"<<endl<<"apartment:"<<result2<<"$";

}
float studio(string month, float stay)
{
    float result;
    if(month=="october"||month=="may")
{
    if(stay>7)
    {
        result=(50-(50*0.05))*stay;
    }
    else if (stay>14)
    {
        result=(50-(50*0.3));
    }
    else
    {
        result=50*stay;
    }
}
   if(month=="june"||month=="september")
{
    if(stay>14)
    {
        result=(75.20-(75.20*0.2))*stay;
    }
    else
    {
        result=75.20*stay;
    }
}
   if(month=="july"||month=="august")
{
    if(stay>14)
   
    {                                                                           
        result=76*stay;
    }
}
     return result;

}
float apartment(string month, float stay)
{
    float result;
       if(month=="may"||month=="october")
{
    if(stay>14)
    {
        result=(65-(65*0.10))*stay;
    }
    else
    {
        result=65*stay;
    }
}
   if(month=="june"||month=="september")
{
    if(stay>14)
    {
        result=(68.7-(68.7*0.10))*stay;
    }
    else
    {
        result=68.7*stay;
    }
}
       if(month=="july"||month=="august")
{
    if(stay>14)
    {
        result=(77-(77*0.10))*stay;
    }
    else
    {
        result=77*stay;
    }
}
       return result; 

}

