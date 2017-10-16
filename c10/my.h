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

//algorithm
#include <functional>
#include <iterator>

//dict
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

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
using std::equal;
using namespace std::placeholders;
using std::ref;
using std::istream_iterator;
using std::ostream_iterator;
using std::set;
using std::map;
using std::multiset;
using std::multimap;
using std::pair;

#define ploop(cont) do {for (auto i:cont) \
{ cout << i << " "; } cout << endl; \
}while(0)

#define piloop(b,e) do{for (auto i = b; i != e; ++i) \
{ cout << *i << " "; } cout << endl; \
}while(0)

#define pval(val) cout << val

#define pdict(dict,vf)  do{ \
    for(auto pair:dict) { \
        cout << pair.first << " : "; \
        vf(pair.second); \
    }   \
} while(0)

#endif
