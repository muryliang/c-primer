#ifndef SCREEN_H
#define SCREEN_H

#include "my.h"

class Screen {
    friend class Window_mgr;
    public:
        typedef string::size_type pos;
        Screen() = default;

        Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') {}
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}
        char get() const {
            return contents[cursor];
        }
        inline char get(pos ht, pos wd) const;
        Screen& set(char c);
        Screen& set(pos ht, pos wd, char c);
        Screen &move(pos r, pos c);
        Screen &display(ostream &os) {do_display(os); return *this;}
        const Screen &display(ostream &os) const {do_display(os); return *this;}
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;
        void do_display(ostream &os) const { os << contents;}
};

inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline  Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos ht, pos wd, char c) {
    contents[ht * width + wd] = c;
    return *this;
}

class Window_mgr {
    private:
        vector<Screen> screens{Screen(24, 80, ' ')};
    public:
        using ScreenIndex = string::size_type;
        void clear(ScreenIndex i);
};

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

#endif

