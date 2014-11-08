#include<iostream>
#include<windows.h>
#include<shellapi.h>
#include<conio.h>
#include<winuser.h>

#pragma comment(lib,"shell32.lib")
#pragma comment(lib,"user32.lib")
using namespace std;

int main()
{


		SYSTEM_POWER_STATUS derp; 
	GetSystemPowerStatus(&derp);


	int life = derp.BatteryLifePercent;
	//if(derp.ACLineStatus>=2)
	if((life>=70)&&(derp.ACLineStatus==1))
	MessageBox(0, "Stop Charging", "Notification", MB_OK);
	else
	if((life<=30)&&(derp.ACLineStatus==0))
	MessageBox(0, "Connect to Charger", "Notification", MB_OK);
}
