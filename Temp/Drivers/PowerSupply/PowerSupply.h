#ifndef PowerSupply_H
#define PowerSupply_H

//PowerSupply structure
typedef struct
{
  
  double voltage;
  double current;
  
}pSupply_t;

extern pSupply_t *pSupply;

void SetVoltage(double voltage);
void SetCurrent(double current);

void GetVoltage(pSupply_t *pSupply);
void GetCurrent(pSupply_t *pSupply);
void PowerSupplyInit(pSupply_t *pSupply);

#endif