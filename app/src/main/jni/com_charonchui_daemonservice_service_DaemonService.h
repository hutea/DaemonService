/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_charonchui_daemonservice_service_DaemonService */

#ifndef _Included_com_charonchui_daemonservice_service_DaemonService
#define _Included_com_charonchui_daemonservice_service_DaemonService
#ifdef __cplusplus
extern "C" {
#endif
#undef com_charonchui_daemonservice_service_DaemonService_BIND_ABOVE_CLIENT
#define com_charonchui_daemonservice_service_DaemonService_BIND_ABOVE_CLIENT 8L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_ADJUST_WITH_ACTIVITY
#define com_charonchui_daemonservice_service_DaemonService_BIND_ADJUST_WITH_ACTIVITY 128L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_ALLOW_OOM_MANAGEMENT
#define com_charonchui_daemonservice_service_DaemonService_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_AUTO_CREATE
#define com_charonchui_daemonservice_service_DaemonService_BIND_AUTO_CREATE 1L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_DEBUG_UNBIND
#define com_charonchui_daemonservice_service_DaemonService_BIND_DEBUG_UNBIND 2L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_IMPORTANT
#define com_charonchui_daemonservice_service_DaemonService_BIND_IMPORTANT 64L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_NOT_FOREGROUND
#define com_charonchui_daemonservice_service_DaemonService_BIND_NOT_FOREGROUND 4L
#undef com_charonchui_daemonservice_service_DaemonService_BIND_WAIVE_PRIORITY
#define com_charonchui_daemonservice_service_DaemonService_BIND_WAIVE_PRIORITY 32L
#undef com_charonchui_daemonservice_service_DaemonService_CONTEXT_IGNORE_SECURITY
#define com_charonchui_daemonservice_service_DaemonService_CONTEXT_IGNORE_SECURITY 2L
#undef com_charonchui_daemonservice_service_DaemonService_CONTEXT_INCLUDE_CODE
#define com_charonchui_daemonservice_service_DaemonService_CONTEXT_INCLUDE_CODE 1L
#undef com_charonchui_daemonservice_service_DaemonService_CONTEXT_RESTRICTED
#define com_charonchui_daemonservice_service_DaemonService_CONTEXT_RESTRICTED 4L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_APPEND
#define com_charonchui_daemonservice_service_DaemonService_MODE_APPEND 32768L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define com_charonchui_daemonservice_service_DaemonService_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_MULTI_PROCESS
#define com_charonchui_daemonservice_service_DaemonService_MODE_MULTI_PROCESS 4L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_PRIVATE
#define com_charonchui_daemonservice_service_DaemonService_MODE_PRIVATE 0L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_WORLD_READABLE
#define com_charonchui_daemonservice_service_DaemonService_MODE_WORLD_READABLE 1L
#undef com_charonchui_daemonservice_service_DaemonService_MODE_WORLD_WRITEABLE
#define com_charonchui_daemonservice_service_DaemonService_MODE_WORLD_WRITEABLE 2L
#undef com_charonchui_daemonservice_service_DaemonService_START_CONTINUATION_MASK
#define com_charonchui_daemonservice_service_DaemonService_START_CONTINUATION_MASK 15L
#undef com_charonchui_daemonservice_service_DaemonService_START_FLAG_REDELIVERY
#define com_charonchui_daemonservice_service_DaemonService_START_FLAG_REDELIVERY 1L
#undef com_charonchui_daemonservice_service_DaemonService_START_FLAG_RETRY
#define com_charonchui_daemonservice_service_DaemonService_START_FLAG_RETRY 2L
#undef com_charonchui_daemonservice_service_DaemonService_START_NOT_STICKY
#define com_charonchui_daemonservice_service_DaemonService_START_NOT_STICKY 2L
#undef com_charonchui_daemonservice_service_DaemonService_START_REDELIVER_INTENT
#define com_charonchui_daemonservice_service_DaemonService_START_REDELIVER_INTENT 3L
#undef com_charonchui_daemonservice_service_DaemonService_START_STICKY
#define com_charonchui_daemonservice_service_DaemonService_START_STICKY 1L
#undef com_charonchui_daemonservice_service_DaemonService_START_STICKY_COMPATIBILITY
#define com_charonchui_daemonservice_service_DaemonService_START_STICKY_COMPATIBILITY 0L
/*
 * Class:     com_charonchui_daemonservice_service_DaemonService
 * Method:    startDaemon
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_charonchui_daemonservice_service_DaemonService_startDaemon
  (JNIEnv *, jobject, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif