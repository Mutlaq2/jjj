#include <bits/stdc++.h>
using namespace std;
valarray<int> varr ;

void firstfunction()
{
    varr = { 20, 40, 60, 80 };
    cout<<" The contents of Array :" ;
    for( int i=0;i<4;i++)
     cout<<varr[i]<<"  ";
    cout << endl;
    
}
void secondfunction( int a)
{
   int Newarray[4];
    for( int i=0;i<4;i++)
     Newarray[i]=varr[i];  
     
    varr.resize(a);
    for( int i=0;i<4;i++)
     varr[i]= Newarray[i]; 
       
     
}
 
int main()
{
 
    firstfunction();
    
    secondfunction( 12);
    cout << "\nafter resizes are : ";
    for( int i=0;i<12;i++)
     cout<<varr[i]<<"  ";
    
    
            

 
    return 0;
}