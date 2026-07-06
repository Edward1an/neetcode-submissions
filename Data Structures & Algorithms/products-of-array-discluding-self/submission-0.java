class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] suf = new int[nums.length];
        int[] pre = new int[nums.length];
        suf[0] = nums[0];
        pre[nums.length-1] = nums[nums.length-1];
        for(int i = 1;i<nums.length;i++){
            suf[i]=suf[i-1]*nums[i];
            pre[nums.length-1-i]=pre[nums.length-i]*nums[nums.length-1-i];
        }
        nums[0]=pre[1];
        nums[nums.length-1]=suf[nums.length-2];
        for(int i = 1;i<nums.length-1;i++){
            nums[i]=suf[i-1]*pre[i+1];
        }
        return nums;
    }
}  
