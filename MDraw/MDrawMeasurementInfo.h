//
//  MDrawMeasurementInfo.h
//  MDraw
//
//  Created by Gao Yongqing on 9/5/14.
//  Copyright (c) 2014 Motic China Group Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MDrawTool;

/**
 *  Show measurement info for tools.
 */
@interface MDrawMeasurementInfo : NSObject

@property (nonatomic,weak,readonly) MDrawTool *tool;

- (instancetype)initWithTool:(MDrawTool *)aTool;

@end
