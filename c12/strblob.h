#ifndef STRBLOB_H
#define STRBLOB_H

#include "my.h"

class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;
    public:
        typedef vector<string>::size_type size_type;
        StrBlob();
        StrBlob(initializer_list<string> li);
        size_type size() const { return data->size();}
        bool empty() const { return data->empty();}
        void push_back(const string& t) { data->push_back(t);}
        void pop_back();
        size_t use_count() const {return data.use_count();}
        StrBlobPtr begin();
        StrBlobPtr end();
        string& front();
        string& back();

    private:
        shared_ptr<vector<string>> data;
        void check(size_type i, const string &msg) const;
};

class StrBlobPtr {
    public:
        StrBlobPtr(): curr(0) {}
        StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
        StrBlobPtr(const StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {}
        string& deref() const;
        StrBlobPtr & incr();
    private:
        shared_ptr<vector<string>> check(size_t, const string&) const;
        weak_ptr<vector<string>> wptr;
        size_t curr;
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

shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw out_of_range(msg);
    return ret;
}

string& StrBlobPtr::deref() const {
    auto p = check(curr, "deference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increment past end");
    ++curr;
    return *this;
}

StrBlobPtr StrBlob::begin() {return StrBlobPtr(*this);}
StrBlobPtr StrBlob::end() {
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}
#endif
