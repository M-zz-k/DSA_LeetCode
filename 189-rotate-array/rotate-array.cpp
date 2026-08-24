class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 0; count < n; i++){
            int idx = i;
            int current = nums[i];
            
            do {
                // 1. Calculate the target index position
                int next_idx = (idx + k) % n; 
                
                // 2. Save the value that is about to be overwritten
                int next = nums[next_idx]; 
                
                // 3. Overwrite the target position with your current value
                nums[next_idx] = current; 
                
                // 4. Move your values and index forward step-by-step
                current = next; 
                idx = next_idx; 
                
                count++;
            } while (i != idx);
        }
    }
};
