/*
 * Copyright (c) 2018 Trail of Bits, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <osquery/sdk.h>

extern "C" {
#include <libiptc/libip6tc.h>
}

#include "utils.h"

namespace trailofbits {
class Ip6tablesPoliciesTable : public IptablesPoliciesBase {
 public:
  osquery::QueryData generate(osquery::QueryContext& context);

 private:
  void genIptablesPolicy(const std::string& filter,
                         osquery::QueryData& results);
};
} // namespace trailofbits

using Ip6tablesPoliciesTable = trailofbits::Ip6tablesPoliciesTable;
