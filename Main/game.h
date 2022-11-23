#include "wall.h"
#include "ball.h"

class Game {

  public:
    // Constructor
    Game(int numberOfBall = 1);

    // Getter
    Wall getWall(int wallIndex);
    Ball getBall(int ballIndex);
    int getNumberOfBalls();
    void initializeWalls();
    bool collisionCheck();
    void update_position_balls(int millis);
  private:
    // Ball gameBall;
    Wall gameWalls[124]; // 32 + 32 (top and bottom lines) + 30 + 30 (vertical lines)
    int numberOfBalls; //The number of balls 
    Ball* balls; // A single ball for now
};
