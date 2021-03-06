/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {
    bool  _buttonDown;
    struct { 
        unsigned int usage : 1; 
        unsigned int usagePage : 1; 
        unsigned int buttonDown : 1; 
    }  _has;
    unsigned int  _usage;
    unsigned int  _usagePage;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
