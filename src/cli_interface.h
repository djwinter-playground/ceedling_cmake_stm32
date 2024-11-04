#ifndef CLI_INTERFACE_H
#define CLI_INTERFACE_H

#ifdef __cplusplus
  extern "C" {
#endif

#include <stdint.h>

extern char cli_cmd_buff[];
extern char cli_rsp_buff[];

/* The command processer function prototype*/
typedef uint32_t (*pcmd_callback)(const char *parg);

typedef struct xCOMMAND_LINE_INPUT
{
	const char *const pcmd;
  const pcmd_callback pxCommandInterpreter;			
	const char * const phelp;
  
	int8_t cExpectedNumberOfParameters;
} cli_definition_t;


void myexample(void);


#ifdef __cplusplus
  }
#endif

#endif // CLI_INTERFACE_H
