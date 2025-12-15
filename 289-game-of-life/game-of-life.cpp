class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        int drow[] = {0, 0, -1, 1, -1, -1, 1, 1};  
        int dcol[] = {1, -1, 0, 0, -1, 1, -1, 1};  
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int liveNeighbors = 0;
                
                for(int k = 0; k < 8; k++){
                    int newRow = i + drow[k];
                    int newCol = j + dcol[k];
                    
                    if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m){
                        if(board[newRow][newCol] == 1 || board[newRow][newCol] == 2){
                            liveNeighbors++;
                        }
                    }
                }
                
                if(board[i][j] == 1){
                    if(liveNeighbors < 2 || liveNeighbors > 3){
                        board[i][j] = 2;
                    }
                } else {
                    if(liveNeighbors == 3){
                        board[i][j] = 3;
                    }
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 2) board[i][j] = 0;
                if(board[i][j] == 3) board[i][j] = 1;
            }
        }
    }
};