//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "SRGMediaPlayerView+Private.h"

#import <SceneKit/SceneKit.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SRGMediaPlayerSceneView : UIView <SCNSceneRendererDelegate, SRGMediaPlaybackView>

@property (nonatomic, weak) SCNNode *cameraNode;

@end

NS_ASSUME_NONNULL_END
