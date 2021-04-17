/*Найти сумму всех цифр целочисленного массива. */ 

#include <iostream>
using namespace std;
int main()
{
int arr[5] = {2,123,92,0,10};
int sum = 0;
for(int i=0;i<5;i++)
{
 while(arr[i]/10!=0)
 {
   sum+=arr[i]%10;
   arr[i]=arr[i]/10;
 }
 if(arr[i]/10==0 && arr[i]%10!=0)
 {
   sum+=arr[i];
 }
}
cout<<sum;
return 0;
}
