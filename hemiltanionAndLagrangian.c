void main()
    {
        long int n;
        scanf("%lld",&n);
        long int a[n],i,j=0,m=n-1;
        for(i=0;i<n;i++)
        {
         scanf("%ld",&a[i]);   
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>=a[j]){
                    continue;}
                    else{
                    break;
                    }
                }
                if(j==n)
                printf("%ld ",a[i]);
               
                else
                continue;
            } 
        }