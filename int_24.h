/*
 * Copyright (c) 2022 Brandon Pacewic
 *
 * Developed and tested by Brandon Pacewic
 * 
 * int_24.h
 */

#ifndef _INT_24_TYPE_H
#define _INT_24_TYPE_H

struct int_24 {
    unsigned char data[3];

    // Constructor
    int_24(unsigned long);

    // Basic assignment operators
    void operator=(unsigned long);
    void operator=(int_24);

    // To access this data type you must call *.decode() on it
    // This is a extreamly primative type and is mainly used to save memory
    // for constant values
    unsigned long decode() const;
};

#endif // _INT_24_TYPE_H