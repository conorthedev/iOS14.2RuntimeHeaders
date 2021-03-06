/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAGraphReference : NSObject {
    MABaseGraph * _concreteGraph;
    MABaseGraph * _graph;
    unsigned long long  _hash;
}

@property MABaseGraph *concreteGraph;
@property (readonly) MABaseGraph *graph;

- (void).cxx_destruct;
- (id)concreteGraph;
- (id)graph;
- (unsigned long long)hash;
- (id)initWithGraph:(id)arg1;
- (void)setConcreteGraph:(id)arg1;

@end
