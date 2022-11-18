#include "game.h"
#include "ball.h"

// Constructor
Game::Game() {     
  initializeWalls();
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
        gameWalls[i].setColumnCoordinate(1);
      }

      // Building last column    
      else if(i >= 62 && i < 92) {
        gameWalls[i].setLineCoordinate(i-61);
        gameWalls[i].setColumnCoordinate(31);
      }
      
      // Building last line of walls
      else if( i >= 92 && i < 124) {
        gameWalls[i].setLineCoordinate(31);
        gameWalls[i].setColumnCoordinate(i);
      }
   }
}
    
bool Game::collisionCheck() {
  
}

// I guess the game will have to do the filling
void Game::fillLEDMatrix() {
  for(int i = 0; i < 124; i++) {
    // LEDMatrix[gameWalls[i].getLineCoordinate()][gameWalls[i].getColumnCoordinate()] = White;
  }
}
