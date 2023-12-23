#ifndef HHH_BALL_DCP
#define HHH_BALL_DCP

#include "Nail.h"

class Ball {
public:
    Nail *ActualNail;
    Ball(int id, int timeStamp) {
        Id = id;
        TimeStamp = timeStamp;
        ActualNail = nullptr;
    }
    int GetId() { return Id; }
    int GetTimeStamp() { return TimeStamp; }
    void GoToNail(Nail *newNail) {
        ActualNail = newNail;
    }

private:
    int Id;
    int TimeStamp;
};

#endif
