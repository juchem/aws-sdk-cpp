﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYREADINESS_API ListTagsForResourcesRequest : public Route53RecoveryReadinessRequest
  {
  public:
    ListTagsForResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResources"; }

    Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline ListTagsForResourcesRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline ListTagsForResourcesRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the resource. You can get this from the
     * response to any request to the resource.
     */
    inline ListTagsForResourcesRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
