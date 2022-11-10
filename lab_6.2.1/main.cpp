#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArray(int* arr, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        arr[i] = Low + rand() % (High - Low + 1);
}
void PrintArray(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}
void Inverse(int* arr, const int n)
{
    int tmp;
    for (int i = 0; i < n ; i+=2)
    {
         if(i % 2 == 0)
         {
             tmp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = tmp;
         }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 9;
    int a[n];
    int Low = -10;
    int High = 10;
    CreateArray(a, n, Low, High);
    PrintArray(a, n);
    Inverse(a, n);
    PrintArray(a, n);
    return 0;
}
