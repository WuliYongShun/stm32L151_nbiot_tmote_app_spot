#ifndef __ROLLING_OVER_H
#define   __ROLLING_OVER_H

#include "sys.h"

//#define ROLLINGOVER_LOG_RF_PRINT											//定义开启RF输出信息
#define ROLLINGOVER_LOG_PRINTF			Radio_Trf_Debug_Printf_Level0			//定义开启RF输出信息函数

#define ROLLINGOVER_ENTER_ACTIVE_TIME		30								//等待30秒进入工作

#define ROLLINGOVER_ENTER_SLEEP_TIME		900								//等待900秒进入休眠
#define ROLLINGOVER_WAIT_SLEEP_TIME		45								//保持45秒处理

void RollingOverPollExecution(void);										//翻转检测处理
bool RollingOverCheckToActive(void);										//翻转检测
void RollingOverMercuryBreak(void);										//水银开关断开工作
void RollingOverMercuryClose(void);										//水银开关闭合休眠
void RollingOverInitSensorBackground(void);									//检查是否需要初始化传感器背景
void RollingOverCheckToInitSensorBackground(void);							//检查是否需要初始化传感器背景

#endif
