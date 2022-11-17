#include "game.h"

Game::Game() {     
  initializeWalls();
}

Game::initializeWalls() {
  for(int i = 0; i<124; i++) {
      // Building first line of walls
      if(i < 32) {
        gameWalls[i].setPosition({0,i});
      }
      
      // Building first column        
      else if(i >= 32 && i < 62) {
        gameWalls[i].setPosition({i-31,1});
      }

      // Building last column    
      else if(i >= 62 && i < 92) {
        gameWalls[i].setPosition({i-61,31});
      }
      
      // Building last line of walls
      else if( i >= 92 && i < 124) {
        gameWalls[i].setPosition({31,i});
      }
   }
}
    
Game::collisionCheck() {
  
}

Game::fillLEDMatrix() {
  // I guess the game will have to do the filling
}
