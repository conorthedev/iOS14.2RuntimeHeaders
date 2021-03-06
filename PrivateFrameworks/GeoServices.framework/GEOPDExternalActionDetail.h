/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {
    NSString * _actionLabel;
    NSString * _actionUrlComponent;
    NSString * _actionUrlVerb;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_actionLabel : 1; 
        unsigned int read_actionUrlComponent : 1; 
        unsigned int read_actionUrlVerb : 1; 
        unsigned int read_logoId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _logoId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic, retain) NSString *actionUrlComponent;
@property (nonatomic, retain) NSString *actionUrlVerb;
@property (nonatomic, readonly) bool hasActionLabel;
@property (nonatomic, readonly) bool hasActionUrlComponent;
@property (nonatomic, readonly) bool hasActionUrlVerb;
@property (nonatomic, readonly) bool hasLogoId;
@property (nonatomic, retain) NSString *logoId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)actionLabel;
- (id)actionUrlComponent;
- (id)actionUrlVerb;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionLabel;
- (bool)hasActionUrlComponent;
- (bool)hasActionUrlVerb;
- (bool)hasLogoId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)logoId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (void)setActionUrlComponent:(id)arg1;
- (void)setActionUrlVerb:(id)arg1;
- (void)setLogoId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
