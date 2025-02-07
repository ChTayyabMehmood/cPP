class Solution {
public:
    int maxi(vector<int> bloomDay) {
        int n = bloomDay.size();
        int Maxi = bloomDay[0];
        for (int i = 1; i < n; i++) {
            if (bloomDay[i] > Maxi) {
                Maxi = bloomDay[i];
            }
        }

        return Maxi;
    }

    int mini(vector<int> bloomDay) {
        int n = bloomDay.size();
        int Mini = bloomDay[0];
        for (int i = 1; i < n; i++) {
            if (bloomDay[i] < Mini) {
                Mini = bloomDay[i];
            }
        }

        return Mini;
    }

    bool possible(vector<int> bloomDay, int day, int m, int k) {

        int days = 0, cnt = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                cnt++;
            } else {
                days = days + (cnt / k);
                cnt = 0;
            }
        }
        days += (cnt / k);
        return days >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        int low = mini(bloomDay), high = maxi(bloomDay);
        if (bloomDay.size() < 1LL * m * k) return -1; 
        int mid;

        while (low <= high) {
            mid = (low + high) / 2;

            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1;

            } else
                low = mid + 1;
        }
        return low;
    }
};