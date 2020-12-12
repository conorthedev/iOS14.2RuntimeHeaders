/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface _BPSMerged : BPSSubscription {
    NSMutableArray * _activeSubscriptions;
    NSMutableArray * _buffers;
    long long  _count;
    long long  _demand;
    <BPSSubscriber> * _downstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _downstreamLock;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _pending;
    bool  _recursive;
    NSMutableArray * _subscriptions;
    bool  _terminated;
    long long  _upstreamFinished;
}

@property (nonatomic, retain) NSMutableArray *activeSubscriptions;
@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) long long count;
@property (nonatomic) long long demand;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool finished;
@property (nonatomic) long long pending;
@property (nonatomic) bool recursive;
@property (nonatomic, retain) NSMutableArray *subscriptions;
@property (nonatomic) bool terminated;
@property (nonatomic) long long upstreamFinished;

- (void).cxx_destruct;
- (id)activeSubscriptions;
- (id)applyDownstreamWhileLocked:(bool)arg1 apply:(id /* block */)arg2;
- (id)buffers;
- (void)cancel;
- (long long)count;
- (long long)demand;
- (id)downstream;
- (bool)finished;
- (id)initWithDownstream:(id)arg1 count:(long long)arg2;
- (long long)pending;
- (void)receiveCompletion:(id)arg1 atIndex:(long long)arg2;
- (long long)receiveInput:(id)arg1 atIndex:(long long)arg2;
- (void)receiveSubscription:(id)arg1 atIndex:(long long)arg2;
- (bool)recursive;
- (void)requestDemand:(long long)arg1;
- (void)setActiveSubscriptions:(id)arg1;
- (void)setBuffers:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPending:(long long)arg1;
- (void)setRecursive:(bool)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setTerminated:(bool)arg1;
- (void)setUpstreamFinished:(long long)arg1;
- (id)subscriptions;
- (bool)terminated;
- (long long)upstreamFinished;
- (id)upstreamSubscriptions;

@end