/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int has_supportsMultipleAddresses : 1; 
        unsigned int read_personID : 1; 
        unsigned int read_token : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _personID;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _supportsMultipleAddresses;
    NSString * _token;
}

@property (nonatomic, readonly) bool hasPersonID;
@property (nonatomic) bool hasSupportsMultipleAddresses;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) bool supportsMultipleAddresses;
@property (nonatomic, retain) NSString *token;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPersonID;
- (bool)hasSupportsMultipleAddresses;
- (bool)hasToken;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)personID;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasSupportsMultipleAddresses:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setSupportsMultipleAddresses:(bool)arg1;
- (void)setToken:(id)arg1;
- (bool)supportsMultipleAddresses;
- (id)token;
- (void)writeTo:(id)arg1;

@end
