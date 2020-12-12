/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedRenditionInfo : NSObject {
    void * _bitmap;
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyFormat;
}

- (id)archivedData;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (bool)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;
- (bool)contentPresentForAttribute:(int)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)decrementValue:(long long*)arg1 forAttribute:(int)arg2;
- (id)description;
- (bool)diverseContentPresentForAttribute:(int)arg1;
- (unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2;
- (unsigned short)getValueOfAttribute:(int)arg1;
- (void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3;
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedRenditionInfo:(id)arg1;
- (unsigned long long)numberOfBitsSet;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;

@end