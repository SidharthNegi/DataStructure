class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> v;
        vector<int> v1;
        int k=n-1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j<k){
                    swap(image[i][j],image[i][k]);
                    k--;
                }
            }
            k=n-1;
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                image[i][j]=1-image[i][j];
                v1.push_back(image[i][j]);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};