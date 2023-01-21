#include<iostream>
using namespace std;
string point(int height, int x, int y);
main()
{
int height,x,y;
cout<<"Enter height:";
cin>>height;
cout<<"Enter value of X:";
cin>>x;
cout<<"Enter value of Y:";
cin>>y;
string result=point (height,x,y);
cout<<result;
}
string point (int height, int x, int y)
{
string result;
if(x<0 && y<0 && height<0)
{
return "Outside";
}
else if(y==0)
{
return "Border";
}
else if(y<=height)
{
if(x<=3*height)
{
if(y==height)
{
result="Border";
}
else
{
result="Inside";
}
}
else
{
result= "Outside";
}
}
else if (y<=4*height && y>height)
{
if(x>=height && x<=2*height)
{
if(x==height || x==2*height || y==4*height)
{
result ="Border";
}
else
{
result="Inside";
}
}
else
{
result="Outside";
}
}
else
{
result="Outside";
}
return result;
}