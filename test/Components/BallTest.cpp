#include "../Test.h"
#include "../../src/Components/Ball.h"
#include "../fakes/FakeNail.h"
#include <stdio.h>

using namespace std;

bool CreatesCorrectly() {
    Ball *ball = new Ball(1, 1);

    return ball != nullptr;
}

bool HasAllNecesaryAtributesCorrectly() {
    int id = 1;
    int timeStamp = 1111;
    Ball *ball = new Ball(id, timeStamp);

    return ball->GetId() == id
        && ball->GetTimeStamp() == timeStamp
        && ball->ActualNail == nullptr;
}

bool CanChangeActualBouncingNail() {
    Ball *ball = new Ball(1, 1);
    Nail *tmpNail;

    bool hasChangedCorrectly = true;
    for (int i = 0; i < 5; i++) {
        tmpNail = new FakeNail();
        ball->GoToNail(tmpNail);
        hasChangedCorrectly = hasChangedCorrectly
                            && ball->ActualNail == tmpNail;
    }

    return hasChangedCorrectly;
}

void Test::execute(){
    assert(CreatesCorrectly);
    assert(HasAllNecesaryAtributesCorrectly);
    assert(CanChangeActualBouncingNail);
}
