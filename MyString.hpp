#ifndef MyString_hpp
#define MyString_hpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class MyString {

public:
    MyString()       : s(0)   {}

    MyString(char c) : s(1,c) {}
    
    MyString(int n, char c) : s(n, c) {}

    MyString substr(size_t pos, size_t len = -1) const;

    size_t  find(char c, size_t pos =  0) const;

    size_t rfind(char c, size_t pos = -1) const;

    size_t  find(const MyString& str, size_t pos =  0) const;

    size_t rfind(const MyString& str, size_t pos = -1) const;

    size_t size() const;

    size_t length() const;

    bool empty() const;

    void push_back(char c);

    void pop_back();

    void resize(size_t n);

    void resize(size_t n, char c);

private:
    std::vector<char> s;

#include "students-ignore1.h"
};

#include "students-ignore2.h"
#endif /* MyString_hpp */
