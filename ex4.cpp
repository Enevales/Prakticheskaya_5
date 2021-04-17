/* В одномерном массиве целых чисел определить два наименьших элемента. 
Они могут быть как равны между  собой (оба являться минимальными), так и различаться.*/ 
 
#include <iostream>
using namespace std;
int main()
{
int arr[10] = {2,5,49,11,31,67,3,1,14,10};
int min = 99;
for (int i = 0; i < 10 - 1; i++)
{
  for(int n=i+1;n<10;n++)
  {
    if(arr[n]<min)
    {
      min=arr[n];
    }
  if(arr[i]>arr[n])
  {
    swap(arr[i],arr[n]);
  }
  } 
}
  for (int i = 0; i < 10 - 1; i++)
{
  cout<<arr[i]<<endl;
}
 
cout<<"Первое минимальное число - "<<arr[0]<<endl;
cout<<"Второе минимальное число - "<<arr[1];
  return 0;
}
