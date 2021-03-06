//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"
#import "KWMatcher.h"

@interface KWBeIdenticalToMatcher : KWMatcher {
@private
    id otherSubject;
}

#pragma mark -
#pragma mark Configuring Matchers

- (void) beIdenticalTo:(id)anObject;

@end
