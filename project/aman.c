#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double num,average,geometricmean,harmonicmean;
    double sum=0.0;
    double product=1.0;
    double harmonicsum=0.0;
    printf("enter the no of elements\n");
    scanf("%d",&n);
  
    if (n<=0)
    {
        printf("invalid input , the no. of elements is greater than 0\n");
       
    }
    
    for(int i=0; i<n; i++)
    {
        scanf("%lf",&num);
        sum+=num;
        product*=num;
        harmonicsum+=1/num;
    }
    average=sum/n;
    geometricmean=pow(product,1/n);
    harmonicmean=n/harmonicsum;
    printf("average : %.2lf\n",average);
    printf("geometricmean: %.2lf\n",geometricmean);
    printf("harmonic mean: %.2lf",harmonicmean);
    


}

