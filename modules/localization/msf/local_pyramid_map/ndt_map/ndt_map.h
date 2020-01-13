/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include "modules/localization/msf/local_pyramid_map/base_map/base_map.h"
#include "modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_config.h"
#include "modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_matrix.h"
#include "modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_node.h"

namespace apollo {
namespace localization {
namespace msf {
namespace pyramid_map {

class NdtMap : public BaseMap {
 public:
  explicit NdtMap(NdtMapConfig* config);
  ~NdtMap();
};

}  // namespace pyramid_map
}  // namespace msf
}  // namespace localization
}  // namespace apollo