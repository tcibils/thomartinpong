
class Ball {       
  public:                  
    Ball(double position_x=125, double position_y=125,
      int size_x = 1, int size_y = 1,
      int speed_x = 1, int speed_y = 1,
      int acc_x = 0, int acc_y= 1);
  

    void update_pos(int millis);
    double getXPos();
    double getYPos();
    int getXSize();
    int getYSize();
    int getXSpeed();
    int getYspeed();
    int getXAcc();
    int getYAcc();

    void setXPos(double x_value);
    void setYPos (double y_value);
    void setXSize(int x_value);
    void setYSize(int y_value);
    void setXSpeed(int x_value);
    void setYspeed(int y_value);
    void setXAcc(int x_value);
    void setYAcc(int y_value);   
    
  private:
    int pos_x;
    int pos_y;
    int size_x;
    int size_y;
    int speed_x;
    int speed_y;
    int acc_x;
    int acc_y;
};
