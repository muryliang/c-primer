#ifndef MY_H
#define MY_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <cstring>
#include <cstddef>
#include <stdexcept>
#include <initializer_list>
#include <cassert>
#include <algorithm>

//container
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <forward_list>
#include <array>
#include <stack>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::string;
using std::vector;
using std::list;
using std::deque;
using std::forward_list;
using std::array;
using std::begin;
using std::end;
using std::stack;
using std::find;
using std::count;

#define ploop(cont) do {for (auto i:cont) \
{ cout << i << " "; } \
}while(0)

#endif
