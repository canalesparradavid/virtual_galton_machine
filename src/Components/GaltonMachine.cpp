#include "GaltonMachine.h"
#include "StandardNail.h"
#include <stdlib.h>
#include <queue>

using namespace std;

GaltonMachine::GaltonMachine(int depth) {
    Depth = depth;
    Box = calloc(depth, sizeof(int));
}

void createBranches(NailBinaryTree *r, queue<NailBinaryTree*> *q, int maxDepth, int actualDepth) {
    if (actualDepth == maxDepth) return;

    if (!q->empty()) {
        r->Left = q->front();
        q->pop();
    }
    else {
        NailBinaryTree *newLeftNode = new NailBinaryTree(new StandardNail(1));
        r->Left = newLeftNode;
        createBranches(newLeftNode, q, maxDepth, actualDepth + 1);
    }
    NailBinaryTree *newRightNode = new NailBinaryTree(new StandardNail(1));
    r->Right = newRightNode;
    q->push(newRightNode);
    createBranches(newRightNode, q, maxDepth, actualDepth + 1);
}

void GaltonMachine::SetupNails() {
    NailTree = new NailBinaryTree(new StandardNail(1));

    queue<NailBinaryTree*> q;
    createBranches(NailTree, &q, Depth, 1);
}

int GaltonMachine::GetBallsInBox(int boxNumber) {
    if (boxNumber > Depth) return -1;

    return Box[boxNumber];
}
