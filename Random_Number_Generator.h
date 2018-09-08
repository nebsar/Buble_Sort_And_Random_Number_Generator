/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Random_Number_Generator.h
 * Author: Eagleye
 *
 * Created on September 8, 2018, 3:32 PM
 */

#ifndef RANDOM_NUMBER_GENERATOR_H
#define RANDOM_NUMBER_GENERATOR_H

class Random_Number_Generator {
public:
    Random_Number_Generator();


    /**
     * @brief Generates Random Number between including min and max values  
     * @param min - minimum number to be generated
     * @param max - maximum number to be generated 
     * @return integer random number 
     */
    static int generateRandomNumber(int min, int max);


};

#endif /* RANDOM_NUMBER_GENERATOR_H */

