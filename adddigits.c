int add(int);
void main()
{
    int x,k;
    printf("Enter any number");
    scanf("%d",&x);
    k=add(x);
    printf("Sum of digits is %d",k);
    getch();
}
int add(int a)
{
    int sum;
    if(a>0)
    {
        sum=a%10+add(a/10);
        return(sum);
    }
    else
        return(0);
}
