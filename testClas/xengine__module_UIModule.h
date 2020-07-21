//
//  __xengine__module_UIModule.h
//  UIModule
//
//  Created by edz on 2020/7/21.
//  Copyright © 2020 edz. All rights reserved.
//

#import "xengine__module_BaseModule.h"
#import "JSONToDictionary.h"
#import "DWKWebView.h"
#import "Unity.h"
#import "LSRFramework.h"
#import "MBProgressHUD+Toast.h"
NS_ASSUME_NONNULL_BEGIN

@interface xengine__module_UIModule : xengine__module_BaseModule
- (NSString *)moduleId;
- (void)showSuccessToast:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)showFailToast:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)showToast:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)hiddenToast:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)hiddenHudToast:(UIView *)view;
- (void)showLoading:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)hiddenLoading:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)showModal:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
- (void)showActionSheet:(NSString *)jsonString complate:(XEngineCallBack)completionHandler;
@end

NS_ASSUME_NONNULL_END
