int lengthOfLastWord(char * s){
    char space=' ';
    int reach=0;
    int count=0,l=0,i;
l=strlen(s)-1;
for(i=l;i>=0;i--)
{
    if(s[i]==space && reach==0)
    {
    
    }
    else if(s[i]!=space)
    {
        count++;
        reach++;
    }
    else
    {
        break;
    }
}
    return count;
}
