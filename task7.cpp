#include <iostream>
using namespace std;

int time(int shours,int smins,int ahour,int amin);
main()
{
  int shours;
  int smins;
  int ahour;
  int amin;
  int result;
  
  cout<<"Enter exam starting hours: ";
  cin>>shours;
  cout<<"Enter exam starting minutes: ";
  cin>>smins;
  cout<<"Enter student arrival time in hours: ";
  cin>>ahour;
  cout<<"Enter student arrival time in minutes: ";
  cin>>amin;
  result=time(shours,smins,ahour,amin);
  cout<<result;
  

}

int time(int shours,int smins,int ahour,int amin)
{
  int before;
  int beforeh;
  int hrsstart;
  int hourstu;
  int a;
  int b;
  int c;
  int d;
  int totalhour;
  int totalmin;
  int diff;
  hourstu=ahour*60;
  hrsstart=shours*60;
  a=hourstu+amin;
  b=hrsstart+smins;
  diff=a-b;
  c=diff/60;
  d=diff%60;
  totalhour=c-d;
  totalmin=amin-smins;

  if(diff>60 ||diff<60||diff==60)
  {

   if(a>b)
   {
    
    cout<<"late";
    cout<<c;
    cout<<":";
    cout<<d;

   }
   else if(diff>=-30)
   {
    
    cout<<"On time";
    cout<<endl;
    cout<<-1*c;
    cout<<":";
    cout<<-1*d;
   }
    else if(diff<-30)
   {
    
    cout<<"Early";
    cout<<endl;
    cout<<-1*c;
    cout<<":";
    cout<<-1*d;
   }
 }

 //else if(shours==ahour)
 //{
 //   if(amin>smins)
 //   {
 //   time=amin-smins;
 //     cout<<"Late";
 //     cout<<shours;
 //      cout<<":";
 //     cout<<time;
//   }
 //   if(amin<smins)
 //   {
 //     time=amin-smins;
 //     cout<<"early";
 //     cout<<shours;
 //    cout<<":";
 //     cout<<time;
 //    }
 //}
  return 0 ; 

 }
  


