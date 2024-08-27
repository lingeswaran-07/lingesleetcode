class Solution {
    public int maxVowels(String s, int k) {
        int n=s.length();
        String vowel="aeiou";
        int maxcnt=0;
        int curcnt=0;
        for(int i=0;i<k;i++){
            if(vowel.indexOf(s.charAt(i))!=-1){
                curcnt++;
            }
        }
        maxcnt=curcnt;
        for(int i=k;i<n;i++){
            if(vowel.indexOf(s.charAt(i-k))!=-1){
                curcnt--;
            }
            if(vowel.indexOf(s.charAt(i))!=-1){
                curcnt++;
            }
            maxcnt=Math.max(curcnt,maxcnt);
        }
    return maxcnt;
    }
}