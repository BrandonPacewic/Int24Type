/*
 * Copyright (c) 2022 Brandon Pacewic
 *
 * Developed and tested by Brandon Pacewic
 * 
 * int_24.cc
 */

#ifndef _INT_24_TYPE_C
#define _INT_24_TYPE_C

#include "int_24.h"

int_24::int_24(unsigned long val) {
    data[0] = ( val        & 0xff);
    data[1] = ((val >> 8)  & 0xff);
    data[2] = ((val >> 16) & 0xff);
}

void int_24::operator=(unsigned long val) {
    data[0] = ( val        & 0xff);
    data[1] = ((val >> 8)  & 0xff);
    data[2] = ((val >> 16) & 0xff);
}

void int_24::operator=(int_24 val) {
    data[0] = val.data[0];
    data[1] = val.data[1];
    data[2] = val.data[2];
}

unsigned long int_24::decode() const {
    unsigned long val = this->data[2];
    val <<= 8;
    val |= this->data[1];
    val <<= 8;
    val |= this->data[0];

    return val;
}

#endif // _INT_24_TYPE_C