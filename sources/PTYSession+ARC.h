//
//  PTYSession+ARC.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 4/16/19.
//

#import "PTYSession.h"

NS_ASSUME_NONNULL_BEGIN

@interface PTYSession (ARC)

- (void)fetchAutoLogFilenameWithCompletion:(void (^)(NSString *filename))completion;
- (void)setTermIDIfPossible;
- (void)watchForPasteBracketingOopsieWithPrefix:(NSString *)prefix;

@end

NS_ASSUME_NONNULL_END
