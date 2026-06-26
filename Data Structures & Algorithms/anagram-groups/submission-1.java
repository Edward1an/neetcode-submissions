class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> list = new ArrayList<>();
        main:
        for(int i = 0; i<strs.length;i++){
            int[] arr = new int[26];
            for(char c: strs[i].toCharArray()){
                arr[c-97]++;
            }
            temp:
            for(int j = 0; j< list.size();j++){
                int[] ar = new int[26];
                for(char c: list.get(j).get(0).toCharArray()){
                    ar[c-97]++;
                }
                for(int k = 0;k<26;k++){
                    if(ar[k]!=arr[k]){
                        continue temp;
                    }
                }
                list.get(j).add(strs[i]);
                continue main;
            }
            List<String> l = new ArrayList<>();
            l.add(strs[i]);
            list.add(l);
        }
        return list;
    }
}
