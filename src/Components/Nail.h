#ifndef HHH_NAIL_DCP
#define HHH_NAIL_DCP

class Nail {
public:
    Nail(int id) { Id = id; }

    int GetId() { return Id; }

    virtual double GetLeftProbability() = 0;
    virtual double GetRigthProbability() = 0;

private:
    int Id;
};

#endif
