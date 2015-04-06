//
//  ToDoItem.h
//  ToDoList
//
//  Created by Manuel Zambrano on 06/04/15.
//  Copyright (c) 2015 Manuel Zambrano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
