//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"
#import "KWMatcher.h"

@interface KWBeKindOfClassMatcher : KWMatcher {
@private
    Class targetClass;
}

#pragma mark -
#pragma mark Configuring Matchers

- (void) beKindOfClass:(Class)aClass;

@end
