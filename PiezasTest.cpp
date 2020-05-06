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

TEST(PiezasTest, pieceat0)
{
	Piezas board;
	board.dropPiece(0);
	ASSERT_EQ(board.pieceAt(2,0), X )
}
