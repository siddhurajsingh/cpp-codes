#include <iostream>
using namespace std;

class Tier {
public:
    virtual double getDiscount() = 0;
    virtual ~Tier() {}
};

class SilverTier : public Tier {
public:
    double getDiscount() override { return 0.05; }
};

class GoldTier : public Tier {
public:
    double getDiscount() override { return 0.10; }
};

class PlatinumTier : public Tier {
public:
    double getDiscount() override { return 0.15; }
};

int main() {
    GoldTier gt;
    cout << "Gold discount: " << gt.getDiscount() * 100 << "%" << endl;
    return 0;
}
