#include <stdio.h>


int main(){
    float year_and_rainfall[5][12]={{9.9, 5.5, 10.0, 10.0, 9.9, 9.9, 7.7, 1.1, 10.0, 6.6, 8.8, 3.3},{3.3, 3.3, 1.1, 8.8, 9.9, 6.6, 4.4, 2.2, 2.2, 7.7, 8.8, 9.9}
    ,{7.7, 5.5, 2.2, 6.6, 7.7, 10.0, 10.0, 2.2, 1.1, 1.1, 9.9, 10.0},{4.4, 7.7, 1.1, 10.0, 4.4, 2.2, 4.4, 7.7, 2.2, 2.2, 2.2, 9.9},{3.3, 3.3, 9.9, 5.5, 3.3, 10.0, 2.2, 7.7, 3.3, 4.4, 1.1, 2.2}};

    float yearly_average[]={2010,2011,2012,2013,2014};
    float average , sum =0;

for (int i=0 ;i<5;i++)
{
    for (int j=0;j<12;j++)
    {   
        sum+=year_and_rainfall[i][j];
        
        printf("%.2f\n",sum);
       


       // printf("%0.2f,",year_and_rainfall[i][j]);
    }
    average=sum/12;
    printf("Average is %.2f\n",average);

};





}