#ifndef CLI_PORT_H
#define CLI_PORT_H

#ifdef __cplusplus
  extern "C" {
#endif

int cli_read_cmd(char *cmd);
void cli_write_rsp(char *rsp);

#ifdef __cplusplus
  }
#endif

#endif // CLI_PORT_H