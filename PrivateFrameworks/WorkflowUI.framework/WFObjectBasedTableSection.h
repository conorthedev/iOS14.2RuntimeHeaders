/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFObjectBasedTableSection : WFTableSection {
    Class  _cellClass;
    long long  _cellStyle;
    id /* block */  _configurationBlock;
}

@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) id /* block */ configurationBlock;

- (void).cxx_destruct;
- (void)addRepresentedObject:(id)arg1;
- (Class)cellClass;
- (long long)cellStyle;
- (id /* block */)configurationBlock;
- (id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 representedObjects:(id)arg3 configurationBlock:(id /* block */)arg4;
- (void)setRepresentedObjects:(id)arg1;

@end