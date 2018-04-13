//============================================================================
// Name        : Battleship.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>
 using namespace std;

class Board 
{
   private: 
      int board[10][10];
      int x;
      int y;

   public:
      void createBoard() {
         for (int i=0;i<10;i++) {
		    for (int j=0; j<10; j++) {
			   board[i][j] = 0;
		    }
		 }
	  }
      
      void setupBoard() {
	      for (int i=0;i<5;i++) {
             cout << "Enter the X co-ordinate";
             cin >> x;
             cout << "Enter the Y co-ordinate";
             cin >> y;
             board[x-1][y-1] = 1;
          }
	  }
	
      void displayBoard() {
	     for (int i=0;i<10;i++) {
		    for (int j=0; j<10; j++) {
			   cout << board[i][j] << " ";
		    }
		 cout << "\n";
         }
      }
};

int main() 
{
   Board PlayerABoard;
   Board PlayerBBoard;
   
   PlayerABoard.createBoard();
   PlayerABoard.displayBoard();
   PlayerABoard.setupBoard();
   PlayerABoard.displayBoard();

   PlayerBBoard.createBoard();
   PlayerBBoard.displayBoard();
   PlayerBBoard.setupBoard();
   PlayerBBoard.displayBoard();

}
