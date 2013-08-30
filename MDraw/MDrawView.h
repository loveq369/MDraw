//    The MIT License (MIT)
//
//    Copyright (c) 2013 xmkevin
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy of
//    this software and associated documentation files (the "Software"), to deal in
//    the Software without restriction, including without limitation the rights to
//    use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//    the Software, and to permit persons to whom the Software is furnished to do so,
//    subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//    FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//    COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//    IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "MDrawTool.h"
#import "MDrawLine.h"
#import "MDrawFreeline.h"
#import "MDrawArrow.h"

@interface MDrawView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic,readonly) MDrawTool *activeTool;
@property (nonatomic,readonly) BOOL drawing;

/**
 * Undo the drawing
 **/
-(BOOL)undo;

/**
 * Redo the drawing
 **/
-(BOOL)redo;

/**
 * Select the drawing tool type
 **/
-(void)beginDrawingForType:(Class)toolType;

/**
 * Stop drawing.
 **/
-(void)finalizeDrawing;

-(void)drawDown:(CGPoint)point;
-(void)drawMove:(CGPoint)point;
-(void)drawUp:(CGPoint)point;

/**
 * Delete the active tool
 **/
-(void)deleteCurrentTool;

@end
