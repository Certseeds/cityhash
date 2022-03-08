// SPDX-License-Identifier: MIT
// Copyright (c) 2011 Google, Inc.
// Copyright  2022 nanoseeds
//
// CityHash, by Geoff Pike and Jyrki Alakuijala
//
// This file declares the subset of the CityHash functions that require
// _mm_crc32_u64().  See the CityHash README for details.
//
// Functions in the CityHash family are not suitable for cryptography.

#ifndef CITY_HASH_CRC_H_
#define CITY_HASH_CRC_H_

#include "city.h"

// Hash function for a byte array.
uint128 CityHashCrc128(const char *s, size_t len);

// Hash function for a byte array.  For convenience, a 128-bit seed is also
// hashed into the result.
uint128 CityHashCrc128WithSeed(const char *s, size_t len, uint128 seed);

// Hash function for a byte array.  Sets result[0] ... result[3].
void CityHashCrc256(const char *s, size_t len, uint64 *result);

#endif  // CITY_HASH_CRC_H_
