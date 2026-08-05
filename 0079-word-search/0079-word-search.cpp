class Solution {
public:
    void check_word(vector<vector<char>> &board, string word,int &f,int i,int j,int k){
        if(k==word.size() ){f=1;return;}
        char temp=board[i][j];
        board[i][j]='*';
        if(i+1<board.size() && word[k]==board[i+1][j] && board[i+1][j]!='*'){check_word(board,word,f,i+1,j,k+1);}
        // ans.pop_back();
        if(i-1>=0 && word[k]==board[i-1][j] && board[i-1][j]!='*'){check_word(board,word,f,i-1,j,k+1);}
        // ans.pop_back();ans.pop_back();
        if(j+1<board[0].size() && word[k]==board[i][j+1] && board[i][j+1]!='*'){check_word(board,word,f,i,j+1,k+1);}
        // ans.pop_back();
        if(j-1>=0 && word[k]==board[i][j-1] && board[i][j-1]!='*'){check_word(board,word,f,i,j-1,k+1);}
    board[i][j]=temp;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int f=0;int k=1;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){check_word(board,word,f,i,j,k);}
            }
        }
        if(f==1){return true;}
        else {return false;}
    }
};