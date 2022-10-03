#include "Board.h"
#include <iostream>
using namespace std;

Board::Board ()
{
    int num =1;
    for( int i=0 ;i< 3 ;i++ )
    {
        for(int j=0 ;j< 3 ;j++ )
        {
            board[i][j]= '0'+num  ,num++;
        }
    }

}

void Board::setSympol( int pos ,bool isX)
{
    pos--;
    int i=pos /9 ;
    int j = pos %9;
    if(isX)
        board[i][j]='X';
    else
        board[i][j]='O';
}



void Board::drawboard()
{
    bool IsStraight = true;
    int charI =0 ,charJ =0 ;
    for( int i= 0 ; i<7 ;i++ )
    {
        if( IsStraight )
        {
            for( int i=0 ;i< 25;i++ )
                cout<<"-";
            cout<<endl;
            IsStraight= ! IsStraight;
        }
        else
        {
            charJ =0;
            for(int i=0 ;i<4 ;i++ )
            {
                if( i ==3 )
                {
                    cout<<"|\t"   ;
                    charI++;
                }
                else
                {
                    if(board [charI][charJ] == ' ')
                    {
                        cout<<"|  "<<"\t"   ;

                    }
                    else
                    {
                        cout<<"|  "<<board[charI][charJ]<<"\t"   ;

                    }
                    charJ++;

                }
            }
            cout<<endl;
            IsStraight= ! IsStraight;

        }
    }
}
