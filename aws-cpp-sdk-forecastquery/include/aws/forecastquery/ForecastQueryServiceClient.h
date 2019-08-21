﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/forecastquery/ForecastQueryServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecastquery/model/QueryForecastResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ForecastQueryService
{

namespace Model
{
        class QueryForecastRequest;

        typedef Aws::Utils::Outcome<QueryForecastResult, Aws::Client::AWSError<ForecastQueryServiceErrors>> QueryForecastOutcome;

        typedef std::future<QueryForecastOutcome> QueryForecastOutcomeCallable;
} // namespace Model

  class ForecastQueryServiceClient;

    typedef std::function<void(const ForecastQueryServiceClient*, const Model::QueryForecastRequest&, const Model::QueryForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryForecastResponseReceivedHandler;

  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastQueryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ForecastQueryServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "forecastquery"; }


        /**
         * <p>Retrieves a forecast filtered by the supplied criteria.</p> <p>The criteria
         * is a key-value pair. The key is either <code>item_id</code> (or the equivalent
         * non-timestamp, non-target field) from the <code>TARGET_TIME_SERIES</code>
         * dataset, or one of the forecast dimensions specified as part of the
         * <code>FeaturizationConfig</code> object.</p> <p>By default, the complete date
         * range of the filtered forecast is returned. Optionally, you can request a
         * specific date range within the forecast.</p> <note> <p>The forecasts generated
         * by Amazon Forecast are in the same timezone as the dataset that was used to
         * create the predictor.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryForecastOutcome QueryForecast(const Model::QueryForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast filtered by the supplied criteria.</p> <p>The criteria
         * is a key-value pair. The key is either <code>item_id</code> (or the equivalent
         * non-timestamp, non-target field) from the <code>TARGET_TIME_SERIES</code>
         * dataset, or one of the forecast dimensions specified as part of the
         * <code>FeaturizationConfig</code> object.</p> <p>By default, the complete date
         * range of the filtered forecast is returned. Optionally, you can request a
         * specific date range within the forecast.</p> <note> <p>The forecasts generated
         * by Amazon Forecast are in the same timezone as the dataset that was used to
         * create the predictor.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryForecastOutcomeCallable QueryForecastCallable(const Model::QueryForecastRequest& request) const;

        /**
         * <p>Retrieves a forecast filtered by the supplied criteria.</p> <p>The criteria
         * is a key-value pair. The key is either <code>item_id</code> (or the equivalent
         * non-timestamp, non-target field) from the <code>TARGET_TIME_SERIES</code>
         * dataset, or one of the forecast dimensions specified as part of the
         * <code>FeaturizationConfig</code> object.</p> <p>By default, the complete date
         * range of the filtered forecast is returned. Optionally, you can request a
         * specific date range within the forecast.</p> <note> <p>The forecasts generated
         * by Amazon Forecast are in the same timezone as the dataset that was used to
         * create the predictor.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryForecastAsync(const Model::QueryForecastRequest& request, const QueryForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void QueryForecastAsyncHelper(const Model::QueryForecastRequest& request, const QueryForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ForecastQueryService
} // namespace Aws
