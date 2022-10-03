

#ifndef X0_GAME_OOP_BOARD_H
#define X0_GAME_OOP_BOARD_H


class Board{



public:
    char board [3][3];
    Board();
    void setSympol( int pos ,bool isX );
    void drawboard () ;



};


#endif //X0_GAME_OOP_BOARD_H
