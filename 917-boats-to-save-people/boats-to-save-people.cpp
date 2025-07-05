class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boat = 0;
        int s = 0;
        int e = n - 1;
        sort(people.begin(), people.end());
        while (s <= e) {
            if (people[s] + people[e] <= limit) {
                s++;
                e--;
            } else {
                e--;
            }
            boat++;
        }
        return boat;
    }
};