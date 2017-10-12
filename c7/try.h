#include "my.h"

class two;
void sethaha(two& t, const string s);

class one {
    public:
        void sethehe(two& cls, int val);
        static int getsta() { return 100;}
        static constexpr int sta = 202;
};

//constexpr int one::sta;
int outergetsta(const int a) {
    return a;
}

class two {
    friend void one::sethehe(two&, int) ;
    friend void sethaha(two&, const string);
    friend void setheheonevalue(two );
    private:
        int hehe = 2;
        string haha{"123456"};
    public:
        two() = default;
        two(int a): hehe(a) {}
        inline int gethehe() const { return hehe;}
        inline string gethaha() const { return haha;}
};

inline void one::sethehe(two& cls, int val) {
    cls.hehe = val;
    sethaha(cls, "haha1234");
}

void setheheonevalue(two t) {
    cout << "setting " << t.hehe << endl;
}

void sethaha(two& t, const string s) {
    t.haha = s;
}
