// // Author: Trishla Khandelwal
// // Date: 01/31/2022
// // Revision History: version 2 used for P2
// // Platform : C++ using Visual Studio Code

// #include <stdlib.h>
// #include <iostream>
// #include "duelingJP.h"
// using namespace std;

// // Function prototype
// void generateArray(int *list, int size);

// int main()
// {
//     int x = 10;
//     int y = 1;
//     int z = 2;
//     int newArrSize = rand() % x + y;
//     int *newArr = new int[newArrSize];
//     int newArrSize2 = rand() % x + z;
//     int *newArr2 = new int[newArrSize2];
//     cout << "***** Creating duelingJP2 objects *****" << endl;
//     cout << "Array 1: ";
//     generateArray(newArr, newArrSize);
//     cout << endl;
//     cout << "Array 2: ";
//     generateArray(newArr2, newArrSize2);
//     cout << endl;

//     duelingJP test = duelingJP(newArr, newArrSize);           // first array
//     duelingJP test2 = duelingJP(newArr2, newArrSize2);        // second array
//     cout << "Number of collisions in Array 1: " << test.getCollisions() << endl;  // invoking getCollisions for Array 1
//     cout << "Number of inversions in Array 1: " << test.getInversions() << endl;  // invoking getInversions for Array 1
//     cout << "Number of collisions in Array 2: " << test2.getCollisions() << endl; // invoking getCollisions for Array 2
//     cout << "Number of inversions in Array 2: " << test2.getInversions() << endl; // invoking getInversions for Array 2

//     delete[] newArr;  // invoking destructor
//     delete[] newArr2; // invoking destructor
//     return 0;
// }

// //method to generate an array of random numbers
// void generateArray(int *list, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         list[i] = rand() % 200 + 2000; // using rand() for checking more collisions/inversions in a closer range
//         cout << " " << list[i] << " ";
//     }
// }