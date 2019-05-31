

#ifndef _LOGX_H_
#define _LOGX_H_

#include "pri_printf.h"

#ifdef __cplusplus
extern "C" {
#endif

  
#define LOG(fmt, ...)	do{pri_printf("%s() #%d "fmt, __FUNCTION__,__LINE__, ##__VA_ARGS__);}while(0)
	

#ifdef __cplusplus
}
#endif

#endif
