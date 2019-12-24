#include "stm32f4xx.h"
#include "led.h" 
#include "delay.h"


int main(void)
{ 
	delay_init(168);
	LED_Init();
	
	
	while (1)
	{
		GPIOF->ODR &= (~(1 << 9));
		GPIOF->ODR |= (1 << 10);
		
		delay_ms(50);
		
		GPIOF->ODR &= (~(1 << 10));
		GPIOF->ODR |= (1 << 9);
		
		delay_ms(50);
	}
	
}

