#pragma once

//ʹ�����ܼ�����
#include "Pdh.h"
#pragma comment ( lib , "Pdh.lib" )

class CPerformanceCounter
{
	public:
		CPerformanceCounter(CString strCounter);
		~CPerformanceCounter(void);
		double GetCurrentValue();
	private:
		//���ܼ�����
		PDH_HQUERY hQuery;
		PDH_HCOUNTER hTotal;
};

