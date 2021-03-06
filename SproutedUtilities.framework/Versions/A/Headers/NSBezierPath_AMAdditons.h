//
//  NSBezierPath_AMAdditons.h
//  PlateControl
//
//  Created by Andreas on Sun Jan 18 2004.
//  Copyright (c) 2004 Andreas Mayer. All rights reserved.
//
//	2005-05-23	Andreas Mayer
//	- added -appendBezierPathWithTriangleInRect:orientation: and +bezierPathWithTriangleInRect:orientation:

// Some additions made by Philip Dow


#import <AppKit/AppKit.h>

typedef enum {
	AMTriangleUp = 0,
	AMTriangleDown,
	AMTriangleLeft,
	AMTriangleRight
} AMTriangleOrientation;

@interface NSBezierPath (AMAdditons)

+ (void) fillRoundRectInRect:(NSRect)rect radius:(float) radius;
+ (void) strokeRoundRectInRect:(NSRect)rect radius:(float) radius;

+ (NSBezierPath *)bezierPathWithPlateInRect:(NSRect)rect;
- (void)appendBezierPathWithPlateInRect:(NSRect)rect;


+ (NSBezierPath *)bezierPathWithRoundedRect:(NSRect)rect cornerRadius:(float)radius;
- (void)appendBezierPathWithRoundedRect:(NSRect)rect cornerRadius:(float)radius;


+ (NSBezierPath *)bezierPathWithTriangleInRect:(NSRect)aRect orientation:(AMTriangleOrientation)orientation;
- (void)appendBezierPathWithTriangleInRect:(NSRect)aRect orientation:(AMTriangleOrientation)orientation;

+ (NSBezierPath*) bezierPathWithLineFrom:(NSPoint)lineFrom to:(NSPoint)lineTo lineWidth:(float)width;
+ (NSBezierPath *) bezierPathWithAttributedString:(NSAttributedString*)anAttributedString;

@end
