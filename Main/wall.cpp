#include "wall.h"

Wall::Wall() {
  wallPosition.lineCoordinate = 0;
  wallPosition.columnCoordinate = 0;
}

void Wall::setPosition(pointOnMatrix requiredPosition) {
  wallPosition.lineCoordinate = requiredPosition.lineCoordinate;
  wallPosition.columnCoordinate = requiredPosition.columnCoordinate;
}

/*
Wall::Wall(pointOnMatrix requiredPosition) {
  wallPosition.lineCoordinate = requiredPosition.lineCoordinate;
  wallPosition.columnCoordinate = requiredPosition.columnCoordinate;
}
*/
