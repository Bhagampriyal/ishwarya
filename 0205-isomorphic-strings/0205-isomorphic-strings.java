class Solution {
    public boolean isIsomorphic(String s, String t) {
       
        int stot[]=new int[256];
        int ttos[]=new int[256];
        if(s.length()!=t.length())
        {
            return false;
        }
        
        for(int i=0;i<s.length();i++)
        {
            char spoint=s.charAt(i);
             char tpoint=t.charAt(i);
            if(stot[spoint]!=0 && stot[spoint]!=tpoint || ttos[tpoint]!=0 && ttos[tpoint]!=spoint)
            {
                return false;
            }
            stot[spoint]=tpoint;
            ttos[tpoint]=spoint;
        }
      return true;
    }
}