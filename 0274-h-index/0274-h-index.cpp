class Solution {
public:
    int hIndex(vector<int>& citations) {
         int papers = citations.size();
         vector<int>bucket(papers+1,0);
         for(int citation:citations){
            bucket[min(citation,papers)]++;
         }
         int cpapers=0;
         for(int hindex=papers;hindex>=0;hindex--){
            cpapers +=bucket[hindex];
            if(cpapers>=hindex){
                return hindex;
            }
         }
         return 0;
    }
};