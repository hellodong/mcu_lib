

#ifndef _LOGX_H_
#define _LOGX_H_

#include "pri_printf.h"

#ifdef __cplusplus
extern "C" {
#endif


#define __ERROR		0
#define __WARN		1
#define __INFO		2
#define __DBG		3
#define LEVEL_LOG	(__DBG)

#define log_print(fmt,...)	pri_printf(fmt, ##__VA_ARGS__)
#define LOG_DBG(fmt,...)	do{if(LEVEL_LOG >= __DBG)	log_print("[DBG] %s() #%d "fmt"\n", __func__, __LINE__, ##__VA_ARGS__);}while(0)
#define LOG_INF(fmt,...)	do{if(LEVEL_LOG >= __INFO)	log_print("[INF] %s() #%d "fmt"\n", __func__, __LINE__, ##__VA_ARGS__);}while(0)
#define LOG_WRN(fmt,...)	do{if(LEVEL_LOG >= __WARN)	log_print("[WRN] %s() #%d "fmt"\n", __func__, __LINE__, ##__VA_ARGS__);}while(0)
#define LOG_ERR(fmt,...)	do{if(LEVEL_LOG >= __ERROR)	log_print("[ERR] %s() #%d "fmt"\n", __func__, __LINE__, ##__VA_ARGS__);}while(0)
#define LOG(fmt,...)		LOG_DBG(fmt,##__VA_ARGS__)


	

#ifdef __cplusplus
}
#endif

#endif
