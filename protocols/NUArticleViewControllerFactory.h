/* Generated by RuntimeBrowser.
 */

@protocol NUArticleViewControllerFactory <NSObject>

@required

- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 context:(NUArticleContext *)arg2;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 context:(NUArticleContext *)arg2;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3;
- (NSHashTable *)loadingListeners;

@end