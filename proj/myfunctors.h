#pragma once
class myplus
{
    
public:
    int operator () (int x,int y) const {
        return x+y;
    }
};
class myminus
{

public:
    int operator () (int x, int y) const {
        return x - y;
    }
};
class mytimes
{

public:
    int operator () (int x, int y) const {
        return x * y;
    }
};
class mydivides
{

public:
    int operator () (int x, int y) const {
        return x / y;
    }
};
class mymodulus
{

public:
    int operator () (int x, int y) const {
        return x % y;
    }
};
class mynegate
{

public:
    int operator () (int x) const {
        return -x;
    }
};
class myequal_to
{

public:
    bool operator () (int x,int y) const {
        return x==y;
    }
};
class mynot_equal_to
{

public:
    bool operator () (int x, int y) const {
        return x != y;
    }
};
class mygreater
{

public:
    bool operator () (int x, int y) const {
        return x > y;
    }
};
class myless
{

public:
    bool operator () (int x, int y) const {
        return x < y;
    }
};
class mygreater_equal
{

public:
    bool operator () (int x, int y) const {
        return x >= y;
    }
};
class myless_equal
{

public:
    bool operator () (int x, int y) const {
        return x <= y;
    }
};
class mylogical_and
{

public:
    bool operator () (bool x, bool y) const {
        return x && y;
    }
};
class mylogical_or
{

public:
    bool operator () (bool x, bool y) const {
        return x || y;
    }
};
class mylogical_not
{

public:
    bool operator () (bool x) const {
        return !x;
    }
};