/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"

class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// TEST(PiezasTest, sanityCheck)
// {
// 	ASSERT_TRUE(true);
// }


// TEST(PiezasTest, noStepsYet){
//   Piezas board;
// 	ASSERT_EQ(board.pieceAt(0, 2), Blank);
// }


// TEST(PiezasTest, checkturnchange){
//   Piezas board;
// 	ASSERT_EQ(board.dropPiece(2), X);
// }


// TEST(PiezasTest, checkturnchangetwice){
//   Piezas board;
//   board.dropPiece(1);
// 	ASSERT_EQ(board.dropPiece(2), O);
// }

// TEST(PiezasTest, invaliddrop){
//   Piezas board;
// 	ASSERT_EQ(board.dropPiece(4), Invalid);
// }


// TEST(PiezasTest, invaliddrop2){
//   Piezas board;
// 	ASSERT_EQ(board.dropPiece(-1), Invalid);
// }

// TEST(PiezasTest, fullcolumn){
//   Piezas board;
//   board.dropPiece(1);
//   board.dropPiece(1);
//   board.dropPiece(1);
// 	ASSERT_EQ(board.dropPiece(1), Blank);
// }


// TEST(PiezasTest, afterreset){
//   Piezas board;
//   board.dropPiece(1);
//   board.reset();
// 	ASSERT_EQ(board.pieceAt(0,1), Blank);
// }


// TEST(PiezasTest, nowinner){
//   Piezas board;
//   board.dropPiece(1);
// 	ASSERT_EQ(board.gameState(), Invalid);
// }

// TEST(PiezasTest, nowinnerwithelevenmoves){
//   Piezas board;
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(2);
// 	board.dropPiece(0);
// 	board.dropPiece(1);
// 	board.dropPiece(3);
// 	board.dropPiece(3);
// 	board.dropPiece(0);
// 	ASSERT_EQ(board.gameState(), Invalid);
// }

// TEST(PiezasTest, XWins){
//   Piezas board;
//   board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(2);
// 	board.dropPiece(0);
// 	board.dropPiece(1);
// 	board.dropPiece(3);
// 	board.dropPiece(3);
// 	board.dropPiece(0);
// 	board.dropPiece(0);
// 	ASSERT_EQ(board.gameState(), X);
// }


// // X O X X
// // O X X O
// // X O O O
// // 11 12 7 9
// // 10  3 5 8
// // 1   2 4 6


// TEST(PiezasTest, OWins){
//   Piezas board;
//   board.dropPiece(0);
// 	board.dropPiece(1);
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	board.dropPiece(3);
// 	board.dropPiece(0);
// 	board.dropPiece(0);
// 	board.dropPiece(1);
// 	ASSERT_EQ(board.gameState(), O);
// }

// // X O X X
// // O X O O
// // // O X O X
// // X O X O
// // O X O X
// // X O X O
// //
// // 9 10 11 12
// // 8  7 6 5
// // 1   2 3 4



// TEST(PiezasTest, Tie){
//   Piezas board;
//   board.dropPiece(0);
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	board.dropPiece(3);
// 	board.dropPiece(2);
// 	board.dropPiece(1);
// 	board.dropPiece(0);
// 	board.dropPiece(0);
// 	board.dropPiece(1);
// 	board.dropPiece(2);
// 	board.dropPiece(3);
// 	ASSERT_EQ(board.gameState(), Blank);
// }