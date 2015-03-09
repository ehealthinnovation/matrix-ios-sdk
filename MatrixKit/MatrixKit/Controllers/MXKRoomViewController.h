/*
Copyright 2015 OpenMarket Ltd

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#import <UIKit/UIKit.h>

#import "MXKRoomDataSource.h"

/**
 This view controller displays messages of a room.
 */
@interface MXKRoomViewController : UIViewController <MXKDataSourceDelegate>

/**
 Configure the view controller to display a room.
 
 @param room the room.
 @param mxSession the Matrix session.
 */
- (void)displayRoom:(MXRoom*)room withMXSession:(MXSession*)mxSession;

/**
 Override the default class used for cells in the table view the default class
 used for computing the cells data.

 @param cellDataClass a MXKRoomBubbleCellDataStoring-compliant class that will handle data for cells.
 @param cellViewClass a MXKRoomBubbleTableViewCell-inherited class.
 @param identifier the identifier of targeted cell (kMXKIncomingRoomBubbleCellIdentifier or kMXKOutgoingRoomBubbleCellIdentifier).
 */
- (void)registerCellDataClass:(Class)cellDataClass andCellViewClass:(Class)cellViewClass forCellIdentifier:(NSString *)identifier;

@end
