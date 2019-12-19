/*
 * 20153230 안준홍
 * 서버 헤더 파일
 */
#include "info.h"

User userList[5];
Room roomList[5];

int sd;
int roomSd;
int roomCount = 0;
int rUsernum = 0;
pthread_mutex_t usermutex, roommutex;

void SignalExit(int no);
int ServerSetting(char *ip, int port);
void *JoinChat(void *user);
void *ConveyMessage(void *user);
void *Notice(void *user);
void ClientExit(User user);
void *ThreadMain(void *room);
void SendFile(User user, char *rbuf);