#include <vector>
#include <algorithm>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        int n = position.size();
        if (n <= 1) return n;

        // Pair each car's position with its time to destination
        std::vector<std::pair<int, double>> cars(n);
        for (int i = 0; i < n; ++i) {
            cars[i] = {position[i], static_cast<double>(target - position[i]) / speed[i]};
        }

        // Sort cars by position in descending order (closest to target first)
        std::sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double currentMaxTime = 0.0;

        for (const auto& car : cars) {
            // If a car takes strictly longer than the lead fleet ahead, 
            // it starts a new slower fleet
            if (car.second > currentMaxTime) {
                fleets++;
                currentMaxTime = car.second;
            }
        }

        return fleets;
    }
};