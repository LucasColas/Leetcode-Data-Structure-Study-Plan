

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int Begin = 0;
    int End = matrixSize-1;
    bool found = false;
    
    while (!found && Begin <= End) {
        int middle = (Begin+End)/2;
        if (matrix[middle][*matrixColSize-1] >= target && matrix[middle][0] <= target) {
            int Begin_L = 0;
            int End_L = *matrixColSize-1;
            bool found_target = false;
            while (!found_target && Begin_L <= End_L) {
                int middle_l = (Begin_L+End_L)/2;
                if (matrix[middle][middle_l] == target) {
                    return true;
                }
                else {
                    if (target > matrix[middle][middle_l]) {
                        Begin_L = middle_l+1;
                    }
                    else {
                        End_L = middle_l-1;
                    }
                    
                }
                
                
            }  
            
            if (!found_target) {
                return false;
            }
        }
        
        else {
            if (target > matrix[middle][0]) {
                Begin = middle+1;
            }
            
            else {
                End = middle-1;
                
            }
        }
        
    }
    
    if (!found) {
        return false;
    }
    
    return false;
}
