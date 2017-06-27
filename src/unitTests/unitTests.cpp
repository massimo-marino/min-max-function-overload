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
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7);
  ASSERT_THAT(MX, Eq(7));
  
  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7);
  ASSERT_THAT(MN, Eq(7));

}

TEST(minMaxFunctionOverload, T2)
{
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7, 9);
  ASSERT_THAT(MX, Eq(9));

  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7, 9);
  ASSERT_THAT(MN, Eq(7));
}

TEST(minMaxFunctionOverload, T3)
{
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7, 9, 3);
  ASSERT_THAT(MX, Eq(9));

  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7, 9, 3);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T4)
{
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7, 9, 3, 65.12);
  ASSERT_THAT(MX, Eq(65));

  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7, 9, 3, 65.12);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T5)
{
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(MX, Eq(65));

  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T6)
{
  minMaxFunctionOverload::max<int> mx;
  auto MX = mx(7, 9, 3, 65.12, 8.23, 23, 7);
  ASSERT_THAT(MX, Eq(65));

  minMaxFunctionOverload::min<int> mn;
  auto MN = mn(7, 9, 3, 65.12, 8.23, 23, 7);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T7)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7);
  ASSERT_THAT(MX, Eq(7));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7);
  ASSERT_THAT(MN, Eq(7));
}

TEST(minMaxFunctionOverload, T8)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9);
  ASSERT_THAT(MX, Eq(9));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9);
  ASSERT_THAT(MN, Eq(7));
}

TEST(minMaxFunctionOverload, T9)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9, 3);
  ASSERT_THAT(MX, Eq(9));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9, 3);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T10)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9, 3, 65.12);
  ASSERT_THAT(MX, Eq(65.12));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9, 3, 65.12);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T11)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(MX, Eq(65.12));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9, 3, 65.12, 8.23);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T12)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9, 3, 65.12, 8.23, 23);
  ASSERT_THAT(MX, Eq(65.12));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9, 3, 65.12, 8.23, 23);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T13)
{
  minMaxFunctionOverload::max<double> mx;
  auto MX = mx(7, 9, 3, 65.12, 8.23, 23, 78.63);
  ASSERT_THAT(MX, Eq(78.63));

  minMaxFunctionOverload::min<double> mn;
  auto MN = mn(7, 9, 3, 65.12, 8.23, 23, 78.63);
  ASSERT_THAT(MN, Eq(3));
}

TEST(minMaxFunctionOverload, T14)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("");
  ASSERT_THAT(MX, Eq(""));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("");
  ASSERT_THAT(MN, Eq(""));
}

TEST(minMaxFunctionOverload, T15)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("", "A");
  ASSERT_THAT(MX, Eq("A"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("", "A");
  ASSERT_THAT(MN, Eq(""));
}

TEST(minMaxFunctionOverload, T16)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("A");
  ASSERT_THAT(MX, Eq("A"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("A");
  ASSERT_THAT(MN, Eq("A"));
}

TEST(minMaxFunctionOverload, T17)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("A", "C");
  ASSERT_THAT(MX, Eq("C"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("A", "C");
  ASSERT_THAT(MN, Eq("A"));
}

TEST(minMaxFunctionOverload, T18)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("A", "F", "C");
  ASSERT_THAT(MX, Eq("F"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("A", "F", "C");
  ASSERT_THAT(MN, Eq("A"));
}

TEST(minMaxFunctionOverload, T19)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("A", "F", "C", "D");
  ASSERT_THAT(MX, Eq("F"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("A", "F", "C", "D");
  ASSERT_THAT(MN, Eq("A"));
}

TEST(minMaxFunctionOverload, T20)
{
  minMaxFunctionOverload::max<std::string> mx;
  auto MX = mx("A", mx("F"), "C", mx("D", "Q"));
  ASSERT_THAT(MX, Eq("Q"));

  minMaxFunctionOverload::min<std::string> mn;
  auto MN = mn("A", mn("F"), "C", mn("D", "Q"));
  ASSERT_THAT(MN, Eq("A"));
}

TEST(minMaxFunctionOverload, T21)
{
  auto MX = minMaxFunctionOverload::findMax<int>(1);
  ASSERT_THAT(MX, Eq(1));

  auto MN = minMaxFunctionOverload::findMin<int>(1);
  ASSERT_THAT(MN, Eq(1));
}

TEST(minMaxFunctionOverload, T22)
{
  auto MX = minMaxFunctionOverload::findMax<int>(1, 11.22);
  ASSERT_THAT(MX, Eq(11));

  auto MN = minMaxFunctionOverload::findMin<int>(1, 11.22);
  ASSERT_THAT(MN, Eq(1));
}

TEST(minMaxFunctionOverload, T23)
{
  auto MX = minMaxFunctionOverload::findMax<int>(1, 33.22, 11.24);
  ASSERT_THAT(MX, Eq(33));

  auto MN = minMaxFunctionOverload::findMin<int>(1, 33.22, 11.24, -3);
  ASSERT_THAT(MN, Eq(-3));
}

TEST(minMaxFunctionOverload, T24)
{
  auto MX = minMaxFunctionOverload::findMax<int>(1, 33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(MX, Eq(55));

  auto MN = minMaxFunctionOverload::findMin<int>(33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(MN, Eq(9));
}

TEST(minMaxFunctionOverload, T25)
{
  auto MX = minMaxFunctionOverload::findMax<double>(1);
  ASSERT_THAT(MX, Eq(1));

  auto MN = minMaxFunctionOverload::findMin<double>(1);
  ASSERT_THAT(MN, Eq(1));
}

TEST(minMaxFunctionOverload, T26)
{
  auto MX = minMaxFunctionOverload::findMax<double>(1, 11.22);
  ASSERT_THAT(MX, Eq(11.22));

  auto MN = minMaxFunctionOverload::findMin<double>(1.376, 11.22);
  ASSERT_THAT(MN, Eq(1.376));
}

TEST(minMaxFunctionOverload, T27)
{
  auto MX = minMaxFunctionOverload::findMax<double>(1, 33.22, 11.24);
  ASSERT_THAT(MX, Eq(33.22));

  auto MN = minMaxFunctionOverload::findMin<double>(1.376, 11.22, 33.22);
  ASSERT_THAT(MN, Eq(1.376));
}

TEST(minMaxFunctionOverload, T28)
{
  auto MX = minMaxFunctionOverload::findMax<double>(1, 33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(MX, Eq(55));

  auto MN = minMaxFunctionOverload::findMin<double>(4.456, 33.22, 11.24, 55, 44, 9.87);
  ASSERT_THAT(MN, Eq(4.456));
}

TEST(minMaxFunctionOverload, T29)
{
  auto MX = minMaxFunctionOverload::findMax<std::string>("");
  ASSERT_THAT(MX, Eq(""));

  auto MN = minMaxFunctionOverload::findMin<std::string>("");
  ASSERT_THAT(MN, Eq(""));
}

TEST(minMaxFunctionOverload, T30)
{
  auto MX = minMaxFunctionOverload::findMax<std::string>("", "A");
  ASSERT_THAT(MX, Eq("A"));

  auto MN = minMaxFunctionOverload::findMin<std::string>("", "A");
  ASSERT_THAT(MN, Eq(""));
}

TEST(minMaxFunctionOverload, T31)
{
  auto MX = minMaxFunctionOverload::findMax<std::string>("A", "", "A", "A");
  ASSERT_THAT(MX, Eq("A"));

  auto MN = minMaxFunctionOverload::findMin<std::string>("A", "", "A", "A");
  ASSERT_THAT(MN, Eq(""));
}

TEST(minMaxFunctionOverload, T32)
{
  auto MX = minMaxFunctionOverload::findMax<std::string>("A", "D", "FF", "A");
  ASSERT_THAT(MX, Eq("FF"));

  auto MN = minMaxFunctionOverload::findMin<std::string>("A", "D", "FF", "A");
  ASSERT_THAT(MN, Eq("A"));
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
