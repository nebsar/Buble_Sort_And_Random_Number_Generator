/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Random_Number_Generator.cpp
 * Author: Eagleye
 * 
 * Created on September 8, 2018, 3:32 PM
 */

#include "Random_Number_Generator.h"
#include <random>

Random_Number_Generator::Random_Number_Generator() {
}

int Random_Number_Generator::generateRandomNumber(int min, int max) {
     // Seed the time
    return (rand() % (max - min + 1) + min);


}


