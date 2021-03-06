/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "GenericTraceActivity.h"
#include "output_base.h"

using namespace libkineto;

namespace KINETO_NAMESPACE {
  void GenericTraceActivity::log(ActivityLogger& logger) const {
    logger.handleGenericActivity(*this);
  }
} // namespace KINETO_NAMESPACE
