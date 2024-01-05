#ifndef _MY_ARRAY_H_
#define _MY_ARRAY_H_

class Myarry
{
private:
    char **arr;
    int count;
public:
    Myarry();
    Myarry(const char *s);
    Myarry(const Myarry &src);
    Myarry &operator+(const char *s);
    const char* at(int i);
    bool is_in_bounds(int i);
    int size();
    ~Myarry();
};
#endif