#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1628;

tuple<pair<vector<string>, int>,
      pair<vector<string>, int>,
      pair<vector<string>, int>,
      pair<vector<string>, int>>
testFixture()
{
  auto pair1 = make_pair(vector<string>{"3", "4", "+", "2", "*", "7", "/"}, 2);
  auto pair2 = make_pair(vector<string>{"4", "5", "7", "2", "+", "-", "*"}, -16);
  auto pair3 = make_pair(vector<string>{"4", "2", "+", "3", "5", "1", "-", "*", "+"}, 18);
  auto pair4 = make_pair(vector<string>{"100", "200", "+", "2", "/", "5", "*", "7", "+"}, 757);
  return make_tuple(pair1, pair2, pair3, pair4);
}

void test1()
{
  auto fixture = testFixture();
  auto tree = Solution::build(get<0>(fixture).first);

  cout << "Test 1 - expect to see " << to_string(get<0>(fixture).second) << endl;

  cout << "result: " << to_string(tree->eval()) << endl;
}

void test2()
{
  auto fixture = testFixture();
  auto tree = Solution::build(get<1>(fixture).first);

  cout << "Test 2 - expect to see " << to_string(get<1>(fixture).second) << endl;

  cout << "result: " << to_string(tree->eval()) << endl;
}

void test3()
{
  auto fixture = testFixture();
  auto tree = Solution::build(get<2>(fixture).first);

  cout << "Test 3 - expect to see " << to_string(get<2>(fixture).second) << endl;

  cout << "result: " << to_string(tree->eval()) << endl;
}
void test4()
{
  auto fixture = testFixture();
  auto tree = Solution::build(get<3>(fixture).first);

  cout << "Test 4 - expect to see " << to_string(get<3>(fixture).second) << endl;

  cout << "result: " << to_string(tree->eval()) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}