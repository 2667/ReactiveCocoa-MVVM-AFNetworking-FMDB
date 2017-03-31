//
//  ArticleModel.h
//  ReactiveCocoa-MVVM-AFNetworking-FMDB
//
//  Created by TangJR on 10/22/15.
//  Copyright © 2015 tangjr. All rights reserved.
//

#import "BaseModel.h"

@interface ArticleModel : BaseModel

@property (copy, nonatomic) NSNumber *articleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

@end
