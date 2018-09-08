/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 8, 2018, 11:49 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Random_Number_Generator.h"

using namespace std;

/*
 * 
 */

#define ARRAYLEN(array) (sizeof(array)/sizeof(int))

int main(int argc, char** argv) {

      srand(time(NULL));
    
    for (int i = 0; i < 100; i++) {
        cout << "random - " << i << " - " << Random_Number_Generator::generateRandomNumber(10, 50) << endl;
    }

    int array[100] = {};

  

    for (unsigned short int i = 0; i < 100; i++) {
        *(array + i) = (rand() % 101);
    }

    //int array[10] = {9, 5, 7, 3, 6, 1, 8, 2, 4, 0};

    //int array2[]{9, 5, 7, 3, 6, 1, 8, 2, 4, 0}; // also can be declared like this


    int temp2 = 0;

    for (unsigned short i = 0; i < ARRAYLEN(array); i++) {
        int temp = array[i];
        unsigned short j = i;
        int indexOfSmallest = j;
        for (; j < ARRAYLEN(array); j++) {
            if (array[j] < temp) {
                temp = array[j];
                indexOfSmallest = j;
            }
        }

        //    cout << "temp = " << temp << endl;
        //    cout << " indexofsmallest : " << indexOfSmallest << endl;
        //    cout << " i : " << indexOfSmallest << endl;

        //   cout << " i: " << i << " j: " << j << " indexofsmallest : " << indexOfSmallest << endl;
        temp2 = array[i];
        array[i] = temp;
        array[indexOfSmallest] = temp2;


    }

    //    for (unsigned short i = 0; i < ARRAYLEN(array); i++) {
    //        for (unsigned short j = 0; j < ARRAYLEN(array) - 1; j++) {
    //            if (array[j] > array[j + 1]) {
    //                int temp = array[j];
    //                array[j] = array[j + 1];
    //                array[j + 1] = temp;
    //
    //            }
    //        }
    //    }

    for (int i = 0; i < ARRAYLEN(array); ++i) {
        cout << i << " - " << array[i] << endl;

    }

    return 0;
}

