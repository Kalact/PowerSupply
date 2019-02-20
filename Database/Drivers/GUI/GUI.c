#include "GUI.h"
#include "ILI9341_STM32_Driver.h"
#include "ILI9341_GFX.h"
#include "rtc.h"
#include "PowerSupply.h"

static char buffer[30];

void printMessageSimple(char text[])
{
  int i = 0;
  while (text[i] != '\0')
  {
    buffer[i] = text[i];
    i++;
  }
  buffer[i] += '\n';
  ILI9341_Draw_Text(buffer, 70, 90, BLACK, 2, WHITE);
  
}

void printMessageStandart()
{
}

void printMessageAdvanced()
{
}

void printMessageError()
{
}

void printMessageTime()
{
  HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
  sprintf(buffer, "%dH:%dM",sTime.Hours,sTime.Minutes);
  ILI9341_Draw_Text(buffer, 3, 2, BLACK, 3, WHITE);
  HAL_Delay(10000);
  if (sTime.Seconds == 59)
  ILI9341_Draw_Text("          ", 1, 2, WHITE, 3, WHITE);
}

void buildGUIHello()
{
  
  //ILI9341_Draw_Filled_Rectangle_Coord(50, 70, 110, 90, RED);
 
  ILI9341_Draw_Text("HELLO", 90, 90, WHITE, 5, DARKCYAN);
  
  HAL_Delay(5000);
  ILI9341_Fill_Screen(DARKCYAN);
  ILI9341_Draw_Filled_Rectangle_Coord(0, 0, 320, 30, WHITE);
  
}

void buildGUISimple()
{
  sprintf(buffer, "Voltage = %.2f", pSupply->voltage);
  ILI9341_Draw_Text(buffer, 70, 90, BLACK, 2, WHITE);
  sprintf(buffer, "Current = %.2f", pSupply->current);
  ILI9341_Draw_Text(buffer, 70, 110, BLACK, 2, WHITE);
}

void buildGUIStandart()
{
}

void buildGUIAdvanced()
{
}

void buildGUIError()
{
}