class Solution {
    public boolean isSubsequence(String s, String t) {
        
        int ct=0;
        
for(int j=0;j<t.length();j++)
{
if(ct<s.length() && s.charAt(ct)==t.charAt(j))
{
    ct++;
    
   
}
}
        if(ct==s.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
    