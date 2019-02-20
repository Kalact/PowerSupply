#include "PowerSupply.h"
#include "main.h"

pSupply_t supply;
pSupply_t *pSupply = &supply;

void SetVoltage(double voltage)
{
  //Set voltage logic
}

void SetCurrent(double current)
{
  //Set current logic
}

void GetVoltage(pSupply_t *pSupply)
{
  //make throw pointer
  //pSupply.voltage = 00;
  
}

void GetCurrent(pSupply_t *pSupply)
{
  //make throw pointer
  
}

void PowerSupplyInit(pSupply_t *pSupply)
{
  //Get initial data from memory;
  pSupply->current = 1.07;
  pSupply->voltage = 2.03;
  
}