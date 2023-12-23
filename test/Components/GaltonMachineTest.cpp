#include "../Test.h"
#include "../../src/Components/GaltonMachine.h"
#include <stdio.h>

using namespace std;

bool CreatesCorrectlySimpleGaltonMachine() {
    GaltonMachine *galtonMachine = new GaltonMachine(1);
    return galtonMachine != nullptr;
}

bool SimpleGaltonMachineHasAllNecesaryAtributesCorrectly() {
    GaltonMachine *galtonMachine = new GaltonMachine(1);

    return galtonMachine->GetMachineDepth() == 1;
}

bool CreatesNailBinaryTreeCorrectly() {
    return false;
}

void Test::execute(){
    assert(CreatesCorrectlySimpleGaltonMachine);
    assert(SimpleGaltonMachineHasAllNecesaryAtributesCorrectly);
    // assert(CreatesNailBinaryTreeCorrectly);
    // assert(Executes1LevelTree);
    // assert(Executes5LevelTree);
    // assert(ExecutesAnyLevelTree);
}
