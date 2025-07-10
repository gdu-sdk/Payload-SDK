/**
 ********************************************************************
 * @file    gdu_sdk_app_info.h
 * @brief   This is the header file for defining the structure and (exported) function prototypes.
 *
 * @copyright (c) 2018 GDU. All rights reserved.
 *
 * All information contained herein is, and remains, the property of GDU.
 * The intellectual and technical concepts contained herein are proprietary
 * to GDU and may be covered by U.S. and foreign patents, patents in process,
 * and protected by trade secret or copyright law.  Dissemination of this
 * information, including but not limited to data and other proprietary
 * material(s) incorporated within the information, in any form, is strictly
 * prohibited without the express written consent of GDU.
 *
 * If you receive this source code without GDU’s authorization, you may not
 * further disseminate the information, and you must immediately remove the
 * source code and notify GDU of its removal. GDU reserves the right to pursue
 * legal actions against you for any loss(es) or damage(s) caused by your
 * failure to do so.
 *
 *********************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef GDU_SDK_APP_INFO_H
#define GDU_SDK_APP_INFO_H

/* Includes ------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

/* Exported constants --------------------------------------------------------*/
// ATTENTION: S400 serial aircraft if you use bottom port link your device USER_BAUD_RATE use 460800 else USER_BAUD_RATE use 230400  
//S200 serial aircraft USER_BAUD_RATE 230400
#if 0
#define USER_APP_NAME               "your_app_name"
#define USER_APP_ID                 "your_app_id"
#define USER_APP_KEY                "your_app_key"
#define USER_APP_LICENSE            "your_app_license"
#define USER_DEVELOPER_ACCOUNT      "your_developer_account"
#define USER_BAUD_RATE              "460800"
#endif

#define USER_APP_NAME               "t-psdk"
#define USER_APP_ID                 "1151"
#define USER_APP_KEY                "2590d91a28cef"
#define USER_APP_LICENSE            "lmkFJjtKQ=="
#define USER_DEVELOPER_ACCOUNT      "1234567789@qq.com"
#define USER_BAUD_RATE              "460800"

/* Exported types ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif // GDU_SDK_APP_INFO_H
/************************ (C) COPYRIGHT GDU Innovations *******END OF FILE******/
