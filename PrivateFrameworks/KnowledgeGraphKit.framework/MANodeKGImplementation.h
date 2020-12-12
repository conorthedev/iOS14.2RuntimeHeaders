/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MANodeKGImplementation : NSObject <MANodeImplementationProtocol> {
    MANode * _node;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEdge:(id)arg1;
- (id)anyEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (id)anyEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
- (id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (id)edgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (id)edgesOfType:(unsigned long long)arg1 withNode:(id)arg2;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(bool*)arg5 block:(id /* block */)arg6;
- (void)enumerateEdgesInDomains:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateNeighborNodesThroughEdgesInDomains:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateNeighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSiblingNodesThroughEdgesInDomains:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (bool)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
- (id)initWithNode:(id)arg1;
- (unsigned long long)memoryFootprint:(id)arg1;
- (id)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
- (id)neighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;
- (void)removeEdge:(id)arg1;
- (id)siblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;

@end