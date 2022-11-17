
class Wall {
  public:
    // Constructor requiring position
    Wall();

    // Setter
    void setPosition(pointOnMatrix requiredPosition);
    
    // Getter
    // pointOnMatrix getPosition();

  private:
    pointOnMatrix wallPosition;
};
