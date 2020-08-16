class Solution {
    public int maxProfit(int[] prices) {
        int firstBuy = Integer.MAX_VALUE,
        secondBuy = Integer.MAX_VALUE,
        firstSell = 0,
        secondSell = 0;
        for(int currPrice : prices) {
            firstBuy = Math.min(firstBuy, currPrice);
            firstSell = Math.max(firstSell, currPrice-firstBuy);
            secondBuy = Math.min(secondBuy, currPrice - firstSell);
            secondSell = Math.max(secondSell, currPrice-secondBuy);
        }
        return secondSell;
    }
}
