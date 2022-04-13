#ifndef _INT_24_TYPE_H
#define _INT_24_TYPE_H

struct int_24 {
    unsigned char data[3];

    int_24(unsigned long);

    void operator=(unsigned long);

    void operator=(int_24);

    unsigned long decode() const;
};

#endif // _INT_24_TYPE_H