#include "../Test.h"
#include "../../src/Components/Nail.h"
#include "../../src/Components/StandardNail.h"
#include <stdio.h>

using namespace std;

bool CreatesCorrectly() {
    Nail *nail = new StandardNail(1);

    return nail != nullptr;
}

bool HasAllNecesaryAtributesCorrectly() {
    Nail *nail = new StandardNail(1);

    return nail->GetId() == 1
        && nail->GetLeftProbability() >= 0
        && nail->GetRigthProbability() >= 0
        && nail->GetLeftProbability() + nail->GetRigthProbability() == 1;
}

void Test::execute(){
    assert(CreatesCorrectly);
    assert(HasAllNecesaryAtributesCorrectly);
}
