import java.util.*;
class Solution {
    public List<String> removeAnagrams(String[] words) {
        ArrayList<String> ans=new ArrayList<>();
        for(int i=0;i<words.length;i++){
            if(i==0){
                ans.add(words[i]);
            }
            else{
                String pre=words[i-1];
                String cur=words[i];
                char[] ch1=pre.toCharArray();
                char[] ch2=cur.toCharArray();
                Arrays.sort(ch1);
                Arrays.sort(ch2);
                String a=new String(ch1);
                String b=new String(ch2);
                System.out.println(a);
                System.out.println(b);
                if (!a.equals(b)) {
                 ans.add(cur);
                 }
            }

        }
        return ans;
    }
}