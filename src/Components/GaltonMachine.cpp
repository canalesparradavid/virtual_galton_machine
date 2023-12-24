#include "GaltonMachine.h"
#include <stdlib.h>

GaltonMachine::GaltonMachine(int depth) {
    Depth = depth;
    Box = calloc(depth, sizeof(int));
}

void GaltonMachine::SetupNails() {
    // TODO: esto es provisional
    NailBinaryTree *n1 = new NailBinaryTree(nullptr);
    NailBinaryTree *n2 = new NailBinaryTree(nullptr);
    NailBinaryTree *n3 = new NailBinaryTree(nullptr);
    NailBinaryTree *n4 = new NailBinaryTree(nullptr);
    NailBinaryTree *n5 = new NailBinaryTree(nullptr);
    NailBinaryTree *n6 = new NailBinaryTree(nullptr);

    n1->Left = n2;
    n1->Right = n3;

    n2->Left = n4;
    n2->Right = n5;

    n3->Left = n5;
    n3->Right = n6;

    NailTree = n1;
}

int GaltonMachine::GetBallsInBox(int boxNumber) {
    if (boxNumber > Depth) return -1;

    return Box[boxNumber];
}
