//---------------------------------------------------------------------------------------
//  EDEntityFieldCoder.h created by erik
//  @(#)$Id: EDEntityFieldCoder.h,v 2.0 2002-08-16 18:24:14 erik Exp $
//
//  Copyright (c) 1999 by Erik Doernenburg. All rights reserved.
//
//  Permission to use, copy, modify and distribute this software and its documentation
//  is hereby granted, provided that both the copyright notice and this permission
//  notice appear in all copies of the software, derivative works or modified versions,
//  and any portions thereof, and that both notices appear in supporting documentation,
//  and that credit is given to Erik Doernenburg in all documents and publicity
//  pertaining to direct or indirect use of this code or its derivatives.
//
//  THIS IS EXPERIMENTAL SOFTWARE AND IT IS KNOWN TO HAVE BUGS, SOME OF WHICH MAY HAVE
//  SERIOUS CONSEQUENCES. THE COPYRIGHT HOLDER ALLOWS FREE USE OF THIS SOFTWARE IN ITS
//  "AS IS" CONDITION. THE COPYRIGHT HOLDER DISCLAIMS ANY LIABILITY OF ANY KIND FOR ANY
//  DAMAGES WHATSOEVER RESULTING DIRECTLY OR INDIRECTLY FROM THE USE OF THIS SOFTWARE
//  OR OF ANY DERIVATIVE WORK.
//---------------------------------------------------------------------------------------


#ifndef	__EDEntityFieldCoder_h_INCLUDE
#define	__EDEntityFieldCoder_h_INCLUDE


#import "EDHeaderFieldCoder.h"


@interface EDEntityFieldCoder : EDHeaderFieldCoder
{
    NSArray			*values;
    NSDictionary	*parameters;
}

+ (id)encoderWithValues:(NSArray *)someValues andParameters:(NSDictionary *)someParameters;
- (id)initWithValues:(NSArray *)someValues andParameters:(NSDictionary *)someParameters;
- (NSArray *)values;
- (NSDictionary *)parameters;

@end

#endif	/* __EDEntityFieldCoder_h_INCLUDE */