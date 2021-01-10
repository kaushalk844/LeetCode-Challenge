class Solution {
    private int count =0;
    
    public int countArrangement(int n) {
        if (n<=0)
        {
            return count;
        }
        
        boolean[] visited = new boolean[n+1];
        helper(visited, 1, n);
        return count;
    }
    
    private void helper(boolean[] visited, int val0rIndex, int n)
    {
        if(val0rIndex > n)
        {
            count ++;
            return;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(!visited[i] && (val0rIndex % i==0 || i % val0rIndex ==0))
               {
                   visited[i] = true;
                   helper(visited, val0rIndex +1, n);
                   visited[i] = false;
               }
        }
    }    
    
}
