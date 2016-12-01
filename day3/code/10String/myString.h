#ifndef STRING_H
#define STRING_H


class String
{
public:
    String(const char *s = NULL);

    char * c_str();

    ~String();

private:
    char *_str;
};

#endif // STRING_H
