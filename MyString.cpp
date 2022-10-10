#include "MyString.hpp"
using namespace std;


size_t MyString::find(char c, size_t pos) const {

    if (pos < s.size()) {
        for (size_t i = pos; i < s.size(); ++i) {
            if (c == s[i]) {
                return i;
            }
        }
    }
    return -1;
}

size_t MyString::rfind(char c, size_t pos) const {
    pos = min(pos, s.size());
    if (pos < s.size()) {
        for (size_t i = pos; i != (size_t)-1; --i) {
            if (c == s[i]) {
                return i;
            }
        }
    }

    else if (s.size() > 0) {
        for (size_t i = s.size() - 1; i != (size_t)-1; --i) {
            if (c == s[i]) {
                return i;
            }
        }
    } 
    return -1;
}


MyString MyString::substr(size_t pos, size_t len) const {
    MyString str;
    len = min(len, s.size());

    if (pos < (s.size()) && len <= s.size() - pos - 1) {
        for (size_t i = 0; i < len; i++) {
            str.push_back(s[i + pos]);
        }
        return str;
    }

    else if (((len + 1) == 0 && pos < (s.size())) or len > s.size() - pos) {
        for (size_t i = pos; i < s.size(); i++) {
            str.push_back(s[i]);
        }
        return str;
    }
    return -1;
}


size_t MyString::find(const MyString& str, size_t pos) const {
    size_t len = str.length();
    size_t count = 0;
    if (s.size() < len) { 
        return -1; 
    } 

    else if (s.size() == len) {
        if (s.size() == 0 && pos == 0) {
            return 0;
        }
        else {
            for (size_t i = 0; i < len; i++) {
                if (s[i] == str.s[i]) {
                    count++;
                }
                if (count == len) {
                    return 0;
                }
            }
        }
    }

    else if ((len == 0 && pos < s.size() + 1)){
        return pos;
    }

    else {
        for (size_t i = pos; i <= (s.size()- len); ++i) {
            for (size_t j = 0; j < len; j++) {
                if (str.s[j] != s[i + j]) {
                    count = 0;
                    break;
                }
                count++;
                if (count == len) {
                    return i;
                }
            }
        }
    }
    return -1;
}

size_t MyString::rfind(const MyString& str, size_t pos) const {
    size_t len = str.size();
    pos = min(pos, s.size() - len);
    int count = 0;

    if (s.size() < len) { 
        return -1; 
    }

    if (len == s.size()) {
        if (s.size() == 0 && pos <= s.size()) {
            return pos;
        }
        else {
            for (size_t i = 0; i < len; i++) {
                if (s[i] == str.s[i]) {
                    count++;
                }
                if (count == len) {
                    return 0;
                }
            }
        }
    }

    else if (len == 0 && pos < s.size() + 1) {
        return pos;
    }

    else {
        for (size_t i = pos; i != (size_t)-1; --i) {
            for (size_t j = 0; j < len; j++) {
                if (str.s[j] != s[i + j]) {
                    count = 0;
                    break;
                }
                count++;
                if (count == len) {
                    return i;
                }
            }
        }
    }
    return -1;
}

size_t MyString::size() const
{
    return s.size();
}

size_t MyString::length() const
{
    return s.size();
}

bool MyString::empty() const
{
    return s.empty();
}

void MyString::push_back(char c) 
{
    return s.push_back(c);
}

void MyString::pop_back() 
{
    return s.pop_back();
}

void MyString::resize(size_t n) 
{
    return s.resize(n);
}

void MyString::resize(size_t n, char c) 
{
    return s.resize(n, c);
}




#include "students-ignore3.h"
