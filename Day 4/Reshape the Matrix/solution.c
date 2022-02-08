

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int cols = *matColSize;
    if (r*c != matSize*cols) {
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        
        return mat;
    }
    
    *returnSize = r;
    *returnColumnSizes = malloc(r * sizeof(int));
    
    int** array = malloc(r*sizeof(int*)); //array of pointers
    
    for(int i = 0; i < r; i++)
        {
            array[i] = (int*)malloc(c * sizeof(int));
            (*returnColumnSizes)[i] = c;
        }



    int n=0;
    int m=0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<cols;j++) {
            if(m>=c){
                m=0;
                n++;   
            }
                
            array[n][m]=mat[i][j];
            m++;
  
        }
    }
    return array;

}
