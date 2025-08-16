class Solution {
private:
 void dfs(int node,vector<vector<int>>&isConnectedLs,vector<int>&vis){
   vis[node]=1;
   for(auto& it:isConnectedLs[node]){
    if(!vis[it]){
        dfs(it,isConnectedLs,vis);
    }
   }
 }    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<vector<int>>isConnectedLs(V);
        for(int i =0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1&&i!=j){
                    isConnectedLs[i].push_back(j);
                    isConnectedLs[j].push_back(i);

                }
            }
        }
        vector<int>vis(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnectedLs,vis);
            }
        }
        return cnt;
    }
};