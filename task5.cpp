#include<iostream>
using namespace std;
float totalPrice(int quantity,string fruit, string day);
 main()
 {
    int quantity;
    string fruit;
    string day;
    float price;
    cout<<"enter day:";
    cin>>day; 
    cout<<"enter fruit:";
    cin>>fruit;
    cout<<"enter quantity:";
    cin>>quantity;
    if((day!="monday"||day!="tuesday"||day!="wednesday"||day!="thursday"||day!="friday"||day!="saturday"||day!="sunday")||(fruit!="apple"||fruit!="banana"||fruit!="orange"||fruit!="kiwi"||fruit!="pineapple"||fruit!="grapefruit"))
    { 
        cout<<"error";
    }
    
   else
    {
    price=totalPrice(quantity,fruit,day)  ;
    cout<<"total is:"<<price;
    }
    
 }
 float totalPrice(int quantity,string fruit, string day)
 {
    float price;
    if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")
 {
    if(fruit=="banana")
    {
        price=2.50*quantity;
        
    }
    else if(fruit=="apple")
    {
        price=1.20*quantity;
        
    }
     else if(fruit=="orange")
    {
        price=0.85*quantity;
        
    }
     else if(fruit=="grapefruit")
    {
        price=1.45*quantity;
        
    }
     else if(fruit=="pineapple")
    {
        price=5.50*quantity;
        
    }
     else if(fruit=="kiwi")
    {
        price=2.70*quantity;
        
    }
     else if(fruit=="grapes")
    {
        price=3.85*quantity;
        
  
    }
    
 }
    else if(day=="saturday"||day=="sunday")
 {
    if(fruit=="banana")
    {
        price=2.70*quantity;
        
    }
    else if(fruit=="apple")
    {
        price=1.25*quantity;
        
    }
     else if(fruit=="orange")
    {
        price=0.90*quantity;
        
    }
     else if(fruit=="grapefruit")
    {
        price=1.60*quantity;
        
    }
     else if(fruit=="pineapple")
    {
        price=5.60*quantity;
        
    }
     else if(fruit=="kiwi")
    {
        price=3.00*quantity;
        
    }
     else if(fruit=="grapes")
    {
        price=4.20*quantity;
    }
 }
    return price;
 }
 
 