/* Generated by RuntimeBrowser.
 */

@protocol HDSPIDSService <NSObject>

@required

- (void)addDelegate:(id <IDSServiceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (bool)sendMessage:(NSDictionary *)arg1 toDestinations:(NSSet *)arg2 priority:(long long)arg3 options:(NSDictionary *)arg4 identifier:(id*)arg5 error:(id*)arg6;

@end