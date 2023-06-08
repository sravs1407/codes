vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> a;
    for(int i=0;i<N;++i)
    {
        vector<int> sub;
        for(int j=0;j<=i;++j)
        {
            if(j==0 || j==i)
            {
                sub.push_back(1);
            }
            else{
                sub.push_back(a[i-1][j-1]+a[i-1][j]);
            }
        }
        a.push_back(sub);
    }
    return a;
}
