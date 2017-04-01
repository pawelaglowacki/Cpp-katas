#include <gtest/gtest.h>
#include "stack.cpp"
#include "list.cpp"

TEST(StackTest, ElementInStack)
{
Stack l = Stack();
l.push(1);
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 1);
}

TEST(StackTest, TwoElementsInStack)
{
Stack l = Stack();
l.push(1);
l.push(5);
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 5);
}

TEST(StackTest, PushPushPop)
{
Stack l = Stack();
l.push(1);
l.push(5);
l.pop();
int top_element = l.getTopNr();
ASSERT_EQ(top_element, 1);
}

TEST(StackTest, PushPushPopPushPop)
{
Stack l = Stack();
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
