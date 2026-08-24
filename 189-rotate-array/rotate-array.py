class Solution:
    #Defining the reverse function
    def rev(self,nums: list[int],start, end): # [1 2 3 4]
        while (start < end):            
           nums[start], nums[end] = nums[end], nums[start]
           start += 1
           end -= 1

    def rotate(self, nums: list[int], k: int) -> None:
        n = len(nums)
        k = k % n
        self.rev(nums,0,n-1)
        self.rev(nums,0, k-1)
        self.rev(nums,k,n-1)
        # [1 2 3 4 5 6 7] and k = 3
        # -------- -----
        #     y      x  
        #     => reverse entire list => [7 6 5 4 3 2 1]  y = [4 3 2 1 ] x = [ 3 2 1]
        #     => take y and reverse it  [4,3,2,1] -> [1 2 3 4] (k to len(nums))
        #               =>||rly take x and reverse it [7 6 5] -> [5 6 7] (0 to k-1)therefore we get teh required list [5 6 7 1 2 3 4]

        