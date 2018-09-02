#ifndef __MSGRUAID__H__
#define __MSGRUAID__H__

//
// Dispatch IDs for DMessengerEvents
// 
#define DISPID_MUAE_ONSIGNIN				  0x400
#define DISPID_MUAE_ONSIGNOUT				  0x401
#define DISPID_MUAE_ONLISTADD				  0x402
#define DISPID_MUAE_ONLISTREMOVE			  0x403
#define DISPID_MUAE_ONUSERFRIENDLYNAMECHANGE  0x404
#define DISPID_MUAE_ONMYFRIENDLYNAMECHANGE	  0x405
#define DISPID_MUAE_ONUSERSTATECHANGE		  0x406
#define DISPID_MUAE_ONMYSTATECHANGE 		  0x407
#define DISPID_MUAE_ONAPPSHUTDOWN			  0x408
#define DISPID_MUAE_ONMYPROPERTYCHANGE		  0x409
#define DISPID_MUAE_ONUSERPROPERTYCHANGE	  0x40a
#define DISPID_MUAE_ONUSERBLOCKCHANGE		  0x40b
#define DISPID_MUAE_ONUSERPAGERCHANGE		  0x40c
#define DISPID_MUAE_ONUSERPHONECHANGE		  0x40d
#define DISPID_MUAE_ONMYPHONECHANGE 		  0x40e
#define DISPID_MUAE_ONUNREADEMAILCHANGE 	  0x40f
#define DISPID_MUAE_ONIMWINDOWCREATED		  0x411
#define DISPID_MUAE_ONIMWINDOWDESTROYED		  0x412
#define DISPID_MUAE_ONIMWINDOWADD			  0x413
#define DISPID_MUAE_ONIMWINDOWREMOVE		  0x414
#define DISPID_MUAE_ADDGROUP						0x415
#define DISPID_MUAE_REMOVEGROUP					0x416
#define DISPID_MUAE_RENAMEGROUP					0x417
#define DISPID_MUAE_ADD_USRGRP						0x418
#define DISPID_MUAE_REMOVE_USRGRP				0x419


//
// Dispatch IDs for IMessenger
//
#define DISPID_MUAM_RECEIVEDIR				 0x500
#define DISPID_MUAM_STARTVOICE				 0x501
#define DISPID_MUAM_FRIENDLYNAME			 0x502
#define DISPID_MUAM_WINDOW					 0x503
#define DISPID_MUAM_UNREADEMAILCOUNT		 0x504
#define DISPID_MUAM_VIEWPROFILE 			 0x505
#define DISPID_MUAM_GETCONTACT	 			 0x506
#define DISPID_MUAM_OPTIONUI				 0x507
#define DISPID_MUAM_ADDUI					 0x508
#define DISPID_MUAM_FINDUI					 0x509
#define DISPID_MUAM_INSTANTMESSAGE			 0x50a
#define DISPID_MUAM_SIGNOUT 				 0x50b
#define DISPID_MUAM_SENDFILE				 0x50c
#define DISPID_MUAM_OPENINBOX				 0x50d
#define DISPID_MUAM_MYSERVICENAME			 0x50e
#define DISPID_MUAM_INVITEAPP				 0x50f
#define DISPID_MUAM_MYPHONENUMBER			 0x510
#define DISPID_MUAM_SIGNIN					 0x511
#define DISPID_MUAM_SENDMAIL				 0x512
#define DISPID_MUAM_AUTOSIGNIN				 0x513
#define DISPID_MUAM_PHONEUI 				 0x514
#define DISPID_MUAM_AUDIOUI 				 0x515
#define DISPID_MUAM_PAGERUI 				 0x516
#define DISPID_MUAM_CONTACTS				 0x517
#define DISPID_MUAM_SIGNINNAME				 0x518
#define DISPID_MUAM_STATUS					 0x519
#define DISPID_MUAM_MYPROPERTY				 0x51a
#define DISPID_MUAM_SERVICEID				 0x51b
#define DISPID_MUAM_SERVICES	 			 0x51c
//
// Dispatch IDs for IMessenger2
//
#define DISPID_MUAM_MYGROUPS				 0x51d
#define DISPID_MUAM_STARTVIDEO				 0x51e
#define DISPID_MUAM_GROUPS					 0x51f
#define DISPID_MUAM_CREATEGROUP				 0x520
#define DISPID_MUAM_SORT					 0x521
//
// Dispatch IDs for IMessenger3
//
#define DISPID_MUAM_PROPERTY				 0x522

//
// Dispatch IDs for IMessengerContact
//

#define DISPID_MUAC_FRIENDLYNAME			 0x600
#define DISPID_MUAC_STATUS					 0x601
#define DISPID_MUAC_SIGNINNAME				 0x602
#define DISPID_MUAC_SERVICENAME 			 0x603
#define DISPID_MUAC_BLOCK					 0x604
#define DISPID_MUAC_ISSELF					 0x605
#define DISPID_MUAC_PROPERTY				 0x606
#define DISPID_MUAC_CANPAGE 				 0x607
#define DISPID_MUAC_PHONENUMBER 			 0x608
#define DISPID_MUAC_SERVICEID				 0x609


//
// Dispatch IDs for IMessengerContacts
//

#define DISPID_MUAC_COUNT					 0x700
#define DISPID_MUAC_REMOVE					 0x701

//
// Dispatch IDs for IMessengerWindow
//

#define DISPID_MUAW_HWND					 0x800
#define DISPID_MUAW_LEFT					 0x801
#define DISPID_MUAW_TOP						 0x802
#define DISPID_MUAW_WIDTH					 0x803
#define DISPID_MUAW_HEIGHT					 0x804
#define DISPID_MUAW_CLOSE					 0x805
#define DISPID_MUAW_SHOW					 0x806
#define DISPID_MUAW_ISCLOSED				 0x807
#define DISPID_MUAW_PROPERTY				 0x808


//
// Dispatch IDs for IMessengerService(s)
//

#define DISPID_MUAS_PS						 0x880
#define DISPID_MUAS_COUNT					 0x881
#define DISPID_MUAS_NAME					 0x882
#define DISPID_MUAS_FNAME					 0x883
#define DISPID_MUAS_CAP						 0x884
#define DISPID_MUAS_STATUS					 0x885
#define DISPID_MUAS_PROPERTY				 0x886
#define DISPID_MUAS_ID						 0x887
#define DISPID_MUAS_SIGNINNAME				 0x888

//
// Dispatch IDs for IMessengerConversationWnd
//
#define DISPID_MUAW_CONTACTS				 0x809
#define DISPID_MUAW_HISTORY					 0x80a
#define DISPID_MUAW_ADD						 0x80b

//
// Dispatch IDs for IMessengerGroup(s)
//
#define DISPID_MUAM_GROUP						0x680
#define DISPID_MUAG_REMOVEG						0x681
#define DISPID_MUAG_COUNT						0x682
#define DISPID_MUAG_CONTACTS					0x683
#define DISPID_MUAG_NAME						0x684
#define DISPID_MUAG_ADD							0x685
#define DISPID_MUAG_REMOVEC						0x686
#define DISPID_MUAG_SERVICE						0x687

#endif