#ifndef HHH_STANDARD_NAIL_DCP
#define HHH_STANDARD_NAIL_DCP

#include "Nail.h"

class StandardNail : public Nail {
public:
    using Nail::Nail;
    double GetLeftProbability() {
        return 0.5;
    }

    double GetRigthProbability() {
        return 0.5;
    }
};

#endif
