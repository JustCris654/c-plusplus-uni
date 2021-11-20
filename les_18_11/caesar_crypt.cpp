#include "caesar_crypt.h"
#include <cstring>
#include <assert.h>
#include <iostream>

static const int ZERO = 48;
static const int NINE = 57;
const int A_MAX = 65;
const int Z_MAX = 90;
const int A_MIN = 97;
const int Z_MIN = 122;

void crypt(char word[], int key){
	int len = strlen(word);

	assert(len > 0 && "String leght must be greater than 0");

	for(int i = 0; i < len; i++){
		char val = word[i];
		if(val >= ZERO && val <= NINE){
			val = (val+key)%NINE;
			if(val < ZERO) val+=ZERO;
		} else if(val >= A_MAX && val <= Z_MAX){
			val = (val+key)%Z_MAX;
			if(val < A_MAX) val+=A_MAX;
		} else if(val >= A_MIN && val <= Z_MIN){
			val = (val+key)%Z_MIN;
			if(val < A_MIN) val+=A_MIN;
		}
		word[i] = val;
	}
}

const uint8_t NUM_SIZE = 10;
const uint8_t ALPHABET_SIZE = 26;

void decrypt(char word[], int key){
	int len = strlen(word);

	assert(len > 0 && "String leght must be greater than 0");

	for(int i = 0; i < len; i++){
		char val = word[i];
		// std::cout << val;
		if(val >= ZERO && val <= NINE){
			val = (((val-key)-ZERO)%(NUM_SIZE));
			if(val<0) val+=(NUM_SIZE);
			val+=ZERO;
		} else if(val >= A_MAX && val <= Z_MAX){
			val = (((val-key)-A_MAX)%(ALPHABET_SIZE));
			if(val<0) val+=ALPHABET_SIZE;
			val+=A_MAX;
		} else if(val >= A_MIN && val <= Z_MIN){
			val = (((val-key)-A_MIN)%(ALPHABET_SIZE));
			if(val<0) val+=ALPHABET_SIZE;
			val+=A_MIN;
		}
		// std::cout << "  ->  " << val << '\n';
		word[i] = val;
	}
}
