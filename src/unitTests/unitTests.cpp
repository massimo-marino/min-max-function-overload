/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../min-max-function-overload.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

TEST(minMaxFunctionOverload, version)
{
  ASSERT_THAT(minMaxFunctionOverload::minMaxFunctionOverload::minMaxFunctionOverloadVersion(),
              Eq(minMaxFunctionOverload::minMaxFunctionOverload::version));
}

TEST(minMaxFunctionOverload, T1)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7);
  ASSERT_THAT(M, Eq(7));
}

TEST(minMaxFunctionOverload, T2)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7, 9);
  ASSERT_THAT(M, Eq(9));
}

TEST(minMaxFunctionOverload, T3)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7, 9, 3);
  ASSERT_THAT(M, Eq(9));
}

TEST(minMaxFunctionOverload, T4)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7, 9, 3, 65.12);
  ASSERT_THAT(M, Eq(65));
}

TEST(minMaxFunctionOverload, T5)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(M, Eq(65));
}

TEST(minMaxFunctionOverload, T6)
{
  minMaxFunctionOverload::max<int> m;
  auto M = m(7, 9, 3, 65.12, 8.23, 23, 7);
  ASSERT_THAT(M, Eq(65));
}

TEST(minMaxFunctionOverload, T7)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7);
  ASSERT_THAT(M, Eq(7));
}

TEST(minMaxFunctionOverload, T8)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9);
  ASSERT_THAT(M, Eq(9));
}

TEST(minMaxFunctionOverload, T9)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9, 3);
  ASSERT_THAT(M, Eq(9));
}

TEST(minMaxFunctionOverload, T10)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9, 3, 65.12);
  ASSERT_THAT(M, Eq(65.12));
}

TEST(minMaxFunctionOverload, T11)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(M, Eq(65.12));
}

TEST(minMaxFunctionOverload, T12)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9, 3, 65.12, 8.23, 23);
  ASSERT_THAT(M, Eq(65.12));
}

TEST(minMaxFunctionOverload, T13)
{
  minMaxFunctionOverload::max<double> m;
  auto M = m(7, 9, 3, 65.12, 8.23, 23, 78.63);
  ASSERT_THAT(M, Eq(78.63));
}

TEST(minMaxFunctionOverload, T14)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("");
  ASSERT_THAT(M, Eq(""));
}

TEST(minMaxFunctionOverload, T15)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("", "A");
  ASSERT_THAT(M, Eq("A"));
}

TEST(minMaxFunctionOverload, T16)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("A");
  ASSERT_THAT(M, Eq("A"));
}

TEST(minMaxFunctionOverload, T17)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("A", "C");
  ASSERT_THAT(M, Eq("C"));
}

TEST(minMaxFunctionOverload, T18)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("A", "F", "C");
  ASSERT_THAT(M, Eq("F"));
}

TEST(minMaxFunctionOverload, T19)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("A", "F", "C", "D");
  ASSERT_THAT(M, Eq("F"));
}

TEST(minMaxFunctionOverload, T20)
{
  minMaxFunctionOverload::max<std::string> m;
  auto M = m("A", m("F"), "C", m("D", "Q"));
  ASSERT_THAT(M, Eq("Q"));
}

TEST(minMaxFunctionOverload, T21)
{
  auto M = minMaxFunctionOverload::findMax<int>(1);
  ASSERT_THAT(M, Eq(1));
}

TEST(minMaxFunctionOverload, T22)
{
  auto M = minMaxFunctionOverload::findMax<int>(1, 11.22);
  ASSERT_THAT(M, Eq(11));
}

TEST(minMaxFunctionOverload, T23)
{
  auto M = minMaxFunctionOverload::findMax<int>(1, 33.22, 11.24);
  ASSERT_THAT(M, Eq(33));
}

TEST(minMaxFunctionOverload, T24)
{
  auto M = minMaxFunctionOverload::findMax<int>(1, 33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(M, Eq(55));
}

TEST(minMaxFunctionOverload, T25)
{
  auto M = minMaxFunctionOverload::findMax<double>(1);
  ASSERT_THAT(M, Eq(1));
}

TEST(minMaxFunctionOverload, T26)
{
  auto M = minMaxFunctionOverload::findMax<double>(1, 11.22);
  ASSERT_THAT(M, Eq(11.22));
}

TEST(minMaxFunctionOverload, T27)
{
  auto M = minMaxFunctionOverload::findMax<double>(1, 33.22, 11.24);
  ASSERT_THAT(M, Eq(33.22));
}

TEST(minMaxFunctionOverload, T28)
{
  auto M = minMaxFunctionOverload::findMax<double>(1, 33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(M, Eq(55));
}

TEST(minMaxFunctionOverload, T29)
{
  auto M = minMaxFunctionOverload::findMax<std::string>("");
  ASSERT_THAT(M, Eq(""));
}

TEST(minMaxFunctionOverload, T30)
{
  auto M = minMaxFunctionOverload::findMax<std::string>("", "A");
  ASSERT_THAT(M, Eq("A"));
}

TEST(minMaxFunctionOverload, T31)
{
  auto M = minMaxFunctionOverload::findMax<std::string>("A", "", "A", "A");
  ASSERT_THAT(M, Eq("A"));
}

TEST(minMaxFunctionOverload, T32)
{
  auto M = minMaxFunctionOverload::findMax<std::string>("A", "D", "FF", "A");
  ASSERT_THAT(M, Eq("FF"));
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
