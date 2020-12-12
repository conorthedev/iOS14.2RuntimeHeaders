/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSInlineDelegate : NSObject {
    NSMutableSet * _implementations;
    Protocol * _protocol;
}

@property (nonatomic, retain) NSMutableSet *implementations;
@property (nonatomic, retain) Protocol *protocol;

- (void).cxx_destruct;
- (bool)_implementMethodWithSelector:(SEL)arg1 isRequired:(bool)arg2 isInstance:(bool)arg3 block:(id)arg4;
- (id)_initWithProtocol:(id)arg1;
- (void)dealloc;
- (bool)implementOptionalClassMethodWithSelector:(SEL)arg1 block:(id)arg2;
- (bool)implementOptionalInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2;
- (bool)implementRequiredClassMethodWithSelector:(SEL)arg1 block:(id)arg2;
- (bool)implementRequiredInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2;
- (id)implementations;
- (id)initWithProtocol:(id)arg1;
- (id)protocol;
- (void)setImplementations:(id)arg1;
- (void)setProtocol:(id)arg1;

@end