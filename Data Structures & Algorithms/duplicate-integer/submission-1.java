class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> map = new HashSet<>();
        for(int n : nums){
            if(!map.add(n)){
                return true;
            }
        }
        return false;
    }
}