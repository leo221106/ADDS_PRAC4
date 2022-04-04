#if !defined(EFFICIENTTRUCKLOADS_H)
#define EFFICIENTTRUCKLOADS_H

#include <map>

class EfficientTruckloads {
    private:
        std::map<int, int> memo;
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif // EFFICIENTTRUCKLOADS_H
