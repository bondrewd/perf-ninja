// NOTE: this lab is currently broken.
// After migrating to a new compiler version the speedup is no longer measurable consistently.
// You can still try to solve it to learn the concept, but the result is not guaranteed.

#include <array>

// Assume those constants never change
constexpr int N = 10000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

// FIXME: this data structure can be reduced in size
// struct S
//{
//  int i;       // 4
//  long long l; // 8
//  short s;     // 2
//  double d;    // 8
//  bool b;      // 1
//
//  bool operator<(const S &s) const { return this->i < s.i; }
//};

struct S
{
  float d;                   // 8
  unsigned long long l : 16; // 8
  unsigned int i : 8;        // 4
  unsigned short s : 7;      // 2
  bool b : 1;                // 1

  bool operator<(const S &s) const { return this->i < s.i; }
};

// template <int N>
// class TD;
// TD<sizeof(S)> td;

void init(std::array<S, N> &arr);
S create_entry(int first_value, int second_value);
void solution(std::array<S, N> &arr);
