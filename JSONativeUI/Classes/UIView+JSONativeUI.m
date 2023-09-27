//// 
//  UIView+JSONativeUI.m
//  Pods-oc-quick-start
//  Created by ___ORGANIZATIONNAME___ on 2023/9/27
//

#import "UIView+JSONativeUI.h"
#import "YYModel.h"
#import "JSONativeModel.h"

@implementation UIView (JSONativeUI)

+ (UIView *)jn_json2View:(NSString *)json {
    JSONativeModel *model = [JSONativeModel yy_modelWithJSON:json];
    
    return nil;
}

@end
