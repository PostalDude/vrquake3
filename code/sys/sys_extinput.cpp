
#include <OVR.h>


void Sys_ExtInputInit()
{
	OVR::System::Init(OVR::Log::ConfigureDefaultLog(OVR::LogMask_All));
}

void Sys_ExtInputShutdown()
{
	OVR::System::Destroy();
}