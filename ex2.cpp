/*В массиве найти максимальный элемент с четным индексом*/
 
#include <iostream>
using namespace std;
 
int main()
{
 int i=0;
 int arr[10] = {2,5,94,35,67,12,0,1,8,10};
 int max=0;
  for(; i<=10; i++)
 {
     if(i%2==0 && arr[i]>max)
     {
         max = arr[i];
     }
 }
 
 cout<<max;
   return 0;
}

