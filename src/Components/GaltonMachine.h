#ifndef HHH_GALTON_MACHINE_DCP
#define HHH_GALTON_MACHINE_DCP

#include "Ball.h"

class GaltonMachine {
public:
    GaltonMachine(int depth) { Depth = depth; }
    int GetMachineDepth() { return Depth; }

private:
    int Depth;
};

#endif
