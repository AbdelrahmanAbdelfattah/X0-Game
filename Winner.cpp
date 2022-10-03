//
// Created by abdel on 8/17/2022.
//

#include "Winner.h"

char Winner::CheckWinner(char board [3][3])
{
    for( int i =0 ;i< 3 ;i++ )
        if( board[i][0]==board[i][1]&&board[i][0]== board[i][2])
            return board[i][0];

    for( int i = 0 ;i<3;i++ )
        if(board[0][i] ==board[1][i]&& board[2][i] == board[0][i])
            return board[0][i];

    if( board[0][0] ==board[1][1] && board[2][2] == board[1][1])
        return board[1][1];

    if( board[0][2] ==board[1][1] && board[1][1]==board[2][0])
        return board[1][1];

    for( int i= 0;i< 3 ;i++ )
        for( int j=0 ;j< 3 ;j++ )
            if( board[i][j]>='1' &&  board[i][j]<='9'  )
                return ' ';
    return '-';
}
