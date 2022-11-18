#include "wall.h"

// Constructor
Wall::Wall() {
  lineCoordinate = 0;
  columnCoordinate = 0;
}

// Setters
void Wall::setLineCoordinate(int requiredLineCoordinate) {
  lineCoordinate = requiredLineCoordinate;
}

void Wall::setColumnCoordinate(int requiredColumnCoordinate) {
  columnCoordinate = requiredColumnCoordinate;
}

// Getters
int Wall::getLineCoordinate() {
  return lineCoordinate;
}

int Wall::getColumnCoordinate() {
  return columnCoordinate;
}
