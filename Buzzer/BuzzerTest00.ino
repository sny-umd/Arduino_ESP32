#include <Arduino.h>
//#include <Esp32.h>
#include <time.h>
#include "def.h"
#include "Init.h"
#include "LedCtrl.h"
#include "Bzctrl.h"

extern float flSound[][12];
extern int beat;
//********************************************************
void setup() 
{
  Initialize_Port();

  LedFlash(50,3,false);

  //InitBz();

}

//********************************************************
void loop() 
{
  // BzGoUp(10, 10);
  // BzStop(200);

  //Bz_DragonQuest_Preface();

  //BzStop(200);

  // LedFlash(50,3,false);
  // BzGoDown(10,10);
  //BzTest();
  BzTest2();

  //digitalWrite(26, !digitalRead(26));


  while(1);

}

//****************************************************************************************************************
//****************************************************************************************************************
//****************************************************************************************************************



