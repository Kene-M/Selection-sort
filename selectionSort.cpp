#include <iostream>
using namespace std;

const int SIZE = 8;
void selectionSort(double list[])
{
    for (int i = 0; i < SIZE - 1; i++)
    {
      // Find the minimum in the list[i..list.length-1]
      double currentMin = list[i];
      int currentMinIndex = i;

      for (int j = i + 1; j < SIZE; j++)
      {
        if (currentMin > list[j])
        {
          currentMin = list[j];
          currentMinIndex = j;
        }
      }
	        // Swap list[i] with list[currentMinIndex] if necessary;
        if (currentMinIndex != i)
        {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }

	  }
}
int main()
{
    double list []= {-2, 4.5, 5, 1, 2, -3.3, 8.2, -9.4};
    //double list []= {5, 4, 6, 2, 3, 9, 1, 7};
    selectionSort(list);
    for (int i = 0; i < SIZE; i++)
      cout << list[i] << " ";
}
