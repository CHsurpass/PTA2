/*****************************************************************************
* @author  : xhc                                                             *
*****************************************************************************/

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

const int N1 = 1e1 + 5;
const int N2 = 1e2 + 5;
const int N3 = 1e3 + 5;
const int N4 = 1e4 + 5;
const int N5 = 1e5 + 5;
const int N6 = 1e6 + 5;
const int N7 = 1e7 + 5;
#define ll long long
#define pb push_back
#define ft(i, st, n) for(int i = st; i < (int)(n); i ++)
#define fte(i, st, n) for(int i = st; i <= (int)(n); i ++)
int n, m;
string s;
stringstream ss;
int	a[N4];
priority_queue<int, vector<int>, greater<int>>pqu;
int x, sum;
void Input() {
	cin >> n;
	ft(i, 0, n) {
		cin >> x;
		pqu.push(x);
	}
	return;
}
void Solve() {
	while( pqu.size() > 1 ) {
		int num1 = pqu.top();
		pqu.pop();
		int num2 = pqu.top();
		pqu.pop();
		pqu.push(num1 + num2);
		sum += num1 + num2;
	}
	while( pqu.size() ) pqu.pop();
	return;
}
void Print() {
	cout << sum << endl;
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	Input();
	Solve();
	Print();
	return 0;
}
