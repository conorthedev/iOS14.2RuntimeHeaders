/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateUser : PBCodable <NSCopying> {
    struct { 
        unsigned int has_mapsUseLastDate : 1; 
        unsigned int has_mapsUseStartDate : 1; 
        unsigned int has_syncFirstTimestamp : 1; 
        unsigned int has_syncLastTimestamp : 1; 
        unsigned int has_isTourist : 1; 
        unsigned int read_homeCountryCode : 1; 
        unsigned int read_homeMetroRegion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _homeCountryCode;
    NSString * _homeMetroRegion;
    bool  _isTourist;
    double  _mapsUseLastDate;
    double  _mapsUseStartDate;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _syncFirstTimestamp;
    double  _syncLastTimestamp;
}

@property (nonatomic, readonly) bool hasHomeCountryCode;
@property (nonatomic, readonly) bool hasHomeMetroRegion;
@property (nonatomic) bool hasIsTourist;
@property (nonatomic) bool hasMapsUseLastDate;
@property (nonatomic) bool hasMapsUseStartDate;
@property (nonatomic) bool hasSyncFirstTimestamp;
@property (nonatomic) bool hasSyncLastTimestamp;
@property (nonatomic, retain) NSString *homeCountryCode;
@property (nonatomic, retain) NSString *homeMetroRegion;
@property (nonatomic) bool isTourist;
@property (nonatomic) double mapsUseLastDate;
@property (nonatomic) double mapsUseStartDate;
@property (nonatomic) double syncFirstTimestamp;
@property (nonatomic) double syncLastTimestamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHomeCountryCode;
- (bool)hasHomeMetroRegion;
- (bool)hasIsTourist;
- (bool)hasMapsUseLastDate;
- (bool)hasMapsUseStartDate;
- (bool)hasSyncFirstTimestamp;
- (bool)hasSyncLastTimestamp;
- (unsigned long long)hash;
- (id)homeCountryCode;
- (id)homeMetroRegion;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTourist;
- (id)jsonRepresentation;
- (double)mapsUseLastDate;
- (double)mapsUseStartDate;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTourist:(bool)arg1;
- (void)setHasMapsUseLastDate:(bool)arg1;
- (void)setHasMapsUseStartDate:(bool)arg1;
- (void)setHasSyncFirstTimestamp:(bool)arg1;
- (void)setHasSyncLastTimestamp:(bool)arg1;
- (void)setHomeCountryCode:(id)arg1;
- (void)setHomeMetroRegion:(id)arg1;
- (void)setIsTourist:(bool)arg1;
- (void)setMapsUseLastDate:(double)arg1;
- (void)setMapsUseStartDate:(double)arg1;
- (void)setSyncFirstTimestamp:(double)arg1;
- (void)setSyncLastTimestamp:(double)arg1;
- (double)syncFirstTimestamp;
- (double)syncLastTimestamp;
- (void)writeTo:(id)arg1;

@end