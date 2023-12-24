#ifndef HHH_GALTON_MACHINE_DCP
#define HHH_GALTON_MACHINE_DCP

#include "Ball.h"
#include "../NailBinaryTree/NailBinaryTree.h"

class GaltonMachine {
public:
    GaltonMachine(int depth);
    int GetMachineDepth() { return Depth; }
    void SetupNails();
    NailBinaryTree *GetNailTree() { return NailTree; }
    int GetBallsInBox(int boxNumber);

private:
    int Depth;
    int *Box;
    NailBinaryTree *NailTree;
};

#endif
