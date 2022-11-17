#include "pointOnMatrix.cpp"

class Wall {
  public:
    // Constructor requiring position
    Wall() {
      wallPosition.lineCoordinate = 0;
      wallPosition.columnCoordinate = 0;
    }

    void setPosition(pointOnMatrix requiredPosition) {
      wallPosition.lineCoordinate = requiredPosition.lineCoordinate;
      wallPosition.columnCoordinate = requiredPosition.columnCoordinate;
    }
    
    /*
    Wall(pointOnMatrix requiredPosition) {
      wallPosition.lineCoordinate = requiredPosition.lineCoordinate;
      wallPosition.columnCoordinate = requiredPosition.columnCoordinate;
    }
    */

    // Accessor
    // pointOnMatrix getPosition();

  private:
    pointOnMatrix wallPosition;
};
