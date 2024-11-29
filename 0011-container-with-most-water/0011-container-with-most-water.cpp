class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;  // Store maximum area
        int lp = 0, rp = height.size() - 1;  // Initialize left and right pointers

        while (lp < rp) {
            int width = rp - lp;  // Calculate width
            int ht = min(height[lp], height[rp]);  // Get the height of the container

            int area = width * ht;  // Calculate area
            water = max(water, area);  // Update maximum area

            // Move the pointer of the shorter line
            if (height[lp] < height[rp])
                lp++;  // Increment left pointer
            else 
                rp--;  // Decrement right pointer
        }

        return water;  // Return the maximum area found
    }
};
