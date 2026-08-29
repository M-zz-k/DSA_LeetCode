class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int area = 0;
        while (start < end){
            int width = end - start;
            int length = min(height[start],height[end]);
            area = max(area, width*length);
            
            if (height[start] < height[end]){
                start++;
            }else{
                end--;
            }
        }return area;
    }
};