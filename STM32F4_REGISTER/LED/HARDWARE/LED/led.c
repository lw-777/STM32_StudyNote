#include "led.h"
#include "stm32f4xx.h"

void LED_Init(void)
{
	//ʹ��IO��ʱ��
	RCC->AHB1ENR |= (1 << 5);
	
	//����PF9
	GPIOF->MODER &= (~(0x11 << (2 * 9)));
	GPIOF->MODER |= (0x01 << (2 * 9));	
	
	GPIOF->OSPEEDR &= (~(0x11 << (2 * 9)));
	GPIOF->OSPEEDR |= (0x10 << (2 * 9));	
	
	GPIOF->PUPDR &= (~(0x11 << (2 * 9)));
	GPIOF->PUPDR |= (0x01 << (2 * 9));
	
	GPIOF->OTYPER &= (~(1 << 9));  
	GPIOF->OTYPER |= (1 << 9);
	
	GPIOF->ODR |= (1 << 9);
	
	//����PF10
	GPIOF->MODER &= (~(0x11 << (2 * 10)));
	GPIOF->MODER |= (0x01 << (2 * 10));	
	
	GPIOF->OSPEEDR &= (~(0x11 << (2 * 10)));
	GPIOF->OSPEEDR |= (0x10 << (2 * 10));	
	
	GPIOF->PUPDR &= (~(0x11 << (2 * 10)));
	GPIOF->PUPDR |= (0x01 << (2 * 10));
	
	GPIOF->OTYPER &= (~(1 << 10));  
	GPIOF->OTYPER |= (1 << 10);
	
	GPIOF->ODR |= (1 << 10);

}


