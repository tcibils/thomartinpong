#include "ball.h"
#include <Arduino.h>

Ball::Ball(double position_x=10, double position_y=10,
      int size_x = 1, int size_y = 1,
      int speed_x = 3, int speed_y = 3,
      int acc_x = 0, int acc_y= 0){
      this->pos_x = position_x;
      this->pos_y = position_y;
      this->size_x = size_x;
      this->size_y = size_y;
      this->speed_x = speed_x;
      this->speed_y = speed_y;
      this->acc_x = acc_x;
      this->acc_y = acc_y;   
}


void Ball::update_pos(int millis){
      Serial.println(this->pos_x);

      this->pos_x = (this->pos_x + this->pos_y*millis/1000);
      Serial.println(this->pos_x);

      this->setYPos(this->getYPos() + this->getYSpeed()*millis/1000);
}

double Ball::getXPos(){
      return this->pos_x;
}
double Ball::getYPos(){
      return this->pos_y;
}

int Ball::getXSize(){
      return (this->size_x, this->size_y);
}
int Ball::getYSize(){
      return this->size_y;
}
int Ball::getXSpeed(){
      return this->speed_x;
}
int Ball::getYSpeed(){
      return this->speed_y;
}
int Ball::getXAcc(){
      return this->acc_x;
}
int Ball::getYAcc(){
      return this->acc_y;
}

void Ball::setXPos(double x_value){
      this->pos_x = x_value;

}
void Ball::setYPos (double y_value){
      this->pos_y = y_value;
}
void Ball::setXSize(int x_value){
      this->size_x = x_value;
}

void Ball::setYSize(int y_value){
      this->size_y = y_value;
}
void Ball::setXSpeed(int x_value){
      this->size_x = x_value;
}

void Ball::setYspeed(int y_value){
      this->speed_y = y_value;
}
void Ball::setXAcc(int x_value){
      this->size_x = x_value;
}

void Ball::setYAcc(int y_value){
      this->acc_y = y_value;
}  
