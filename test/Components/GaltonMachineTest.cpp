#include "../Test.h"
#include "../../src/Components/GaltonMachine.h"
#include <stdio.h>

using namespace std;

/*
 * FUNCTION: equilibratedTree
 * INPUT: Nail Binary Tree
 * OUTPUT: Size of tree if homogeneous or -1 if not
 */
int equilibratedTree(NailBinaryTree *tree){
	if (tree->Left == nullptr && tree->Right == nullptr)
        return 0;
	else if(tree->Left == nullptr || tree->Right == nullptr)
        return -1;

	int al = equilibratedTree(tree->Left);
	int ar = equilibratedTree(tree->Right);

	if (al != ar || al == -1)
        return -1;

	return al + 1;
}

bool CreatesCorrectlySimpleGaltonMachine() {
    GaltonMachine *galtonMachine = new GaltonMachine(1);

    return galtonMachine != nullptr;
}

bool SimpleGaltonMachineHasAllNecesaryAtributesCorrectly() {
    GaltonMachine *galtonMachine = new GaltonMachine(1);

    return galtonMachine->GetMachineDepth() == 1;
}

bool CreatesNailBinaryTreeCorrectly() {
    int machineDepth = 3;
    GaltonMachine *galtonMachine = new GaltonMachine(machineDepth);

    galtonMachine->SetupNails();

    // Check all 'machineDepth' boxes are initialized to 0
    int actualBox = 0;
    while (actualBox <= machineDepth) {
        if (galtonMachine->GetBallsInBox(actualBox) != 0)
            return false;
        actualBox++;
    }

    // Check if tree is equilibrated
    return equilibratedTree(galtonMachine->GetNailTree()) == machineDepth - 1;
}

void Test::execute(){
    assert(CreatesCorrectlySimpleGaltonMachine);
    assert(SimpleGaltonMachineHasAllNecesaryAtributesCorrectly);
    assert(CreatesNailBinaryTreeCorrectly);
    // assert(Executes1LevelTree);
    // assert(Executes5LevelTree);
    // assert(ExecutesAnyLevelTree);
}
