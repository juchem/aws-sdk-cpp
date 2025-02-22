﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * A collection of resources of the same type<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ResourceSetOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API ResourceSetOutput
  {
  public:
    ResourceSetOutput();
    ResourceSetOutput(Aws::Utils::Json::JsonView jsonValue);
    ResourceSetOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The arn for the ResourceSet
     */
    inline const Aws::String& GetResourceSetArn() const{ return m_resourceSetArn; }

    /**
     * The arn for the ResourceSet
     */
    inline bool ResourceSetArnHasBeenSet() const { return m_resourceSetArnHasBeenSet; }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(const Aws::String& value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn = value; }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(Aws::String&& value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn = std::move(value); }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(const char* value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn.assign(value); }

    /**
     * The arn for the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetArn(const Aws::String& value) { SetResourceSetArn(value); return *this;}

    /**
     * The arn for the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetArn(Aws::String&& value) { SetResourceSetArn(std::move(value)); return *this;}

    /**
     * The arn for the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetArn(const char* value) { SetResourceSetArn(value); return *this;}


    /**
     * The name of the ResourceSet
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * The name of the ResourceSet
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * The name of the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * The name of the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * The name of the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}


    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline const Aws::String& GetResourceSetType() const{ return m_resourceSetType; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline bool ResourceSetTypeHasBeenSet() const { return m_resourceSetTypeHasBeenSet; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const Aws::String& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = value; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(Aws::String&& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = std::move(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const char* value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType.assign(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetType(const Aws::String& value) { SetResourceSetType(value); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetType(Aws::String&& value) { SetResourceSetType(std::move(value)); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline ResourceSetOutput& WithResourceSetType(const char* value) { SetResourceSetType(value); return *this;}


    /**
     * A list of Resource objects
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * A list of Resource objects
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * A list of Resource objects
     */
    inline ResourceSetOutput& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * A list of Resource objects
     */
    inline ResourceSetOutput& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * A list of Resource objects
     */
    inline ResourceSetOutput& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * A list of Resource objects
     */
    inline ResourceSetOutput& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline ResourceSetOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline ResourceSetOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline ResourceSetOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline ResourceSetOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline ResourceSetOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline ResourceSetOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline ResourceSetOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline ResourceSetOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline ResourceSetOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceSetArn;
    bool m_resourceSetArnHasBeenSet;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet;

    Aws::String m_resourceSetType;
    bool m_resourceSetTypeHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
