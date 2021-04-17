/*Найти в массиве те элементы, значение которых меньше среднего арифметического, 
взятого от всех элементов массива */
 

#include <iostream>
using namespace std;
 
int main()
{
 int arr[10] = {2,5,49,11,31,67,0,1,14,10};
  float sum=0;
  for(int i = 0; i<10; i++)
 {
     sum += arr[i];
    
 }
 for(int i = 0; i<10; i++)
 { if(arr[i]<sum/10)
   {
     cout<<arr[i]<<" ";
   }
 }
 cout<<sum<<" "<<sum/10;
   return 0;
}

