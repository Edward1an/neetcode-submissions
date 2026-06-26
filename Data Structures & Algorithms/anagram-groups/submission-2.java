class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> map = new HashMap<>();
        for(int i = 0;i<strs.length;i++){
            int[] arr = new int[26];
            for(char c: strs[i].toCharArray()){
                arr[c-97]++;
            }
            StringBuilder sb = new StringBuilder();
            for(int j = 0;j<26;j++){
                if(arr[j]>0){
                    sb.append(j+"."+arr[j]+",");
                }
            }
            if(map.containsKey(sb.toString())){
                map.get(sb.toString()).add(strs[i]);
            } else {
                List<String> l = new ArrayList<>();
                l.add(strs[i]);
                map.put(sb.toString(), l);
            }
        }
        return new ArrayList<>(map.values());
    }
}
