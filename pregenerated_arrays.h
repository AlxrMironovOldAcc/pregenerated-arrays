#ifndef PREGENERATED_ARRAYS_
#define PREGENERATED_ARRAYS_

	#include <stdbool.h>
	#include <stdint.h>

	extern const uint16_t U8_MUL10[256];
	extern const int16_t S8_MUL10[256];
	
	extern const uint8_t U8_DIV10[256];
	extern const int8_t S8_DIV10[256];
	
	extern const uint8_t U8_MOD10[256];
	extern const int8_t S8_MOD10[256];
	
	extern const char NIBBLE_TO_CHAR[16];

	extern const uint8_t PERCENT_TO_BYTE[101];
	extern const uint8_t PERCENT_TO_5BIT[101];
	extern const uint8_t BYTE_TO_PERCENT[256];
	
	extern const uint8_t DALLAS_CRC8[256];
	
#endif 