#include "wall.h"
// #include "ball.cpp"

class Game {

  public:
    // Constructor
    Game();

    // Getter
    Wall getWall(int wallIndex);

    void initializeWalls();
    bool collisionCheck();
    void fillLEDMatrix();
    
  private:
    // Ball gameBall;
    Wall gameWalls[124]; // 32 + 32 (top and bottom lines) + 30 + 30 (vertical lines)
};
