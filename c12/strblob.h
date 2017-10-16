#ifndef STRBLOB_H
#define STRBLOB_H

#include "my.h"

class StrBlob {
    public:
        typedef vector<string>::size_type size_type;
        StrBlob();
        StrBlob(initializer_list<string> li);
        size_type size() const { return data->size();}
        bool empty() const { return data->empty();}
        void push_back(const string &t) { data->push_back(t);}
        void pop_back();
        size_t use_count() const {return data.use_count();}

        string & front();
        string & back();

    private:
        shared_ptr<vector<string>> data;
        void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> li):data(make_shared<vector<string>>(li)) {}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

string& StrBlob::front() {
    check(0, "front on empty Strblob");
    return data->front();
}

string& StrBlob::back() {
    check(0, "back on empty Strblob");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty Strblob");
    data->pop_back();
}
#endif
