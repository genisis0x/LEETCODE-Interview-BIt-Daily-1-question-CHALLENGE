class Solution {
    public int[] distributeCandies(int candies, int num_people) {
        int[] ans = new int[num_people];
        int presentCandie = 1, index = 0;
        while(candies != 0) {
            if(candies >= presentCandie) {
                candies -= presentCandie;
                ans[index] += presentCandie;
            }
            else {
                ans[index] += candies;
                candies = 0;
            }
            index = (index + 1)%num_people;
            presentCandie++;
        }
        return ans;
    }
}
