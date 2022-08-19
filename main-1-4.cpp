
#include<iostream>
using namespace std;
int main(){
    void copy_doubles(double *old_array,double *new_array,int length);
   double old_array[5]={1.1,2.2,3.3,4.4,5.5};
   double new_array[5];
   
   copy_doubles(old_array,new_array,5);
   
   for(int i=0;i<5;++i)
       std::cout<<new_array[i]<<" ";
   
   std::cout<<std::endl;
   
   return 0;
}
