#include "../inc/iodefine.h"

int main( void )
{
	unsigned long int i ;
	// Peripheral initialize
	// GPIOB -> EN
	// Other -> keep default
	RCC_AHBENR = 0x00040014UL ;

	// GPIO initialize
	// PB3 => Output for controlling LED
	// others => keep default.

	GPIOB_MODER = 0x00000240UL ; // PB3 as output

	// Timer使うのめんどいので、forループで点滅させる
	// ダメなコードです

	for(;;)
	{
		// Set PB3 -> High
		GPIOB_ODR = 0x00000008UL ;
		for( i = 0 ; i < 100000 ; i++ )
		{
			asm("NOP") ;
		}
		// Set PB3 -> Lo
		GPIOB_ODR = 0x00000000UL ;
		for( i = 0 ; i < 100000 ; i++ )
		{
			asm("NOP") ;
		}

	}
	return 0 ;
}
