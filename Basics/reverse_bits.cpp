#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

long reverseBits(long n)
{
  bitset<32> bit(n);
  string bitStr = bit.to_string();
  reverse(bitStr.begin(), bitStr.end());
  return std::bitset<32>(bitStr).to_ulong();
}