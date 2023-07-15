
int strStr(char * haystack, char * needle){
int i;
if(strlen(needle)>strlen(haystack))
{
    return -1;
}
else {
    for(i=0;i<strlen(haystack);i++)
    {
        
        if(!strncmp(haystack+i,needle,strlen(needle)))
        {
            return i;
        }
    }}
    return -1;
}
