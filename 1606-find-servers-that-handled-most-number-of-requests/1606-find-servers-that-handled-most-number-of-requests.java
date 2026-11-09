class Solution {
    public List<Integer> busiestServers(int k, int[] arrival, int[] load) {
        TreeSet<Integer>available = new TreeSet<>();
        for(int i = 0; i<k; i++) {
            available.add(i);
        }
        PriorityQueue<int[]> busy = new PriorityQueue<>(
            (a, b) -> Integer.compare(a[0], b[0])
        );
        int []count = new int[k];

        for (int i = 0; i < arrival.length; i++) {
            int time = arrival[i];
            while (!busy.isEmpty() && busy.peek()[0] <= time) {
                int[] completed = busy.poll();
                available.add(completed[1]);
            }
            if (available.isEmpty()) {
                continue;
            }
            int target = i % k;
            Integer server = available.ceiling(target);

            if(server == null) {
                server = available.first();
            }
            available.remove(server);
            busy.offer(new int []{time+ load[i], server});
            count[server]++;
        }
        int maxCountReq = 0;
        for(int c : count) {
            maxCountReq = Math.max(maxCountReq, c);
        }
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = 0 ; i<count.length; i++) {
            if(maxCountReq == count[i]) {
                result.add(i);
            }
        }
        return result;

    }
}