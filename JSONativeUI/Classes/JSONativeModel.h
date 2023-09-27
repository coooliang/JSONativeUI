//// 
//  JSONativeModel.h
//  JSONativeUI
//  Created by ___ORGANIZATIONNAME___ on 2023/9/27
//

#import <Foundation/Foundation.h>

@interface JSONativeModelProperties : NSObject

@property (nonatomic,assign)CGFloat x;
@property (nonatomic,assign)CGFloat y;
@property (nonatomic,assign)CGFloat width;
@property (nonatomic,assign)CGFloat height;

@end

@interface JSONativeModel : NSObject

@property (nonatomic,copy)NSString *type;
@property (nonatomic,strong)JSONativeModelProperties *properties;
@property (nonatomic,strong)NSArray *subviews;

@end

