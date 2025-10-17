
#include <iostream>
using namespace std;

struct point{
    float x;
    float y;

};
int main() {
   struct point arr[7];
   int a;
   cout<<"enter x and y coordinates";
   for(int i=0; i<7 ; i++){
      
       cout<<"\npoint"<<i+1<<" : "<<endl<< "x - ";
       cin>>arr[i].x;
       cout<<"\npoint"<<i+1<<" : "<<endl<< "y - ";
       cin>>arr[i].y;
   }
   
  for(int x=0 ; x<7 ; x++){
       
       if(arr[x].x >0  && arr[x].y>0 )
       {
           a++;
           
       }

  }
 
   cout <<"Number of points in the first quadrant: "<<a<<endl;
   return 0; }
