#include<iostream>
using namespace std;
int main()
{
void multiples_of_seven(int *nums,int length);
srand (time(NULL));
int arr[50];
int length=50;
for(int i=0;i<50;i++)
{
arr[i]=rand()%2000;
cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Muliple of sevens are --"<<endl;
multiples_of_seven(arr,length);

return 0;
}
