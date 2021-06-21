# Prime-Numbers
developed by Sarit Shekhar Roy

int prime(int no,int i)
{
    if(i==1)
    return 1;
    
    else
    {
        if(no%i==0)
        return 0;
        
        else
        {
            return prime(no,i-1);
        }
    }
}

int main()
{
    int no,ch;
    printf("Please enter a no. ");
    scanf("%d",&no);
    ch=prime(no,no/2);
    
    if(ch==1)
    {
        printf("%d is a prime number.",no);
    }
    
    else
    {
        printf("%d is not a prime number.",no);
    }
    
}
