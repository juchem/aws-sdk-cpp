﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/StandardIdentifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StandardIdentifierMapper
      {

        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
        static const int UNIQUE_HASH = HashingUtils::HashString("UNIQUE");
        static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");
        static const int LOOKUP_ONLY_HASH = HashingUtils::HashString("LOOKUP_ONLY");
        static const int NEW_ONLY_HASH = HashingUtils::HashString("NEW_ONLY");


        StandardIdentifier GetStandardIdentifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_HASH)
          {
            return StandardIdentifier::PROFILE;
          }
          else if (hashCode == UNIQUE_HASH)
          {
            return StandardIdentifier::UNIQUE;
          }
          else if (hashCode == SECONDARY_HASH)
          {
            return StandardIdentifier::SECONDARY;
          }
          else if (hashCode == LOOKUP_ONLY_HASH)
          {
            return StandardIdentifier::LOOKUP_ONLY;
          }
          else if (hashCode == NEW_ONLY_HASH)
          {
            return StandardIdentifier::NEW_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardIdentifier>(hashCode);
          }

          return StandardIdentifier::NOT_SET;
        }

        Aws::String GetNameForStandardIdentifier(StandardIdentifier enumValue)
        {
          switch(enumValue)
          {
          case StandardIdentifier::PROFILE:
            return "PROFILE";
          case StandardIdentifier::UNIQUE:
            return "UNIQUE";
          case StandardIdentifier::SECONDARY:
            return "SECONDARY";
          case StandardIdentifier::LOOKUP_ONLY:
            return "LOOKUP_ONLY";
          case StandardIdentifier::NEW_ONLY:
            return "NEW_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandardIdentifierMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
