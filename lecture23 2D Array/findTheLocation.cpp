#include <iostream>
using namespace std;

// main function
int main()
{
   int mat[3][3] = {
    {1, 2, 3}, 
   {11, 12, 13}, 
   {21, 22, 23}};

   // Accessing and printing all the locations of 2D array .
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << "Element at array[" << i
              << "][" << j << "]: " << mat[i][j] << endl;
      }
      cout << endl;
   }

   return 0;
}
