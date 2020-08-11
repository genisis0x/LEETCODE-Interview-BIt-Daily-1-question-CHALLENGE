class Solution {
    public int hIndex(int[] citations) {
        Arrays.sort(citations);
        int n=citations.length,s=0,e=n-1,ans=0;
        while(s<=e) {
            int m=(e-s)/2+s;
            int t_no = n-m;
            if (t_no == citations[m]) return t_no;
            else if(t_no < citations[m])
            {
                ans = t_no;
                e = m-1; 
            }
            else
                s = m+1;
        }
        return ans;
    }
}
