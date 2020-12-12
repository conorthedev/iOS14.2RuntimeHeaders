/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    bool  _allowsAllCalendars;
    NSArray * _calendarStates;
    id  _defaultSerializedCalendarRepresentation;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) bool allowsAllCalendars;
@property (nonatomic, retain) NSArray *calendarStates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) id defaultSerializedCalendarRepresentation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsAllCalendars;
- (id)calendarStates;
- (void)clearPossibleStates;
- (id)defaultSerializedCalendarRepresentation;
- (id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)possibleStatesDidChange;
- (void)setCalendarStates:(id)arg1;
- (void)setDefaultSerializedCalendarRepresentation:(id)arg1;
- (Class)singleStateClass;
- (id)stateQueue;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end