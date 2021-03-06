/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface RevisionLogInclusionProofResponse : GPBMessage

@property (nonatomic) bool hasTopLevelTreeEntry;
@property (nonatomic, retain) NSMutableArray *logEntryArray;
@property (nonatomic, readonly) unsigned long long logEntryArray_Count;
@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (nonatomic, retain) LogEntry *topLevelTreeEntry;

+ (id)descriptor;

- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;

@end
