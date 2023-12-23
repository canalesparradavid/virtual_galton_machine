#ifndef HHHFAKE_NAIL_DCP
#define HHHFAKE_NAIL_DCP

#include "../../src/Components/Nail.h"

class FakeNail : public Nail {
public:
    FakeNail() : Nail(0) {}
    double GetLeftProbability() { return 0.5; }
    double GetRigthProbability() { return 0.5; }
};

#endif
