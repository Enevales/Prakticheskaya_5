/*В массиве, содержащем положительные и отрицательные целые числа, 
вычислить сумму четных положительных элементов.*/

#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {};
  int sum; 
  for(int i = 0; i < 10; i++) 
 {
     arr[i] = rand() % 10; 
     if (arr[i]%2==0)
     {
         sum += arr[i];
     }
     cout<<arr[i]<<" ";
     
 }
    cout<<"Сумма чётных чисел - "<<sum;
    return 0;
}
