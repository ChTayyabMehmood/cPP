class Solution {
public:
    int reverse(int x) {
        int Resvere = 0;

        if (x == 0)
            return 0;

        while (x != 0) {
            int Lastdigit = x % 10;
            if ((Resvere > INT_MAX / 10) || (Resvere < INT_MIN / 10)) {
                return 0;
            }

            Resvere = (Resvere * 10) + Lastdigit;

            x = x / 10;
        }

        return Resvere;
    }
};