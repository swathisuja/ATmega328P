/*
 * ATmega328PEEPROM.c
 *
 * Created: 7/5/2019 2:42:33 PM
 * Author : I18379
 */ 

#include <avr/io.h>


#include <avr/eeprom.h>



struct eeprom {
	uint8_t _;
	uint64_t data;
};

struct eeprom EEMEM test[]= {{
	.data = 0xAABBCCDDABCDABCD,
	._ = 1
	},{
	.data = 0xAABBCCDDABCDABCD,
	._ = 1
}};


int main() {
	
	return 1;
}