class Solution {
    public void func(int[][] isConnected, int n, int node, int vis[]) {
        if(vis[node] != 1) {
            vis[node] = 1;
            for (int ele = 0; ele < n; ele++) {
                if(node != ele && isConnected[node][ele] == 1) {
                    func(isConnected, n, ele, vis);
                }
            }
        }
    }
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;

        int vis[] = new int[n]; // 0 based
        int prov = 0;
        int node = 0;
        while(node < n) {
            if(vis[node] != 1) {
                prov++;
                func(isConnected, n, node, vis);
            }
            node++;
        }

        return prov;
    }
}