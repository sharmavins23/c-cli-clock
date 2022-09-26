#pragma once

// Function inclusions
#include "utils.h"

// ===== Function hoists =======================================================

// Convert a character into an integer for paging digit library
int digits_get_digit_index(char digit);

// Given an integer and a row access value, return the corresponding splice
const char *digit_get_splice(uint32_t value, uint32_t rowAccess);