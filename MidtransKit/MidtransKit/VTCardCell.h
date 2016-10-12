//
//  VTCardCell.h
//  MidtransKit
//
//  Created by Nanang Rafsanjani on 3/3/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MidtransCoreKit/MidtransCoreKit.h>


@protocol VTCardCellDelegate;

@interface VTCardCell : UICollectionViewCell
@property (nonatomic) VTMaskedCreditCard *maskedCard;
@property (nonatomic, weak) id<VTCardCellDelegate>delegate;
@property (nonatomic) BOOL editing;
@end

@protocol VTCardCellDelegate <NSObject>
- (void)cardCellShouldRemoveCell:(VTCardCell *)cell;
@end