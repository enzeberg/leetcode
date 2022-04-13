class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int result = 0;
        vector<bool> row(11, 0);
        int size = reservedSeats.size();
        sort(reservedSeats.begin(), reservedSeats.end(), cmp);
        int seatIndex = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= 10; ++j) {
                row[j] = true;
            }
            
            while (seatIndex < size && reservedSeats[seatIndex][0] == i) {
                row[reservedSeats[seatIndex][1]] = false;
                switch()
                ++seatIndex;
            }
            /* for (int k = 0; k < size; ++k) {
                vector<int> seat = reservedSeats[k];
                if (seat[0] == i) {
                    row[seat[1]] = false;
                }
                reservedSeats.erase(reservedSeats.begin() + k)
            } */
            if (row[2] && row[3] && row[4] && row[5]) {
                ++result;
                if (row[6] && row[7] && row[8] && row[9]) {
                    ++result;
                }
            } else if (row[4] && row[5] && row[6] && row[7]) {
                ++result;
            } else if (row[6] && row[7] && row[8] && row[9]) {
                ++result;
            }
        }
        return result;
    }
    static bool cmp(vector<int> seat1, vector<int> seat2) {
        return seat1[0] < seat2[0];
    }
};