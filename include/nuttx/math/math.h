/****************************************************************************
 * include/nuttx/math/math.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __INCLUDE_NUTTX_MATH_MATH_H
#define __INCLUDE_NUTTX_MATH_MATH_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/math/cordic.h>
#include <nuttx/math/fft.h>

/****************************************************************************
 * Public Types
 ****************************************************************************/

/* This math config struct provides the all "lower half" of math drivers.
 * Each will have an internal structure definition that will be
 * cast-compatible with this structure definitions.
 */

struct math_config_s
{
  FAR struct cordic_lowerhalf_s *cordic;
  FAR struct fft_lowerhalf_s    *fft;
};

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name: math_register
 *
 * Description:
 *   Register all math related drivers.
 *
 ****************************************************************************/

int math_register(FAR const char *path,
                  FAR const struct math_config_s *config);

#endif /* __INCLUDE_NUTTX_MATH_MATH_H */
