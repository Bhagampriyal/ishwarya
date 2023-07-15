bool isPalindrome(int x){
int org=x;
long int rev=0;
int s,r;
while(x>0)
{
s=x%10;
rev=(rev*10)+s;
x=x/10;
}
if(rev==org)
{
    return true;
}
else
{
    return false;
}
}