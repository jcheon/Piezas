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

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(PiezasTest, blank0){
  	Piezas board;
	ASSERT_EQ(board.pieceAt(0, 0), Blank);
}

TEST(PiezasTest, blank1){
  	Piezas board;
	ASSERT_EQ(board.pieceAt(0, 1), Blank);
}

TEST(PiezasTest, ofb0){
  	Piezas board;
	ASSERT_EQ(board.pieceAt(-1, 0), Invalid);
}

TEST(PiezasTest, ofb1){
  	Piezas board;
	ASSERT_EQ(board.pieceAt(3, 0), Invalid);
}

TEST(PiezasTest, ofb2){
  	Piezas board;
	ASSERT_EQ(board.pieceAt(0, 4), Invalid);
}

TEST(PiezasTest, drop0){
  	Piezas board;
	ASSERT_EQ(board.dropPiece(0), Blank);
}

TEST(PiezasTest, drop_ofb)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(-1), Invalid);
}

TEST(PiezasTest, checkDrop)
{
	Piezas obj;
	Piece test;
	Piece test2;
	Piece test3;
	Piece test4;
	test = obj.dropPiece(0);
	test2 = obj.dropPiece(1);
	test3 = obj.dropPiece(2);
	test4 = obj.dropPiece(3);
	ASSERT_TRUE(test == ' ' && test2 == ' ' && test3 == ' ' && test4 == ' ');
}

TEST(PiezasTest, reset)
{
	Piezas obj;
	Piece test;
	obj.dropPiece(1);
	obj.reset();
	test = obj.pieceAt(0,1);
	ASSERT_TRUE(test == ' ');
}

TEST(PiezasTest, full_column)
{
	Piezas obj;
  	Piece test;
  	obj.dropPiece(0);
  	obj.dropPiece(0);
  	obj.dropPiece(0);
  	test = obj.dropPiece(0);
  	ASSERT_TRUE(test == '?');
}

TEST(PiezasTest, gamestate0){
  	Piezas board;
  	board.dropPiece(0);
	ASSERT_EQ(board.gameState(), Invalid);
}

//  X O X O 
//  X X O O 
//	X O O X
TEST(PiezasTest, x_vertical_win){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(2);
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(3);
	ASSERT_EQ(board.gameState(), X);
} 


TEST(PiezasTest, x_vertical_win2){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(0);
	board.dropPiece(0);
	ASSERT_EQ(board.gameState(), X);
}

// X O X X
// O X X O
// X O O O
TEST(PiezasTest, o_horizontal_win){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(1);
	ASSERT_EQ(board.gameState(), O);
}

// x o o o
// o x x x
// x o x o

TEST(Piezas, tie)
{
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	ASSERT_EQ(board.gameState(), Blank);
}

TEST(PiezasTest, tie1){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	ASSERT_EQ(board.gameState(), Blank);
}

TEST(PiezasTest, o_win){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(1);
	ASSERT_EQ(board.gameState(), O);
}