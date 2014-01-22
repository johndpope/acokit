//
//  ACOColorSwatchParser.h
//  ACOKit
//
//  Created by Markus Gasser on 22.01.14.
//  Copyright (c) 2014 konoma GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>


@class ACOColorSwatch;


@interface ACOColorSwatchParser : NSObject

+ (instancetype)defaultParser;

- (ACOColorSwatch *)parseColorSwatchFromFileAtURL:(NSURL *)fileURL error:(NSError **)error;
- (ACOColorSwatch *)parseColorSwatchFromStream:(NSInputStream *)stream error:(NSError **)error;

@end
