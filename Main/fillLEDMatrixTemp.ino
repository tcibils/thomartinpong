void fillLEDMatrix(Game usedGame) {
  for(int i = 0; i < 124; i++) {
    LEDMatrix[usedGame.getWall(i).getLineCoordinate()][usedGame.getWall(i).getColumnCoordinate()] = White;
  }
   for(int i=0; i<usedGame.getNumberOfBalls(); i++){
     LEDMatrix[(int)usedGame.getBall(i).getXPos()][(int)usedGame.getBall(i).getYPos()] = Blue;   
  }
}
