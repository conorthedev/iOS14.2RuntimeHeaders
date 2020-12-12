/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
 */

@interface ATXModePBEvent : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int intValue : 1; 
        unsigned int mode : 1; 
    }  _has;
    int  _intValue;
    NSString * _jsonMeta;
    int  _mode;
    double  _startDate;
    NSString * _strValue;
    int  _type;
    NSString * _uuid;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasIntValue;
@property (nonatomic, readonly) bool hasJsonMeta;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasStrValue;
@property (nonatomic) int intValue;
@property (nonatomic, retain) NSString *jsonMeta;
@property (nonatomic) int mode;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSString *strValue;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsMode:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasIntValue;
- (bool)hasJsonMeta;
- (bool)hasMode;
- (bool)hasStartDate;
- (bool)hasStrValue;
- (unsigned long long)hash;
- (int)intValue;
- (bool)isEqual:(id)arg1;
- (id)jsonMeta;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setIntValue:(int)arg1;
- (void)setJsonMeta:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setStartDate:(double)arg1;
- (void)setStrValue:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (id)strValue;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end