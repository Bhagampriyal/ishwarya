class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        List<Integer> result=new ArrayList<Integer>();
        if(m==0)
        {
            return result;
        }
        int i=0,fr=0,fc=0,lr=m-1,lc=n-1;
        while(fr<=lr && fc<=lc)
        {
        for(i=fc;i<=lc;i++)
        {
            result.add(matrix[fc][i]);
            
        }
            fr++;
        for(i=fr;i<=lr;i++)
        {
            result.add(matrix[i][lc]);
           
        }
             lc--;
        if(fr<=lr)
        {
            for(i=lc;i>=fc;i--)
            {
                result.add(matrix[lr][i]);
                
            }
            lr--;
        }
            
        if(fc<=lc)
        {
            for(i=lr;i>=fr;i--)
            {
                result.add(matrix[i][fc]);
                
            }
             fc++;
        }
           
        }
        return result;
    }
}