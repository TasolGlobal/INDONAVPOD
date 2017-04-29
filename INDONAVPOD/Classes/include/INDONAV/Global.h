//
//  Global.h
//  iBeacon-Geo-Demo
//
//  Created by Nemanja Joksovic on 4/5/14.
//  Copyright (c) 2014 R/GA. All rights reserved.
//

//#define kBeaconProximityUUID @"2F234454-CF6D-4A0F-ADF2-F4911BA9FFA6"
#define kBeaconProximityUUID @"FDA50693-A4E2-4FB1-AFCF-C6EB07647825"
#define kBeaconRegionIdentifier @"com.rga.iBeacon-Geo-Demo"
#define kWebServiceHostname @"http://fast-taiga-2263.herokuapp.com"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define kDefaultFont [UIFont fontWithName:@"HelveticaNeue-Light" size:IS_IPHONE ? 11 : 14]


//Device Compatibility
#define g_IS_IPHONE             ( [[[UIDevice currentDevice] model] isEqualToString:@"iPhone"] )
#define g_IS_IPOD               ( [[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"] )
#define g_IS_IPAD               ( [[[UIDevice currentDevice] model] isEqualToString:@"iPad"] || [[[UIDevice currentDevice] model] isEqualToString:@"iPad Simulator"])

#define font_nameHelvatica_Neue @"Helvetica Neue" //HelveticaNeue-Light
#define font_nameHelvatica_Light @"HelveticaNeue-Light"
#define font_nameHelvatica_bold @"HelveticaNeue-Bold"

//Display Size Compatibility
#define g_IS_IPHONE_4_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 480.0f && [[UIScreen mainScreen] bounds].size.height < 568.0f
#define g_IS_IPHONE_5_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 568.0f && [[UIScreen mainScreen] bounds].size.height < 667.0f
#define g_IS_IPHONE_6_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 667.0f && [[UIScreen mainScreen] bounds].size.height < 736.0f
#define g_IS_IPHONE_6P_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 736.0f && [[UIScreen mainScreen] bounds].size.height < 1024.0f


//IOS Version Compatibility
#define g_IS_IOS_8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define g_IS_IOS_7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define g_IS_IOS_6 ([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)

//screen width height
#define screenWidth appDelegate.window.bounds.size.width
#define screenHeight appDelegate.window.bounds.size.height

#define screenWidthself self.view.frame.size.width
#define screenHeightself self.view.frame.size.height

//hexadecimal color to RGB Color
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//appdelegate
#define appDelegate ((AppDelegate *)[[UIApplication sharedApplication]delegate])

//singleton
#define singleton [Singleton sharedSingleton]

//common define functions
#define removeNull(strData) [StaticClass removeNull:strData]


#define g_BaseURL @"http://tasolglobal.com/dev/wishapp/public/webservice"

//nsuserDefault
#define deviceToken @"deviceToken"
#define USEREMAIL @"useremail"
#define USERID @"userId"
#define USERNAME @"userName"