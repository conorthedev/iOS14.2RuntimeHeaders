/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerPool : NSObject {
    NSMutableDictionary * _containerSingletons;
    unsigned long long  _depth;
    unsigned long long  _drainDepth;
    NSMutableDictionary * _graph;
    bool  _objectGraphDrainingEnabled;
    NSMutableArray * _onDrainBlocks;
    NSMutableArray * _onDrainCopyPoolObjectGraphBlocks;
    NSMutableDictionary * _singletons;
}

@property (nonatomic, retain) NSMutableDictionary *containerSingletons;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long drainDepth;
@property (nonatomic, retain) NSMutableDictionary *graph;
@property (getter=isObjectGraphDrainingEnabled, nonatomic) bool objectGraphDrainingEnabled;
@property (nonatomic, retain) NSMutableArray *onDrainBlocks;
@property (nonatomic, retain) NSMutableArray *onDrainCopyPoolObjectGraphBlocks;
@property (getter=isPoolPreparedForLockingGraph, nonatomic, readonly) bool poolPreparedForLockingGraph;
@property (nonatomic, retain) NSMutableDictionary *singletons;

- (void).cxx_destruct;
- (id)containerSingletons;
- (id)copyWithObjectGraphDrainingDisabled;
- (unsigned long long)depth;
- (void)drain;
- (unsigned long long)drainDepth;
- (id)enter:(id /* block */)arg1;
- (id)graph;
- (id)init;
- (id)initWithSingletonPool:(id)arg1;
- (bool)isObjectGraphDrainingEnabled;
- (bool)isPoolPreparedForLockingGraph;
- (void)linkDepth:(id /* block */)arg1;
- (void)onDrain:(id /* block */)arg1;
- (id)onDrainBlocks;
- (void)onDrainCopyPoolObjectGraph:(id /* block */)arg1;
- (id)onDrainCopyPoolObjectGraphBlocks;
- (void)setContainerSingletons:(id)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setDrainDepth:(unsigned long long)arg1;
- (void)setGraph:(id)arg1;
- (void)setObjectGraphDrainingEnabled:(bool)arg1;
- (void)setOnDrainBlocks:(id)arg1;
- (void)setOnDrainCopyPoolObjectGraphBlocks:(id)arg1;
- (void)setSingletons:(id)arg1;
- (id)singletons;

@end