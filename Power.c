void main()
{
int n,k,power=1;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
printf("Enter any number for exponent:");
scanf("%d",&k);
while(k>0)
{
power=power*n;
--k;
}
printf("power of the number %d with exponent=%d",n,power);
getch();
}
