// Row with max 1s

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int maxCount = 0;
    int rowIndex = -1;

    for(int i=0;i<n;i++){
        int count = 0;

        for(int j=0;j<m;j++){
            if(matrix[i][j] == 1){
                count++;
            }
        }
        if(count > maxCount){
            //maxCount = i; wrong hai ye
            maxCount = count;
            rowIndex = i;
        }
    }
    return rowIndex;
}
