#include "pointOnMatrix.h"

class Ball {       // The class
  public:             // Access specifier
    pointOnMatrix pos;        
    pointOnMatrix size;        
    pointOnMatrix speed;        
    pointOnMatrix acc;       
    Ball(pointOnMatrix position, pointOnMatrix sizes, pointOnMatrix speed_, pointOnMatrix acceleration);
    
};
