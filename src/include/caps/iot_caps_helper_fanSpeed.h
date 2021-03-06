/* ***************************************************************************
 *
 * Copyright 2019-2020 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef _IOT_CAPS_HELPER_FAN_SPEED_
#define _IOT_CAPS_HELPER_FAN_SPEED_

#include "iot_caps_helper.h"

#ifdef __cplusplus
extern "C" {
#endif

const static struct iot_caps_fanSpeed {
    const char *id;
    const struct fanSpeed_attr_fanSpeed {
        const char *name;
        const unsigned char property;
        const unsigned char value_type;
        const int min;
    } attr_fanSpeed;
    const struct fanSpeed_cmd_setFanSpeed { const char* name; } cmd_setFanSpeed;
} caps_helper_fanSpeed = {
    .id = "fanSpeed",
    .attr_fanSpeed = {
        .name = "fanSpeed",
        .property = ATTR_SET_VALUE_MIN | ATTR_SET_VALUE_REQUIRED,
        .value_type = VALUE_TYPE_INTEGER,
        .min = 0,
    },
    .cmd_setFanSpeed = { .name = "setFanSpeed" }, // arguments: speed(integer) 
};

#ifdef __cplusplus
}
#endif

#endif /* _IOT_CAPS_HERLPER_FAN_SPEED_ */
