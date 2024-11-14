/*
 * Robot.hpp
 *
 *  Created on: Feb 5, 2024
 *      Author: Abdallah Meebed
 */

#ifndef INC_ROBOT_HPP_
#define INC_ROBOT_HPP_

#define _USE_MATH_DEFINES

#include <cmath>

#include "Motor.hpp"
// Singleton class

class Robot{
private:
	float x, y, theta; // Theta between -PI and PI

	static Robot* pRobot; // Static instance

	Robot(){ // Default constructor
	}

public:
	Robot(const Robot &obj) = delete; // Deleting copy constructor

	// Only way to get the instance
	static Robot *getInstance(){
		return pRobot;
	}

	// Add the different methods here
	float getX(){return x;}
	float getY(){return y;}
	float getTheta(){return theta;}

    void setX(float newX);
    void setY(float newY);
    void setTheta(float newTheta);

};

// Init of the singleton statically
Robot *Robot::pRobot = new Robot();


#endif /* INC_ROBOT_HPP_ */
