#include "BrazoRobot.h"

	BrazoRobot::BrazoRobot(double x1,double y1, double z1, bool sujetar){
		x = x1;
		y = y1;
		z = z1;
		sujetar = sujetar;
	}
	BrazoRobot::BrazoRobotmover (double new_x, double new_y, double new_z){
		x = new_x;
		y = new_y;
		z = new_z;
	}

double BrazoRobot::getX(){
	return x;
}

double BrazoRobot::get_Y(){
	return y;
}

double BrazoRobot::get_Z(){
	return z;
}

bool BrazoRobot::getSujetar(){
	return sujetar;
}

void coger(){
	sujetar = true;
}

void soltar(){
	sujetar = false;
}

