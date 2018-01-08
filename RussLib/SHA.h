#pragma once
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <bitset>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std;

namespace RussCryptoFuncs
{
	class SHA {
	public:

		// Converts the ASCII string to a binary representation.
		static vector<unsigned long> convert_to_binary(const string);

		// Pads the messages to make sure they are a multiple of 512 bits.
		static vector<unsigned long> pad_to_512bits(const vector<unsigned long>);

		// Changes the n 8 bit segments representing every ASCII character to 32 bit words.
		static vector<unsigned long> resize_block(vector<unsigned long>);

		// The actual hash computing.
		static string compute_hash(const vector<unsigned long>);
		static string combineHash(char*, char*);
		static string generateSingleHash(char[64], string);
		static string generateHash(string);
	private:
		SHA() {};
	};
}
