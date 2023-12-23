#include "../Test.h"
#include "../../src/NailBinaryTree/NailBinaryTree.h"
#include "../fakes/FakeNail.h"
#include <stdio.h>

using namespace std;

bool CreatesCorrectly() {
    Nail *nail = new FakeNail();
    NailBinaryTree *tree = new NailBinaryTree(nail);

    return tree != nullptr;
}

bool HasAllNecesaryAtributesCorrectly() {
    Nail *nail = new FakeNail();
    NailBinaryTree *tree = new NailBinaryTree(nail);

    return tree->GetNail() == nail
        && tree->Left == nullptr
        && tree->Right == nullptr;
}

bool ChangesNodesCorrectly() {
    NailBinaryTree *tree = new NailBinaryTree(nullptr);
    NailBinaryTree *right = new NailBinaryTree(nullptr);
    NailBinaryTree *left = new NailBinaryTree(nullptr);

    tree->Right = right;
    tree->Left = left;

    return tree->Right == right
        && tree->Left == left;
}

void Test::execute(){
    assert(CreatesCorrectly);
    assert(HasAllNecesaryAtributesCorrectly);
    assert(ChangesNodesCorrectly);
}
