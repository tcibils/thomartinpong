void fillLEDMatrix(Game usedGame) {
  for(int i = 0; i < 124; i++) {
    LEDMatrix[usedGame.getWall(i).getLineCoordinate()][usedGame.getWall(i).getColumnCoordinate()] = White;
  }
}
