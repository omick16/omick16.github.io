//
//  KCTVC.h
//  Thesis
//
//  Created by Kromyko Cruzado on 10/07/2018.
//  Copyright © 2018 Ateneo de Davao University. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KCTVC : UITableViewController

@property NSString *remoteSource;
@property NSMutableArray *rowData;

- (void)setData;

@end

NS_ASSUME_NONNULL_END
