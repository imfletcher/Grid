//============================================================================
// Name        : Battleship.cpp
// Author      : Greg Mattson
// Version     : 0.001
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>
 using namespace std;

class Board
{
   private:
      const char* board[10][10];
      int x;
      int y;

      void addShip(string shipName, const char* shipType, int length){
         cout << "Enter the X co-ordinate for " + shipName;
         cin >> x;
         cout << "Enter the Y co-ordinate" + shipName;
         cin >> y;
         board[x-1][y-1] = "C";
      }

   public:
      void createBoard() {
         for (int i=0;i<10;i++) {
		    for (int j=0; j<10; j++) {
			   board[i][j] = "-";
		    }
		 }
	  }

      void setupBoard() {
	      string shipToAddName = "Carrier";
	      const char* shipToAddType = "C";
	      int shipToAddLength = 1;
	      for (int i=0;i<5;i++) {
            addShip(shipToAddName, shipToAddType, shipToAddLength);
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
