/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 ************************************************************************
 * @file         M4OSA_Semaphore.h
 * @ingroup      OSAL
 * @brief        semaphore API
 ************************************************************************
*/

#ifndef M4OSA_SEMAPHORE_H
#define M4OSA_SEMAPHORE_H

#include "M4OSA_Types.h"
#include "M4OSA_Error.h"

#ifdef __cplusplus
extern "C"
{
#endif

M4OSAL_REALTIME_EXPORT_TYPE M4OSA_ERR M4OSA_semaphoreOpen(  M4OSA_Context* context,
                                M4OSA_UInt32   initialNumber );


M4OSAL_REALTIME_EXPORT_TYPE M4OSA_ERR M4OSA_semaphorePost(  M4OSA_Context  context );


M4OSAL_REALTIME_EXPORT_TYPE M4OSA_ERR M4OSA_semaphoreWait(  M4OSA_Context  context,
                                M4OSA_Int32    timeout );


M4OSAL_REALTIME_EXPORT_TYPE M4OSA_ERR M4OSA_semaphoreClose( M4OSA_Context  context );

#ifdef __cplusplus
}
#endif


#endif /*M4OSA_SEMAPHORE_H*/

