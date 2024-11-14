/*
 * Robot.c
 *
 *  Created on: Feb 5, 2024
 *      Author: Abdallah Meebed
 */

#include "Robot.hpp"

void Robot::setX(float newX){
    x = newX;
}
void Robot::setY(float newY){
    y = newY;
}

void Robot::setTheta(float newTheta){
    while (newTheta <= -M_PI){
        newTheta += 2*M_PI;
    }

    while (newTheta > M_PI){
        newTheta -= 2*M_PI;
    }

    theta = newTheta;

}


