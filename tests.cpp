#include <gtest/gtest.h>
#include "list.cpp"

TEST(ListTest, ElementInList)
{
List l = List();
l.push(1);
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 1);
}

TEST(ListTest, TwoElementsInList)
{
List l = List();
l.push(1);
l.push(5);
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 5);
}

TEST(ListTest, PushPushPop)
{
List l = List();
l.push(1);
l.push(5);
l.pop();
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 1);
}

TEST(ListTest, PushPushPopPushPop)
{
List l = List();
l.push(1);
l.push(5);
l.pop();
l.push(3);
l.pop();
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 1);
}

int main(int argc, char* argv[])
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
