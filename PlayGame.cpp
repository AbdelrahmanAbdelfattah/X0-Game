#include "PlayGame.h"
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


void PlayGame::play() {

    cout<<" Please use this matrix and these numbers as a refrence !"<<endl;
    B.drawboard();
    bool isX = true;
    while(true)
    {
        cout<<"Choose position "<<endl;
        int id ;
        cin>>id;
        if( isX)
        {
            B.setSympol(id,isX);
        }
        else
        {
            B.setSympol(id,isX);
        }
        isX=!isX;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 1,1 });

        B.drawboard();
        if(W.CheckWinner(B.board) !=' ')
        {
            if(W.CheckWinner(B.board) !='-')
                cout<< "The winner is "<<W.CheckWinner(B.board) <<endl;
            else
                cout<<"Game over no one won "<<endl;
            break;
        }
    }



}
