#pragma once

/*
HashSHA512 - Generate SHA512 hashes
Copyright (C) 2016  @maldevel

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>

#define SHA512_LENGTH 64

bool HashInit(HCRYPTHASH *hCryptHash, HCRYPTPROV *hCryptProv);
bool GenerateHash(HCRYPTHASH hCryptHash, unsigned char *hash, unsigned long hashLen, const unsigned char *data, unsigned long dataLen);
void HashUninit(HCRYPTHASH hCryptHash, HCRYPTPROV hCryptProv);
