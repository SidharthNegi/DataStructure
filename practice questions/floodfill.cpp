class Solution {

  void dfs(vector<vector<int>> &image,int sr,int sc,int newColor,int m,int n,int source)
  {
      if(sr<0 || sr>=m || sc<0 || sc>=n)
      {
          return;
      }
      else if(image[sr][sc]!=source)
      {
          return;
      }
      image[sr][sc]=newColor;
              
      dfs(image,sr-1,sc,newColor,m,n,source);
      dfs(image,sr+1,sc,newColor,m,n,source);
      dfs(image,sr,sc-1,newColor,m,n,source);
      dfs(image,sr,sc+1,newColor,m,n,source);
      
  }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
        {
            return image;
        }
        
        int  m=image.size();
        int n=image[0].size();
        int source=image[sr][sc];
        
        dfs(image,sr,sc,newColor,m,n,source);
        return image;
    }
};