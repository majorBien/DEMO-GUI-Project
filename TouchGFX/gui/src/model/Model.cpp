#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f4xx_hal.h"

#ifndef SIMULATOR
#include "main.h"
extern "C"
{
	extern ADC_HandleTypeDef hadc1;

	long map(long input, long in_min,long in_max, long out_min, long out_max)
	{
		return  (input - in_min) * (out_max - out_min + 1) / (in_max - in_min + 1) + out_min;
	}
}


#endif





Model::Model() : modelListener(0), Button_State (false), ADC_VAL(50)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
	{
		Button_State = true;
	}
	else Button_State = false;

	HAL_ADC_Start (&hadc1);
	HAL_ADC_PollForConversion (&hadc1,10);
	uint16_t value = HAL_ADC_GetValue (&hadc1);
	HAL_ADC_Stop (&hadc1);
	ADC_VAL = map(value, 0, 4095, 0 , 100);

#endif

	modelListener->setLight (Button_State);
	modelListener->setADC (ADC_VAL);
}
