class Solution {
public:
    
    bool issafe(vector<vector<char>>& board,int i,int j,char n)
    {
        for(int k=0;k<9;k++)
        {
            if(board[k][j]==n || board[i][k]==n)
                return false;
        }
        int s=sqrt(9);
        int rs=i-i%s;
        int cs=j-j%s;
        for(i=0;i<s;i++)
        {
            for(j=0;j<s;j++)
                if(board[i+rs][j+cs]==n)
                    return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        int i, j;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char n='1';n<='9';n++)
                    {
                        if(issafe(board,i,j,n))
                        {
                            board[i][j]=n;
                            if(solve(board))
                                return true;
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }
    void solveSudoku(vector<vector<char>>& board) 
    {
        solve(board);
        return;
    }
};