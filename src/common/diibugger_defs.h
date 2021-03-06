#ifndef DIIBUGGER_DEFS_H
#define	DIIBUGGER_DEFS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define STACK_SIZE 0x8000
#define MESSAGE_COUNT 4
#define NUM_FILE_HANDLES 4

#define TRAP 0x7FE00008

#define BREAKPOINT_LIST_SIZE            12
#define BREAKPOINT_LIST_SIZE_USABLE     (BREAKPOINT_LIST_SIZE - 2)

#define STEP1                           (BREAKPOINT_LIST_SIZE-2)
#define STEP2                           (BREAKPOINT_LIST_SIZE-1)

#define SERVER_MESSAGE_DSI 0
#define SERVER_MESSAGE_ISI 1
#define SERVER_MESSAGE_PROGRAM 2
#define SERVER_MESSAGE_GET_STAT 3
#define SERVER_MESSAGE_OPEN_FILE 4
#define SERVER_MESSAGE_READ_FILE 5
#define SERVER_MESSAGE_CLOSE_FILE 6
#define SERVER_MESSAGE_SET_POS_FILE 7
#define SERVER_MESSAGE_GET_STAT_FILE 8
#define SERVER_MESSAGE_WRITE_FILE 9

#define CLIENT_MESSAGE_CONTINUE 0
#define CLIENT_MESSAGE_STEP 1
#define CLIENT_MESSAGE_STEP_OVER 2

#define STEP_STATE_RUNNING 0
#define STEP_STATE_CONTINUE 1
#define STEP_STATE_STEPPING 2

#define CRASH_STATE_NONE 0
#define CRASH_STATE_UNRECOVERABLE 1
#define CRASH_STATE_BREAKPOINT 2

struct breakpoint {
    uint32_t address;
    uint32_t instruction;
};

#ifdef __cplusplus
}
#endif

#endif	/* DIIBUGGER_DEFS_H */
