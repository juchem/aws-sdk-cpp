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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/DateTime.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the forecast export job properties used in the
   * <a>ListForecastExportJobs</a> operation. To get the complete set of properties,
   * call the <a>DescribeForecastExportJob</a> operation, and provide the listed
   * <code>ForecastExportJobArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ForecastExportJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API ForecastExportJobSummary
  {
  public:
    ForecastExportJobSummary();
    ForecastExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    ForecastExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const{ return m_forecastExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline bool ForecastExportJobArnHasBeenSet() const { return m_forecastExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(const Aws::String& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(Aws::String&& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(const char* value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobArn(const Aws::String& value) { SetForecastExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobArn(Aws::String&& value) { SetForecastExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobArn(const char* value) { SetForecastExportJobArn(value); return *this;}


    /**
     * <p>The name of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobName() const{ return m_forecastExportJobName; }

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline bool ForecastExportJobNameHasBeenSet() const { return m_forecastExportJobNameHasBeenSet; }

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline void SetForecastExportJobName(const Aws::String& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = value; }

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline void SetForecastExportJobName(Aws::String&& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = std::move(value); }

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline void SetForecastExportJobName(const char* value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName.assign(value); }

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobName(const Aws::String& value) { SetForecastExportJobName(value); return *this;}

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobName(Aws::String&& value) { SetForecastExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the forecast export job.</p>
     */
    inline ForecastExportJobSummary& WithForecastExportJobName(const char* value) { SetForecastExportJobName(value); return *this;}


    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline const DataDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline ForecastExportJobSummary& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The path to the S3 bucket where the forecast is stored.</p>
     */
    inline ForecastExportJobSummary& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline ForecastExportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline ForecastExportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the forecast export job. One of the following states:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your Amazon S3 bucket.</p> </note>
     */
    inline ForecastExportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline ForecastExportJobSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline ForecastExportJobSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline ForecastExportJobSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the forecast export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the forecast export job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the forecast export job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the forecast export job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the forecast export job was created.</p>
     */
    inline ForecastExportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the forecast export job was created.</p>
     */
    inline ForecastExportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the last successful export job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>When the last successful export job finished.</p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>When the last successful export job finished.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>When the last successful export job finished.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>When the last successful export job finished.</p>
     */
    inline ForecastExportJobSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>When the last successful export job finished.</p>
     */
    inline ForecastExportJobSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_forecastExportJobArn;
    bool m_forecastExportJobArnHasBeenSet;

    Aws::String m_forecastExportJobName;
    bool m_forecastExportJobNameHasBeenSet;

    DataDestination m_destination;
    bool m_destinationHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
