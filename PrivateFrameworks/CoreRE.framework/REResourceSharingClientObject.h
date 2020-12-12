/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface REResourceSharingClientObject : NSObject <REResourceSharingService> {
    struct AssetService { int (**x1)(); } * _assetService;
    struct ResourceSharingManager { int (**x1)(); bool x2; struct AssetService {} *x3; struct Queue { id x_4_1_1; } x4; unsigned long long x5; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator {} *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; struct FetchRequest {} *x_6_1_5; } x6; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator {} *x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; struct Connection {} *x_7_1_5; } x7; } * _resourceSharingManager;
}

@property (nonatomic, readonly) struct AssetService { int (**x1)(); }*assetService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct ResourceSharingManager { int (**x1)(); bool x2; struct AssetService {} *x3; struct Queue { id x_4_1_1; } x4; unsigned long long x5; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator {} *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; struct FetchRequest {} *x_6_1_5; } x6; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator {} *x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; struct Connection {} *x_7_1_5; } x7; }*resourceSharingManager;
@property (readonly) Class superclass;

- (struct AssetService { int (**x1)(); }*)assetService;
- (void)fetchResourceAtAssetPath:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithAssetService:(struct AssetService { int (**x1)(); }*)arg1 resourceSharingManager:(struct ResourceSharingManager { int (**x1)(); bool x2; struct AssetService {} *x3; struct Queue { id x_4_1_1; } x4; unsigned long long x5; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator {} *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; struct FetchRequest {} *x_6_1_5; } x6; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator {} *x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; struct Connection {} *x_7_1_5; } x7; }*)arg2;
- (struct ResourceSharingManager { int (**x1)(); bool x2; struct AssetService {} *x3; struct Queue { id x_4_1_1; } x4; unsigned long long x5; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator {} *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; struct FetchRequest {} *x_6_1_5; } x6; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator {} *x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; struct Connection {} *x_7_1_5; } x7; }*)resourceSharingManager;

@end