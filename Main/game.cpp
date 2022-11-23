#include "game.h"

double abs(double value){
  if(value>0){
    return value;
  }
  else{
    return -value;
  }
}

// Constructor
Game::Game(int numberOfBalls = 1) {
  this->numberOfBalls = numberOfBalls; //Set up the number of balls (default 1)
  this->balls = new Ball[this->numberOfBalls]; //Updates the number of balls
  initializeWalls();
}

void Game::update_position_balls(int millis){
  for(int i=0; i<this->getNumberOfBalls(); i++){
    this->getBall(i).update_pos(millis);
  }
}
int Game::getNumberOfBalls(){
  return this->numberOfBalls;
}

Ball Game::getBall(int ballIndex){
  return balls[ballIndex];
}

// Getter
Wall Game::getWall(int wallIndex) {
  return gameWalls[wallIndex];
}

void Game::initializeWalls() {
  for(int i = 0; i<124; i++) {
      // Building first line of walls
      if(i < 32) {
        gameWalls[i].setLineCoordinate(0);
        gameWalls[i].setColumnCoordinate(i);
      }
      
      // Building first column        
      else if(i >= 32 && i < 62) {
        gameWalls[i].setLineCoordinate(i-31);
        gameWalls[i].setColumnCoordinate(0);
      }

      // Building last column    
      else if(i >= 62 && i < 92) {
        gameWalls[i].setLineCoordinate(i-61);
        gameWalls[i].setColumnCoordinate(31);
      }
      
      // Building last line of walls
      else if( i >= 92 && i < 124) {
        gameWalls[i].setLineCoordinate(31);
        gameWalls[i].setColumnCoordinate(i-92);
      }
   }
}
    
bool Game::collisionCheck() {
  for(int j=0;j<getNumberOfBalls();j++){
    for(int i=0;i<124;i++){
      if(abs(getBall(j).getXPos()-getWall(i).getColumnCoordinate())<2 && (getBall(j).getYPos()-getWall(i).getLineCoordinate())<2){
        getBall(i).setXSpeed(0);
        getBall(i).setYspeed(0);
      }
    }
  }
}
