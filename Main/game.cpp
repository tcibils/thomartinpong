
#include "wall.cpp"
#include "ball.cpp"

class Game {

  public:
    // Constructor
    Game() {     
      initializeWalls();
    }

    void initializeWalls() {
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
    
    
    bool collisionCheck() {
      
    }

    void fillLEDMatric() {
      // I guess the game will have to do the filling
    }

  private:
    // Ball gameBall;
    Wall gameWalls[124]; // 32 + 32 (top and bottom lines) + 30 + 30 (vertical lines)
};
