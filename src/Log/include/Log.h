#ifndef LYW_CODE_LOG
#define LYW_CODE_LOG
#include <stdio.h>
#include <pthread.h>

typedef enum _Log_Level
{
    ERROR_LEVEL,
    WARNING_LEVEL,
    DEBUG_LEVEL

} TLog_Level;


typedef enum _Log_Mode
{
    SCK_MODE,
    PTHREAD_MODE
} TLog_Mode;

typedef struct _Log_Info
{    
    FILE * file_hanlde; 
    pthread_mutex_t lock;
    TLog_Level level;
    TLog_Mode mode;
    unsigned int size;
    char szLogPath[64];
    char szLogName[128];
    int port;
    char ip[64];

} TLog_Info, * PLog_Info;

TLog_Info _g_log_info;
PLog_Info _g_p_log_info = &_g_log_info;

/*
 * @breif       生成固定格的时间串
 *
 * @param[out]  输出时间串 
 * @param[in]   输出时间串的size
 *
 * return       true 成功  false  失败
 */
bool Get_Str_time_for_log ( char * szStrTime, unsigned int iSizeOfStrTime );


/*
 * @breif            创建目录
 * @param[in]        目录 
 *
 * @return           true 成功 false 失败 
 */
static bool mkdir_for_log(const char * szFilePath);


bool create_file_for_log(const char * szFilePath,const char * szFileName);

bool Init_Log(const char *szFileName, const char * szFilePath,TLog_Level level,unsigned int size,TLog_Mode mode);

bool Free_Log();


#define Init_Log(FileName,FilePath,size,mode) \
    Init_Log(const char *szFileName, const char * szFilePath,unsigned int size,TLog_Mode mode);
        
#define UserError()
#define UserWarning()
#define UserDebug()
#define UserError_ASC()
#define UserWarning_ASC()
#define UserDebug_ASC()

#endif