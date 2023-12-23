#ifndef HHH_NAIL_BINARY_TREE_DCP
#define HHH_NAIL_BINARY_TREE_DCP

#include "../Components/Nail.h"

class NailBinaryTree {
public:
    NailBinaryTree *Left;
    NailBinaryTree *Right;

    NailBinaryTree(Nail *nail) {
        Nail = nail;
        Left = nullptr;
        Right = nullptr;
    }
    Nail *GetNail() { return Nail; }

private:
    Nail *Nail;
};

#endif
