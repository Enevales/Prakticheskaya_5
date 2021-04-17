/*Найти номер минимального по модулю элемента массива.*/

#include <iostream>
using namespace std;
int main()
{
int arr[10] = {2,13,9,-11,3,-7,3,-1,15,10};
int min=2147483647;
 
for(int i=0; i<10; i++)
{
 if(arr[i]<0)
 {
   arr[i]=arr[i]*(-1);
 }
}
for(int i=0; i<10; i++)
{
  if(arr[i]<min)
  {
    min = arr[i];
  }
}
cout<<"Минимальное число - "<<min;
return 0;
}

