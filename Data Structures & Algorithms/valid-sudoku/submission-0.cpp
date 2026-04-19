class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> freq;
        char curr;
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                curr = board[i][j];
                if(curr=='.') {continue;}
                if(freq.count(curr)) {return 0;}
                freq.insert(curr);
            }
            freq.clear();
        }
        for(int j=0; j<9; j++) {
            for(int i=0; i<9; i++) {
                curr = board[i][j];
                if(curr=='.') {continue;}
                if(freq.count(curr)) {return 0;}
                freq.insert(curr);
            }
            freq.clear();
        }
        for(int i=0; i<9;) {
            for(int j=0; j<9; ) {
                for(int r=i; r<i+3; r++) {
                    for(int c=j; c<j+3; c++) {
                        curr = board[r][c];
                        if(curr=='.') {continue;}
                        if(freq.count(curr)) {return 0;}
                        freq.insert(curr);
                    }
                }
                freq.clear();
                j=j+3;
            }
            freq.clear();
            i=i+3;
        }
        return 1;
    }
};
