/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
    int ** result = (int **)malloc(n * sizeof(int *));
    *returnSize = n;
    *returnColumnSizes = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        result[i] = (int *)malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }
    int count=1;
    int max=1;
    int min=0;
    int a=0,b=0,c,d,p,q,x,y;
    int row=n-1;
    for(int k=0;k<=(n/2);k++){
        if(k==0){
          a=0;
          b=0;
        }
        else{
            a=x+1;
            b=y+1;
        }
     while(b<=row){
      result[a][b]=count;
       b++;
       count++;
    }
    c = a+1;
    d = row;
    while(c<=row){
        result[c][d]=count;
        count++;
        c++;
    }
    p = row;
    q = d-1;
    while(q>=min){
        result[p][q]=count;
        count++;
        q--;
      }
     x = row-1;
     y = q+1;
     while(x>=max){
         result[x][y]=count;
         count++;
         x--;
     } 
     row = row -1;
     max++;
     min++;
    }
    // if(n%2!=0){
        // result[s/2][s/2]=count-1;
    // }
    return result;
}