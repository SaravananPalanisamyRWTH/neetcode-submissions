class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
         vector<pair<int, double>> cars;

        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.rbegin(), cars.rend());
        vector<double> fleets;
        for (auto &[pos, time] : cars) {
            fleets.push_back(time);

            if (fleets.size() >= 2 &&
                fleets.back() <= fleets[fleets.size() - 2]) {
                fleets.pop_back();
            }
        }

        return fleets.size();
    }
};
