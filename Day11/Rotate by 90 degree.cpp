void rotate(vector<vector<int> >& mat)
{
    int N = mat.size();
    for(int i=0;i<N;i++)
          reverse(mat[i].begin(),mat[i].end());
    for(int i=0;i<N;i++)
        { for(int j=i;j<N;j++)
            swap(mat[i][j],mat[j][i]);
        }
}
