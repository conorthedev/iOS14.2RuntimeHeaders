/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSectionModel : NSObject {
    NSArray * _actions;
    _SFBannerModel * _banner;
    id /* block */  _configurationProvider;
    _SFBannerModel * _contentBanner;
    id /* block */  _contextMenuCommitHandler;
    id /* block */  _contextMenuProvider;
    id  _identifier;
    NSArray * _itemIdentifiers;
    long long  _itemType;
    long long  _numberOfRowsVisibleWhenCollapsed;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly) _SFBannerModel *banner;
@property (nonatomic, readonly) _SFBannerModel *contentBanner;
@property (nonatomic, copy) id /* block */ contextMenuCommitHandler;
@property (nonatomic, copy) id /* block */ contextMenuProvider;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsed;
@property (nonatomic, readonly) id /* block */ siteCardConfigurationProvider;
@property (nonatomic, readonly) id /* block */ siteIconConfigurationProvider;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)bannerSectionWithIdentifier:(id)arg1 banner:(id)arg2;
+ (id)siteCardSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(id /* block */)arg6;
+ (id)siteIconSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)actions;
- (id)banner;
- (id)contentBanner;
- (id /* block */)contextMenuCommitHandler;
- (id /* block */)contextMenuProvider;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 itemType:(long long)arg5 itemIdentifiers:(id)arg6 configurationProvider:(id /* block */)arg7;
- (id)itemIdentifiers;
- (long long)itemType;
- (long long)numberOfRowsVisibleWhenCollapsed;
- (void)setContextMenuCommitHandler:(id /* block */)arg1;
- (void)setContextMenuProvider:(id /* block */)arg1;
- (void)setNumberOfRowsVisibleWhenCollapsed:(long long)arg1;
- (id /* block */)siteCardConfigurationProvider;
- (id /* block */)siteIconConfigurationProvider;
- (id)title;

@end