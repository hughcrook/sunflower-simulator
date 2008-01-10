/*										*/
/*		Copyright (C) 1999-2006 Phillip Stanley-Marbell.		*/
/*										*/
/*	You may redistribute and/or copy the source and binary			*/
/*	versions of this software provided:					*/
/*										*/
/*	1.	The source retains the copyright notice above, 			*/
/*		this list of conditions, and the following 			*/
/*		disclaimer.							*/
/*										*/
/*	2.	Redistributed binaries must reproduce the above			*/
/*		copyright notice, this list of conditions, and			*/
/*		the following disclaimer.					*/
/*										*/
/*	3.	The source and binaries are used for non-commercial 		*/
/*		purposes only.							*/
/*										*/
/*	4.	Permission is granted to all others, to redistribute		*/
/*		or make copies of the source or binaries, either		*/
/*		as it was received or with modifications, provided		*/
/*		the above three conditions are enforced and 			*/
/*		preserved, and that permission is granted for 			*/
/*		further redistribution, under the conditions of this		*/
/*		document.							*/
/*										*/
/*	The source is provided "as is", and no warranty is either		*/
/*	implied or explicitly granted. The authors will not be liable 		*/
/*	for any damages arising in any way out of the use or misuse 		*/
/*	of this software, even if advised of the possibility of such 		*/
/*	damage.									*/
/*										*/
/*	Contact: phillip Stanley-Marbell <pstanley@ece.cmu.edu>			*/
/*										*/	

/*										*/
/*	These are all be use. No need to machine generate the whole 2^32	*/
/*										*/

/* Constants with a leading '0' */
enum
{
	B0000 = 0,
	B0001 = 1,
	B0010 = 2,
	B0011 = 3,
	B0100 = 4,
	B0101 = 5,
	B0110 = 6,
	B0111 = 7,
	B00000000 = 0,
	B00000001 = 1,
	B00000010 = 2,
	B00000011 = 3,
	B00000100 = 4,
	B00000101 = 5,
	B00000110 = 6,
	B00000111 = 7,
	B00001000 = 8,
	B00001001 = 9,
	B00001010 = 10,
	B00001011 = 11,
	B00001110 = 14,
	B00001111 = 15,
	B00010000 = 16,
	B00010001 = 17,
	B00010010 = 18,
	B00010011 = 19,
	B00010100 = 20,
	B00010101 = 21,
	B00010110 = 22,
	B00010111 = 23,
	B00011000 = 24,
	B00011001 = 25,
	B00011010 = 26,
	B00011011 = 27,
	B00011100 = 28,
	B00011101 = 29,
	B00011110 = 30,
	B00011111 = 31,
	B00100000 = 32,
	B00100001 = 33,
	B00100010 = 34,
	B00100011 = 35,
	B00100100 = 36,
	B00100101 = 37,
	B00100110 = 38,
	B00100111 = 39,
	B00101000 = 40,
	B00101001 = 41,
	B00101010 = 42,
	B00101011 = 43,
	B00101100 = 44,
	B00101101 = 45,
	B00101110 = 46,
	B00101111 = 47,
	B00110000 = 48,
	B00110001 = 49,
	B00110010 = 50,
	B00110011 = 51,
	B00110111 = 55,
	B00111110 = 62,
	B01000010 = 66,
	B01000000 = 64,
	B01000011 = 67,
	B01000111 = 71,
	B01001110 = 78,
	B01010000 = (1<<6)|(1<<4),
	B01100000 = (1<<6)|(1<<5),
	B01110000 = (1<<6)|(1<<5)|(1<<4),
	B11110000 = 0xF0,
	B0000000000000000 = 0,
	B0000000000001000 = 8,
	B0000000000001001 = 9,
	B0000000000001011 = 11,
	B0000000000011000 = 24,
	B0000000000011011 = 27,
	B0000000000101000 = 40,
	B0000000000101011 = 43,
	B0000000000111000 = 56,
	B0000000001001000 = 72,
	B0000000001011000 = 88,
	B0000001111111111 = 1023,
	B000000001111111100000000 = 0x00FF00,
};


/* Constants with a leading '1' */
enum
{
	B111 = 7,
	B1000 = 8,
	B1001 = 9,
	B1010 = 10,
	B1011 = 11,
	B1100 = 12,
	B1101 = 13,
	B1110 = 14,
	B1111 = 15,
	B111111 = 63,
	B10000000 = 128,
	B10000001 = 129,
	B10000011 = 131,
	B10000100 = 132,
	B10000101 = 133,
	B10001000 = 136,
	B10001001 = 137,
	B10001011 = 139,
	B10001101 = 141,
	B10001111 = 143,
	B10011111 = (1<<7)+31,
	B10101111 = (1<<7)+(1<<5)+15,
	B11000000 = 192,
	B11000001 = 193,
	B11000010 = 194,
	B11000011 = 195,
	B11000100 = 196,
	B11000101 = 197,
	B11000110 = 198,
	B11000111 = 199,
	B11001000 = 200,
	B11001001 = 201,
	B11001010 = 202,
	B11001011 = 203,
	B11001100 = 204,
	B11001101 = 205,
	B11001110 = 206,
	B11001111 = 207,
	B11100000 = 224,
	B11111100 = 252,
	B11111110 = 254,
	B11111111 = 255,
	B1111000000000000 = 0xF000,
	B111111111111 = 4095,
	B1111111100000000 = 0xFF00,
	B1111111110111111 = 65471, 
	B1111111111011111 = 65503, 
	B1111111101111111 = 65407, 
	B1111111111110000 = 65535 - 15,  
	B1111111100111111 = 65343, 
	B1111111110011111 = (~((1<<5)|(1<<6)))&0xFFFF,
	B1111111110101111 = (~((1<<4)|(1<<6)))&0xFFFF, 
	B1111111111111111 = 0xFFFF,
	B111111110000000000000000 = 0xFF0000,
	B11111111111111111111000000000000 = 0xFFFFF000,
};
