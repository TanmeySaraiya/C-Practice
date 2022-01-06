#include<bits/stdc++.h>
#include<iostream>
using namespace std;



struct Move{
    int row,col;
};

char player='x',opponent='o';
bool SomeoneWon(char board[3][3]){
        for(int row=0;row<3;row++){
        if(board[row][0]==board[row][1] && board[row][1]==board[row][2]){
            if(board[row][0]=='x'){
                cout<<"You lost";
                exit(0);}
            else if(board[row][0]=='o'){
                cout<<"You won";
                exit(0);}
        }   
    }
    for(int col=0;col<3;col++){
        if(board[0][col]==board[1][col] && board[1][col]==board[2][col]){
            if(board[0][col]=='x'){
                cout<<"You lost";
                exit(0);}
            else if(board[0][col]=='o'){
                cout<<"You won";
                exit(0);}
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        if(board[0][0]=='x'){
            cout<<"You lost";
            exit(0);}
        else if(board[0][0]=='o'){
            cout<<"You won"; 
            exit(0);}
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
        if(board[0][2]=='x'){
            cout<<"You lost";
            exit(0);}
        else if(board[0][2]=='o'){
            cout<<"You won";
            exit(0);}
    }
return true;
}
bool isMovesleft(char board[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='_')
                return true;
        }
    }
    return false;
}


int evaluate(char b[3][3]){
    for(int row=0;row<3;row++){
        if(b[row][0]==b[row][1] && b[row][1]==b[row][2]){
            if(b[row][0]=='x')
                return +10;
            else if(b[row][0]=='o')
                return -10;
        }   
    }
    for(int col=0;col<3;col++){
        if(b[0][col]==b[1][col] && b[1][col]==b[2][col]){
            if(b[0][col]=='x')
                return +10;
            else if(b[0][col]=='o')
                return -10;
        }
    }
    if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
        if(b[0][0]=='x')
            return +10;
        else if(b[0][0]=='o')
            return -10; 
    }
    if(b[0][2]==b[1][1] && b[1][1]==b[2][0]){
        if(b[0][2]=='x')
            return +10;
        else if(b[0][2]=='o')
            return -10;
    }
    return 0;
}

int minimax(char board[3][3], int depth, bool isMax){
    int score =evaluate(board);

    if(score==10)
        return score;    
    
    if(score==-10)
        return score;
    
    if(isMovesleft(board)==false)
        return 0;
    
    if(isMax){
        int best=-1000;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='_'){
                    board[i][j]=player;
                    best=max(best,minimax(board,depth+1,!isMax));
                    board[i][j]='_';
                }
            }       
        }
        return best;  
    }
    else{
        int best=1000;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='_'){
                    board[i][j]=opponent;
                    best=min(best,minimax(board,depth+1,!isMax));

                    board[i][j]='_';
                }
            }
        }
        return best;
    }
}
Move findBestMove(char board[3][3]){
    int bestVal=-1000;
    Move bestMove;
    bestMove.row=-1;
    bestMove.col=-1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='_'){
                board[i][j]=player;
                int moveVal=minimax(board,0,false);
                if(moveVal>bestVal){
                    bestMove.row=i;
                    bestMove.col=j;
                    bestVal=moveVal;
                }
                board[i][j]='_';
            }
        }       
    }
    return bestMove;
}


int main(){
    char board[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]='_';
        }
    }
    int turn=1;
    while(isMovesleft(board)){
        if(turn){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<board[i][j]<<' ';
                }
                cout<<endl;
            }
            int rp,cp;
            
            cin>>rp>>cp;
            while(board[rp][cp]!='_'){
                cout<<"Illegal move"<<endl;
                cin>>rp>>cp;
            }

            board[rp][cp]=opponent;
            turn=0;
        }
        else{
            Move best_now=findBestMove(board);
            board[best_now.row][best_now.col]=player;
            turn=1;
        }
        SomeoneWon(board);
    }
    for(int row=0;row<3;row++){
        if(board[row][0]==board[row][1] && board[row][1]==board[row][2]){
            if(board[row][0]=='x')
                cout<<"You lost";
            else if(board[row][0]=='o')
                cout<<"You won";;
        }   
    }
    for(int col=0;col<3;col++){
        if(board[0][col]==board[1][col] && board[1][col]==board[2][col]){
            if(board[0][col]=='x')
                cout<<"You lost";
            else if(board[0][col]=='o')
                cout<<"You won";
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        if(board[0][0]=='x')
            cout<<"You lost";
        else if(board[0][0]=='o')
            cout<<"You won"; 
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
        if(board[0][2]=='x')
            cout<<"You lost";
        else if(board[0][2]=='o')
            cout<<"You won";
    }
    
    return 0;
}