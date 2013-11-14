//
//  NSManagedObject+EntityName.h
//  Example DataBase Project
//
//  Created by Adam Szeptycki on 13/11/13.
//  Copyright (c) 2013 Adam Szeptycki. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (NSManagedObject_EntityName)

+ (NSString*)entityName;

@end
