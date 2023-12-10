/*
 * Copyright (c) 2016-present The ZLMediaKit project authors. All Rights Reserved.
 *
 * This file is part of ZLMediaKit(https://github.com/ZLMediaKit/ZLMediaKit).
 *
 * Use of this source code is governed by MIT-like license that can be found in the
 * LICENSE file in the root of the source tree. All contributing project authors
 * may be found in the AUTHORS file in the root of the source tree.
 */

#include "Extension/Factory.h"


namespace mediakit {

extern CodecPlugin h264_plugin;
extern CodecPlugin h265_plugin;
extern CodecPlugin jpeg_plugin;
extern CodecPlugin aac_plugin;
extern CodecPlugin opus_plugin;
extern CodecPlugin g711a_plugin;
extern CodecPlugin g711u_plugin;
extern CodecPlugin l16_plugin;

REGISTER_CODEC(h264_plugin);
REGISTER_CODEC(h265_plugin);
REGISTER_CODEC(jpeg_plugin);
REGISTER_CODEC(aac_plugin);
REGISTER_CODEC(opus_plugin);
REGISTER_CODEC(g711a_plugin)
REGISTER_CODEC(g711u_plugin);
REGISTER_CODEC(l16_plugin);

}//namespace mediakit