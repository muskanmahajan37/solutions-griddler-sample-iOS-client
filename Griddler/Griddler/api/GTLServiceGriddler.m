/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2013 Google Inc.
 */

//
//  GTLServiceGriddler.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   griddler/v1
// Description:
//   Griddler API
// Classes:
//   GTLServiceGriddler (0 custom class methods, 0 custom properties)

#import "GTLGriddler.h"

@implementation GTLServiceGriddler

#if DEBUG
// Method compiled in debug builds just to check that all the needed support
// classes are present at link time.
+ (NSArray *)checkClasses {
  NSArray *classes = [NSArray arrayWithObjects:
                      [GTLQueryGriddler class],
                      [GTLGriddlerBoard class],
                      [GTLGriddlerGame class],
                      [GTLGriddlerGamePlay class],
                      [GTLGriddlerGamePlayStatus class],
                      [GTLGriddlerInvitation class],
                      [GTLGriddlerPlayer class],
                      [GTLGriddlerPlayerCollection class],
                      [GTLGriddlerPlayerStatistics class],
                      nil];
  return classes;
}
#endif  // DEBUG

- (id)init {
  self = [super init];
  if (self) {
    // Version from discovery.
    self.apiVersion = @"v1";

    // From discovery.  Where to send JSON-RPC.
    // Turn off prettyPrint for this service to save bandwidth (especially on
    // mobile). The fetcher logging will pretty print.
    self.rpcURL = [NSURL URLWithString:@"https://griddler-testing.appspot.com/_ah/api/rpc?prettyPrint=false"];
  }
  return self;
}

@end
