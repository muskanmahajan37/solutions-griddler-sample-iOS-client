/* Copyright (c) 2013 Google Inc.
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

//
//  GTLYouTubeChannelSettings.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeChannelSettings (0 custom class methods, 11 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSettings
//

// Branding properties for the channel view.

@interface GTLYouTubeChannelSettings : GTLObject
@property (copy) NSString *defaultTab;

// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

@property (copy) NSString *featuredChannelsTitle;
@property (retain) NSArray *featuredChannelsUrls;  // of NSString
@property (copy) NSString *keywords;
@property (retain) NSNumber *moderateComments;  // boolValue
@property (retain) NSNumber *showBrowseView;  // boolValue
@property (retain) NSNumber *showRelatedChannels;  // boolValue
@property (copy) NSString *title;
@property (copy) NSString *trackingAnalyticsAccountId;
@property (copy) NSString *unsubscribedTrailer;
@end
