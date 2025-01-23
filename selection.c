#include <stdio.h>

int main() 
{
    int arr[]={5,7,1,2,3,9,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<length-1;i++)
        {
            int min=i;

            for(int j=i+1;j<length;j++)
            {
                if (arr[j]<arr[min])
                {
                    min = j;
                }

              

            }
              if (min != i)
                {
                    int temp = arr[i];
                    arr[i] = arr[min];
                    arr[min]= temp;
                }
        }


    for (int x=0;x<length;x++)

    {
        printf("%d",arr[x]);
    }

}
