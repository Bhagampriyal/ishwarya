int reverse(int x){
int org=x;
long int rev=0;
int s;
while(x!=0)
{
s=x%10;
rev=(rev*10)+s;
x=x/10;
}

if(rev<-pow(2,31) || rev> pow(2,31))
{
    return 0;
}
return rev;
}