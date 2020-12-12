/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2NoncePayload : NEIKEv2Payload {
    NSData * _nonce;
}

@property (retain) NSData *nonce;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (id)nonce;
- (bool)parsePayloadData;
- (void)setNonce:(id)arg1;
- (unsigned long long)type;

@end