//
//  Created by Tailored Solutions on 03/07/12.
//  Copyright 2013 Tailored Solutions. All rights reserved.
//
#import <Foundation/Foundation.h>
// For Twitter
#define kOAuthConsumerKey           @"8CDQjHRcv80RD2rM0IO2xQ"
#define kOAuthConsumerSecret        @"FgXI2Vt1xP1D5U46F44iRNkhjMFymv7hHK1MiHMhqOw"

// Facebook keys 
#define kApiKey                     @"738370719602251"
#define kApiSecret                  @"6148cd6cd9cccb3d4c8ebdea779dabfb"


// FBConstant
#define FB_EXISTING              1
#define FB_CREATE                2

#define GENERAL_DATE_FORMAT				@"yyyy-MM-dd"
#define GENERAL_TIME_FORMAT				@"HH:mm:ss"
#define GENERAL_DATE_TIME_FORMAT_AMPM	@"yyyy-MM-dd HH:mm:ss"
#define GENERAL_COMMENT_DATE_FORMAT     @"MMM d, YYYY"
#define GENERAL_DATE_TIME_FORMAT_AMPM	@"yyyy-MM-dd HH:mm:ss"

// https://api.wish-qatar.org/attendees/list?sid=KK7MF6OX8MX0PT10004634AV0XG6KE5GQ3ZU

#define TAG_SID_TEMP                    @"KK7MF6OX8MX0PT10004634AV0XG6KE5GQ3ZU"

// API URL for geting response from server
#define TAG_SERVER_URL_Login              @"https://summit.wish-qatar.org/api"

#define TAG_SERVER_URL                    @"https://api.wish-qatar.org/"
#define TAG_SERVER_URL_NEW                @"http://api.fischerappelt-qatar.com/"


// for append respective tag to URL
#define TAG_Attendee_List                 @"attendees/list?sid="
#define TAG_Attendee_Detail               @"attendees/detail?sid"
#define TAG_Message_List                  @"message/list?sid="
#define TAG_Message_Detail                @"message/detail?sid="
#define TAG_Message_Create                @"message/create"
#define TAG_MeetUp_Create                 @"meetups/create"

#define TAG_QNCC_Latitude                 25.322603
#define TAG_QNCC_Longitude                51.437688

#define B_timestamp                                    @"B_timestamp"
#define B_CurrentFloorplan                             @"B_CurrentFloorplan"
#define B_bottomBtn                                    @"B_bottomBtn"
#define B_bottomBtn_manualPress                        @"B_bottomBtn_manualPress"
#define B_bottomBtn_manualPressFloor                        @"B_bottomBtn_manualPressFloor"
#define B_lasttimestamp                                @"B_lasttimestamp"

//screen bound
#define scrennwidth  [[UIScreen mainScreen] bounds].size.width
#define scrennheight  [[UIScreen mainScreen] bounds].size.height


typedef enum
{
	jSuccess = 200,
	jNoContent = 204,
	jBadRequest = 400,
    jLoginRequired = 401,
	jErrorMessage = 404,
    jUnsupportedFile = 415,
    jInvalidData = 416,
    jErroronServer = 500,
    jUserNameError = 701,
    jEmailError = 702,
    jFBOption = 703,
    jSessionExpire = 704,
    jReportedContent = 705,
    JPermissionError = 706,
    jDuplicateData = 707,
    jWaitingForPermission = 708
}
iJoomerErrorCode;

// for return AppDelegate object
#define appDelegate                 ((AppDelegate *)[[UIApplication sharedApplication] delegate])

// for used color in Application
#define color_BG                     [UIColor colorWithRed:70.0/255.0f green:71.0/255.0f blue:73.0/255.0f alpha:1.0]
#define color_Blue                   [UIColor colorWithRed:29.0/255.0f green:118.0/255.0f blue:185.0/255.0f alpha:1.0]
#define color_SideMenuBlue           [UIColor colorWithRed:14.0/255.0f green:70.0/255.0f blue:144.0/255.0f alpha:1.0]
#define color_Gray                   [UIColor colorWithRed:109.0/255.0f green:123.0/255.0f blue:137.0/255.0f alpha:1.0]
#define color_GraySeperator          [UIColor colorWithRed:171.0/255.0f green:179.0/255.0f blue:187.0/255.0f alpha:1.0]
#define color_Green                  [UIColor colorWithRed:47.0/255.0f green:151.0/255.0f blue:60.0/255.0f alpha:1.0]
#define color_GreenDark              [UIColor colorWithRed:11.0/255.0f green:84.0/255.0f blue:34.0/255.0f alpha:1.0]
#define color_White                  [UIColor colorWithRed:255.0/255.0f green:255.0/255.0f blue:255.0/255.0f alpha:1.0]
#define color_Black                  [UIColor colorWithRed:0 green:0 blue:0 alpha:1.0]

// for Suggest MeetUp color
#define color_SuggestMeetUp_LightGray    [UIColor colorWithRed:192.0/255.0f green:193.0/255.0f blue:192.0/255.0f alpha:1.0]

// for Messenger color
#define color_Messenger_LightGray    [UIColor colorWithRed:223.0/255.0f green:224.0/255.0f blue:224.0/255.0f alpha:1.0]
#define color_Messenger_DarkGray     [UIColor colorWithRed:109.0/255.0f green:109.0/255.0f blue:111.0/255.0f alpha:1.0]
#define color_Messenger_Green        [UIColor colorWithRed:47.0/255.0f green:151.0/255.0f blue:60.0/255.0f alpha:1.0]

// for WISHReport color
#define color_WISH_Workforce                    [UIColor colorWithRed:255.0/255.0f green:193.0/255.0f blue:14.0/255.0f alpha:1.0]
#define color_WISH_AccountableCare              [UIColor colorWithRed:236.0/255.0f green:39.0/255.0f blue:132.0/255.0f alpha:1.0]
#define color_WISH_BehaviouralInsights          [UIColor colorWithRed:20.0/255.0f green:71.0/255.0f blue:124.0/255.0f alpha:1.0]
#define color_WISH_PrecisionMedicine            [UIColor colorWithRed:101.0/255.0f green:45.0/255.0f blue:144.0/255.0f alpha:1.0]
#define color_WISH_CardiovascularDisease        [UIColor colorWithRed:243.0/255.0f green:121.0/255.0f blue:32.0/255.0f alpha:1.0]
#define color_WISH_EconomicBenefits             [UIColor colorWithRed:237.0/255.0f green:48.0/255.0f blue:36.0/255.0f alpha:1.0]
#define color_WISH_HealthyPopulations           [UIColor colorWithRed:139.0/255.0f green:197.0/255.0f blue:63.0/255.0f alpha:1.0]
#define color_WISH_LHSN                         [UIColor colorWithRed:20.0/255.0f green:154.0/255.0f blue:157.0/255.0f alpha:1.0]
#define color_WISH_Autism                       [UIColor colorWithRed:90.0/255.0f green:133.0/255.0f blue:196.0/255.0f alpha:1.0]
#define color_WISH_GDHI                         [UIColor colorWithRed:0/255.0f green:134.0/255.0f blue:205.0/255.0f alpha:1.0]
#define color_WISH_GDHIGreen                    [UIColor colorWithRed:31.0/255.0f green:166.0/255.0f blue:55.0/255.0f alpha:1.0]

// for device iPad or iPhone
#define device_IDIOM           UI_USER_INTERFACE_IDIOM()
#define device_IPAD            UIUserInterfaceIdiomPad
#define device_IPhone          UIUserInterfaceIdiomPhone

// for font family name
#define Font_Name_Regular                             @"DINNextLTArabic-Regular"
#define Font_Name_Bold                                @"DINNextLTArabic-Bold"
#define Font_Size_Title                               17.0
#define Font_Size_SmallDesc                           15.0
#define Font_Size_BigDesc                             13.0

//--------------------------------- text realeted tag for localization language START ---------------------------------------------------------

// welcome screen
#define text_btn_English                              @"btn_English"
#define text_btn_Arabic                               @"btn_Arabic"

// home screen
#define text_lbl_SummitProgram                        @"lbl_SummitProgram"
#define text_lbl_WishReports                          @"lbl_WishReports"
#define text_lbl_ConferenceNavigator                  @"lbl_ConferenceNavigator"
#define text_lbl_GalleryHall                          @"lbl_GalleryHall"
#define text_lbl_Networking                           @"lbl_Networking"
#define text_lbl_LiveStream                           @"lbl_LiveStream"
#define text_lbl_English                              @"lbl_English"

// side menu
#define text_sideMenu_Summit_Program                  @"sideMenu_Summit Program"
#define text_sideMenu_Wish_Report                     @"sideMenu_Wish Report"
#define text_sideMenu_Conference_Navigator            @"sideMenu_Conference Navigator"
#define text_sideMenu_Gallery_Hall                    @"sideMenu_Gallery Hall"
#define text_sideMenu_Networking                      @"sideMenu_Networking"
#define text_sideMenu_Live_Stream                     @"sideMenu_Live Stream"
#define text_sideMenu_Session_Interaction             @"sideMenu_Session Interaction"
#define text_sideMenu_Speakers                        @"sideMenu_Speakers"
#define text_sideMenu_Sponsors                        @"sideMenu_Sponsors"
#define text_sideMenu_Useful_information              @"sideMenu_Useful information"
#define text_sideMenu_Facebook                        @"sideMenu_Facebook"
#define text_sideMenu_Twitter                         @"sideMenu_Twitter"
#define text_sideMenu_Instagram                       @"sideMenu_Instagram"
#define text_sideMenu_Youtube                         @"sideMenu_Youtube"

// user profile screen
#define text_Profile_PersonalProfile                  @"profile_PersonalProfile"
#define text_Profile_MyVisa                           @"profile_MyVisa"
#define text_Profile_QatarAirwaysETicket              @"profile_QatarAirwaysETicket"
#define text_Profile_HotelInformation                 @"profile_HotelInformation"
#define text_Profile_MyAgenda                         @"profile_MyAgenda"
#define text_Profile_ConferenceTicket                 @"profile_ConferenceTicket"
#define text_Profile_CertificateOfAttendance          @"profile_CertificateOfAttendance"
#define text_Profile_TravelAgentContact               @"profile_TravelAgentContact"
#define text_Profile_Logout                           @"profile_Logout"

// user WISH Report screen
#define text_WISH_R_AccountableCare                  @"WISH_R_AccountableCare"
#define text_WISH_R_Autism                           @"WISH_R_Autism"
#define text_WISH_R_BehaviouralInsights              @"WISH_R_BehaviouralInsights"
#define text_WISH_R_CardiovascularDisease            @"WISH_R_CardiovascularDisease"
#define text_WISH_R_EconomicBenefits                 @"WISH_R_EconomicBenefits"
#define text_WISH_R_HealthyPopulations               @"WISH_R_HealthyPopulations"
#define text_WISH_R_PrecisionMedicine                @"WISH_R_PrecisionMedicine"
#define text_WISH_R_LHSN                             @"WISH_R_LHSN"
#define text_WISH_R_GDHI                             @"WISH_R_GDHI"
#define text_WISH_R_Workforce                        @"WISH_R_Workforce"

// user Userful Information screen
#define text_Useful_GeneralInformation               @"Useful_GeneralInformation"
#define text_Useful_ArrivalDeparture                 @"Useful_ArrivalDeparture"
#define text_Useful_Transportation                   @"Useful_Transportation"
#define text_Useful_Hospitality                      @"Useful_Hospitality"
#define text_Useful_Emergency                        @"Useful_Emergency"

// user MeetUp screen
#define text_MeetUp_CONFIRMED                        @"MeetUp_CONFIRMED"
#define text_MeetUp_INVITED                          @"MeetUp_INVITED"
#define text_MeetUp_HOSTING                          @"MeetUp_HOSTING"



// Indoor screen
#define text_lbl_QNCC_NAVIGATOR                        @"lbl_QNCC_NAVIGATOR"


//--------------------------------- text realeted tag for localization language END ---------------------------------------------------------