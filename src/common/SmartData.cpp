#include "SmartData.h"

const std::map<SmartAttribute, QString> SmartData::dictionary =
{
	{	0x01	,	"ReadErrorRate"	}	,
	{	0x02	,	"ThroughputPerformance"	}	,
	{	0x03	,	"SpinUpTime"	}	,
	{	0x04	,	"StartStopCount"	}	,
	{	0x05	,	"ReallocatedSectorsCount"	}	,
	{	0x06	,	"ReadChannelMargin"	}	,
	{	0x07	,	"SeekErrorRate"	}	,
	{	0x08	,	"SeekTimePerformance"	}	,
	{	0x09	,	"PowerOnHoursPOH"	}	,
	{	0x0A	,	"SpinRetryCount"	}	,
	{	0x0B	,	"CalibrationRetryCount"	}	,
	{	0x0C	,	"PowerCycleCount"	}	,
	{	0x0D	,	"SoftReadErrorRate"	}	,
	{	0xB7	,	"SATADownshiftErrorCount"	}	,
	{	0xB8	,	"EndtoEnderror"	}	,
	{	0xB9	,	"HeadStability"	}	,
	{	0xBA	,	"InducedOpVibrationDetection"	}	,
	{	0xBB	,	"ReportedUncorrectableErrors"	}	,
	{	0xBC	,	"CommandTimeout"	}	,
	{	0xBD	,	"HighFlyWrites"	}	,
	{	0xBE	,	"AirflowTemperatureWDC"	}	,
	{	0xBE	,	"TemperatureDifferencefrom100"	}	,
	{	0xBF	,	"GSenseErrorRate"	}	,
	{	0xC0	,	"PoweroffRetractCount"	}	,
	{	0xC1	,	"LoadCycleCount"	}	,
	{	0xC2	,	"Temperature"	}	,
	{	0xC3	,	"HardwareECCRecovered"	}	,
	{	0xC4	,	"ReallocationEventCount"	}	,
	{	0xC5	,	"CurrentPendingSectorCount"	}	,
	{	0xC6	,	"UncorrectableSectorCount"	}	,
	{	0xC7	,	"UltraDMACRCErrorCount"	}	,
	{	0xC8	,	"MultiZoneErrorRate"	}	,
	{	0xC8	,	"WriteErrorRateFujitsu"	}	,
	{	0xC9	,	"OffTrackSoftReadErrorRate"	}	,
	{	0xCA	,	"DataAddressMarkerrors"	}	,
	{	0xCB	,	"RunOutCancel"	}	,
	{	0xCC	,	"SoftECCCorrection"	}	,
	{	0xCD	,	"ThermalAsperityRateTAR"	}	,
	{	0xCE	,	"FlyingHeight"	}	,
	{	0xCF	,	"SpinHighCurrent"	}	,
	{	0xD0	,	"SpinBuzz"	}	,
	{	0xD1	,	"OfflineSeekPerformance"	}	,
	{	0xD3	,	"VibrationDuringWrite"	}	,
	{	0xD4	,	"ShockDuringWrite"	}	,
	{	0xDC	,	"DiskShift"	}	,
	{	0xDD	,	"GSenseErrorRateAlt"	}	,
	{	0xDE	,	"LoadedHours"	}	,
	{	0xDF	,	"LoadUnloadRetryCount"	}	,
	{	0xE0	,	"LoadFriction"	}	,
	{	0xE1	,	"LoadUnloadCycleCount"	}	,
	{	0xE2	,	"LoadInTime"	}	,
	{	0xE3	,	"TorqueAmplificationCount"	}	,
	{	0xE4	,	"PowerOffRetractCycle"	}	,
	{	0xE6	,	"GMRHeadAmplitude"	}	,
	{	0xE7	,	"DriveTemperature"	}	,
	{	0xF0	,	"HeadFlyingHours"	}	,
	{	0xF0	,	"TransferErrorRateFujitsu"	}	,
	{	0xF1	,	"TotalLBAsWritten"	}	,
	{	0xF2	,	"TotalLBAsRead"	}	,
	{	0xFA	,	"ReadErrorRetryRate"	}	,
	{	0xFE	,	"FreeFallProtection"	}
};