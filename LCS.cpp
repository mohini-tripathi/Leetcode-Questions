class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        return lcs(text1,text2,m,n);
    }
    int lcs(string t1, string t2, int m, int n) {
         int M[m+1][n+1];
        for(int i=0;i<=m;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0||j==0) {
                    M[i][j] = 0;
                }
                else if (t1[i] == t2[j]) {
                    M[i][j] = M[i-1][j-1]+1;
                }
                else {
                    M[i][j] = max(M[i-1][j],M[i][j-1]);
                }
            }
        }
        return M[m][n];
    }
};