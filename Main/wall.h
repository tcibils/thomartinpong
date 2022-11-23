
class Wall {
  public:
    // Constructor requiring position
    Wall();

    // Setter
    void setLineCoordinate(int requiredLineCoordinate);
    void setColumnCoordinate(int requiredColumnCoordinate);
    
    // Getter
    int getLineCoordinate();
    int getColumnCoordinate();

  private:
    int lineCoordinate;
    int columnCoordinate; 
};
