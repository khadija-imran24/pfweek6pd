#include<iostream>
using namespace std;
string zodiac(int date,string month);
 main()
 {
    int date;
    string month;
    string sign;
    cout<<"enter date:";
    cin>>date;
    cout<<"enter month:";
    cin>>month;
    sign=zodiac(date, month);
    cout<<"your sign is:"<<sign;
 }
 string zodiac(int date,string month)
{
    string sign;
     if((month=="march"&&date>=21&&date<=31)||(month=="april"&&date>=1&&date<=19))
    {
        sign="aries";
    }
     if((month=="april"&&date>=20&&date<=30)||(month=="may"&&date>=1&&date<=20))
    {
        sign="taurus";
    }
     if((month=="may"&&date>=21&&date<=31)||(month=="june"&&date>=1&&date<=29))
    {
        sign="gemini";
    }
     if((month=="june"&&date>=21&&date<=30)||(month=="july"&&date>=1&&date<=22))
    {
        sign="cancer";
    }
     if((month=="july"&&date>=23&&date<=31)||(month=="august"&&date>=1&&date<=22))
    {
        sign="leo";
    }
     if((month=="august"&&date>=23&&date<=31)||(month=="september"&&date>=1&&date<=22))
    {
        sign="virgo";
    }
     if((month=="september"&&date>=23&&date<=30)||(month=="october"&&date>=1&&date<=22))
    {
        sign="libra";
    }
     if((month=="october"&&date>=23&&date<=31)||(month=="november"&&date>=1&&date<=21))
    {
        sign="scorpio";
    }
     if((month=="november"&&date>=22&&date<=30)||(month=="december"&&date>=1&&date<=21))
    {
        sign="sagittarius";
    }
     if((month=="december"&&date>=22&&date<=31)||(month=="january"&&date>=1&&date<=19))
    {
        sign="capricorn";
    }
     if((month=="january"&&date>=20&&date<=31)||(month=="february"&&date>=1&&date<=18))
    {
        sign="aquarius";
    }
     if((month=="february"&&date>=19&&date<=28)||(month=="march"&&date>=1&&date<=20))
    {
        sign="pisces";
    }
     return sign;
}
         


     