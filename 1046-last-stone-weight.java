class Solution {
    public int lastStoneWeight(int[] stones) {

        PriorityQueue<Integer> maxH =
            new PriorityQueue<>(Collections.reverseOrder());

        for (int i = 0; i < stones.length; i++) {
            maxH.offer(stones[i]);
        }


        while (maxH.size() >= 2) {

            int first = maxH.poll();
            int second = maxH.poll();

            if (first > second) {
                maxH.offer(first - second);
            }
        }


        if (maxH.isEmpty()) {
            return 0;
        }

        return maxH.peek();
    }
}
