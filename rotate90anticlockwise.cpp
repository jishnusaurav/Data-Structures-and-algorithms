void rotate(vector<vector<int> >& matrix){

int r=matrix.size();
    int c=matrix[0].size();
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c;j++){
            swap(matrix[i][j],matrix[r-1-i][j]);
        }
    }}
