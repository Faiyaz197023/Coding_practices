

function main(arr,length){

    merge_sort(arr,length);

    for (let i=0;i<arr.length;i++)
    {
        console.log(arr[i]);
    }
}


function merge_sort(arr,length)
{
    merge_sort_recursion(arr,0,length-1);
   
}



function merge_sort_recursion(arr,l,r)
{
    if (l>=r)
    {
        return;
    }
    else {
        
         let m = Math.floor((l + r) / 2)
        merge_sort_recursion(arr,l,m);
        merge_sort_recursion(arr,m+1,r);
        merge_sort_arrays(arr,l,m,r); 
    }
   
}

function merge_sort_arrays(arr,l,m,r)
{
    let left_length = m-l+1;
    let right_length = r-m;

    let temp_left =new Array(left_length);
    let temp_right=new Array(right_length);

    let i;let j;

    for (i=0;i<left_length;i++)
    {
        temp_left[i]=arr[l+i];
    }
    for (j=0;j<right_length;j++)
        {
            temp_right[j]=arr[m+1+j];
        }

    let x =0;let y=0; let k=l;

    while (x<left_length && y < right_length){
        if (temp_left[x]<=temp_right[y])
        {
            arr[k++]=temp_left[x++];
        }
        else
        {
            arr[k++]=temp_right[y++];
        }
    }

    while (x<left_length)
    {
        arr[k++]=temp_left[x++];
    }

    while (y<right_length)
    {
        arr[k++]=temp_right[y++];
    }
};


const arr = [3, 4, 1, 2, 41, 21, 7, 5, 6];
length =arr.length;
main(arr,length);