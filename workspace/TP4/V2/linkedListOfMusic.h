#pragma once

#include "linkedList.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ============
// Types
// ============

typedef struct {
    char* name;
    char* artist;
    char* album;
    char* genre;
    int discNum;
    int trackNum;
    int year;
}Music;


// ============
// Exported Functions
// ============

void afficheElement(Element e);
void detruireElement(Element e);
bool equalsElement(Element e1, Element e2);










