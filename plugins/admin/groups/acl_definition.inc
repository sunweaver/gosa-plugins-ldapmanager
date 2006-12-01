<?php
# ACLD definitions go here

$ACLD['application']=array("cn" => "LDAP name",
			"create" => "Create",
			"delete" => "Delete",
			"description" => "Description",
			"gosaApplicationExecute" => "Execute",
			"gosaApplicationFlags" => "Modify flags",
			"gotoLogonScript" => "Script",
			"gosaApplicationIcon" => "Icon",
			"gosaApplicationName" => "Visible name");
$ACLD['mimetype']=array("cn" 				=> "LDAP name",
			"create" 						=> "Create",
			"delete" 						=> "Delete",
			"description" 					=> "Description",
			"gotoMimeIcon" 					=> "Icon",
			"gotoMimeApplication" 			=> "Modify flags",
			"gotoMimeEmbeddedApplication" 	=> "Embedded applications",
			"gotoMimeLeftClickAction" 		=> "Left click actions",
			"gotoMimeFilePattern" 			=> "File patterns",
			"gotoMimeGroup" 				=> "Mime group",
			"description"	 				=> "Description");
$ACLD['department']= array(
			"businessCategory",
			"description",
			"facsimileTelephoneNumber",
			"l",
			"ou",
			"create",
			"delete",
			"base",
			"postalAddress",
			"st",
			"telephoneNumber");
$ACLD['gofax']=      array("cn",
			"create",
			"description",
			"facsimileAlternateTelephoneNumber",
			"facsimileTelephoneNumber",
			"goFaxBlocklist",
			"goFaxDeliveryMode",
			"goFaxFormat",
			"goFaxIsEnabled",
			"goFaxLanguage",
			"goFaxPrinter",
			"goFaxRBlockgroups",
			"goFaxSBlockgroups",
			"gosaMailForwardingAddress");
$ACLD['blocklists']= array("cn",
			"create",
			"delete",
			"description",
			"goFaxBlocklist");
$ACLD['ogroup']=   array("ogroup","create","delete","cn", "description", "gosaGroupObjects","base");
$ACLD['group']=      array("cn",
			"create",
			"delete",
			"description",
			"force_gid",
			"password",
			"gidNumber");
$ACLD['appgroup']=   array();
$ACLD['all']=        array();
$ACLD['mailgroup']=  array("default_permission",
			"imap_perms",
			"member_permissions",
			"mail",
			"gosaMailAlternateAddress",
			"gosaMailForwardingAddress",
			"gosaMailQuota",
			"gosaMailServer");
$ACLD['terminal']=   array("gotoAdaptPath",
			"gotoAutoFs",
			"gotoBootKernel",
			"gotoFilesystem",
			"gotoFontPath",
			"gotoKernelParameters",
			"gotoLdapServer",
			"gotoLpdEnable",
			"gotoLpdServer",
			"gotoMode",
			"gotoModule",
			"gotoModules",
			"gotoNtpServer",
			"gotoScannerEnable",
			"gotoSwapServer",
			"gotoSyslogServer",
			"gotoTerminalPath",
			"gotoXColordepth",
			"gotoXDriver",
			"gotoXHsync",
			"gotoXKbLayout",
			"gotoXKbModel",
			"gotoXKbVariant",
			"gotoXMethod",
			"gotoXMouseButtons",
			"gotoXMousePort",
			"gotoXMouseType",
			"gotoXResolution",
			"gotoXVsync",
			"gotoXdmcpServer",
			"login",
			"password");
$ACLD['workgeneric']=   array("base",
			"gotoMode",
			"gotoSyslogServer",
			"gotoNtpServer",
			"action",
			"password");
$ACLD['workstartup']=   array("gotoBootKernel",
			"gotoKernelParameters",
			"FAIdebianMirror",
			"FAIclass",
			"gotoModules",
			"gotoShare");
$ACLD['workservice']=   array("gotoXKbModel",
			"gotoXKbLayout",
			"gotoXKbVariant",
			"gotoXMouseType",
			"gotoXMouseport",
			"gotoXResolution",
			"gotoXColordepth",
			"AutoSync",
			"gotoXHsync",
			"gotoVHsync",
			"gotoScannerEnable",
			"gotoXDriver");
$ACLD['printgeneric']=   array("cn",
			"base",
			"labeledURI",
			"gotoPrinterPPD",
			"gotoUserPrinter",
			"macAddress",
			"gotoUserAdminPrinter",
			"gotoGroupAdminPrinter",
			"gotoUserPrinter",
			"gotoAdminPrinter",
			"description");
$ACLD['servgeneric']=   array("cn",
			"base",
			"gotoMode",
			"description");
$ACLD['servdb']=   array("goKrbServer",
			"goKrbRealm",
			"goKrbAdmin",
			"goFaxServer",
			"goFaxAdmin",
			"goFaxPassword",
			"goFonServer",
			"goFonAdmin",
			"goFonPassword",
			"goFonCountryCode",
			"goFonAreaCode",
			"goImapServer",
			"goImapPassword",
			"goImapName",
			"goImapConnect",
			"goImapAdmin",
			"goImapPassword",
			"goImapSievePort",
			"goLogDBServer",
			"goLogAdmin",
			"goLogPassword",
			"goGlpiServer",
			"goGlpiAdmin",
			"goGlpiPassword",
			"goGlpiDatabase",
			"goKrbPassword");
$ACLD['servkolab']=   array("postfix_mydomain",
			"postfix_mydestination",
			"cyrus_admins",
			"cyrus_pop3s",
			"cyrus_imap",
			"cyrus_imaps",
			"cyrus_sieve",
			"proftpd_ftp",
			"apache_http",
			"postfix_enable_virus_scan",
			"apache_allow_unauthenticated_fb",
			"postfix_mynetworks",
			"postfix_relayhost",
			"postfix_allow_unauthenticated",
			"cyrus_pop3");
$ACLD['servservice']=   array("goExportEntry",
			"goExportEntry",
			"goNtpServer",
			"goLdapBase",
			"goTerminalServer",
			"goXdmcpIsEnabled",
			"goSyslogServer",
			"goCupsServer",
			"goMailServer",
			"goLdapServer");
$ACLD['servrepository']=   array("",
			"base",
			"gotoMode",
			"description");
$ACLD['user']=       array("academicTitle",
			"create",
			"delete",
			"certificateSerialNumber",
			"certificates",
			"departmentNumber",
			"description",
			"employeeNumber",
			"employeeType",
			"facsimileTelephoneNumber",
			"functionalTitle",
			"givenName",
			"gouvernmentOrganizationalPersonLocality",
			"gouvernmentOrganizationalUnit",
			"gouvernmentOrganizationalUnitDescription",
			"gouvernmentOrganizationalUnitSubjectArea",
			"homePhone",
			"homePostalAddress",
			"houseIdentifier",
			"ivbbLastDeliveryCollective",
			"jpegPhoto",
			"kerberos",
			"l",
			"labeledURI",
			"mobile",
			"o",
			"ou",
			"pager",
			"password",
			"personalTitle",
			"postalAddress",
			"postalCode",
			"publicVisible",
			"role",
			"roomNumber",
			"sn",
			"st",
			"street",
			"telephoneNumber",
			"uid",
			"vocation");
$ACLD['mailAccount']=       array(
			"custom_sieve",
			"gosaMailAlternateAddress",
#			"gosaMailDeliveryMode",
			"gosaMailForwardingAddress",
			"gosaMailMaxSize",
			"gosaMailQuota",
			"gosaMailServer",
			"gosaSpamMailbox",
			"gosaSpamSortLevel",
			"gosaVacationMessage",
                        "drop_own_mails",
			"mail",
			"only_local");
$ACLD['posixAccount']=      array("allowedHosts",
			"force_ids",
			"gidNumber",
			"gosaDefaultLanguage",
			"gosaDefaultPrinter",
			"gosaHostACLD",
			"gosaHostAcl",
			"groupMembership",
			"homeDirectory",
			"kerberos",
			"loginShell",
			"memberUid",
			"shadow",
			"shadowExpire",
			"shadowInactive",
			"shadowMax",
			"shadowMin",
			"shadowWarning",
			"uidNumber");
$ACLD['sambaAccount']=      
			array("acctFlags" => "samba2:acctFlags", 
			"allow_pwchange" => "samba2:allow_pwchange",
			"homeDrive" 	=> "samba2:homeDrive",
			"no_password_required" => "samba2:no_password_required",
			"profilePath"		=> "samba2:profilePath",
			"scriptPath" => "samba2:scriptPath",
			"smbHome" => "samba2:smbHome",
			"temporary_disable" => "samba2:temporary_disable",
			 	        "sambaHomePath"		,//=> _("Home path"), 
						"sambaHomeDrive"	,//=> _("Home drive"), 
						"sambaDomainName"	,//=> _("Samba domain name"),
						"sambaLogonScript"	,//=> _("Logon script"),
				        "sambaProfilePath"	,//=> _("Profile path"),	 

						"sambaLogonTime",//	=> _("Limit Logon Time"),
						"sambaLogoffTime",// 	=> _("Limit Logoff Time"), 
						"sambaKickoffTime",// 	=> _("Account expiry"), 	
						"sambaPwdCanChange",//	=> _("Can change password"),
						"sambaPwdMustChange",//=> _("Password expiry"), 
						"allow_pwchange"	,//=> _("Allow password change"),
						"no_password_required",// => _("Login from windows client requires no password"),
						"temporary_disable",// => _("Lock account"),
						"sambaUserWorkstation",//=> _("Allow connection from these workstations only"),

						"connectclientdrives",//	=> _("Connect client drives at logon"),
						"connectclientprinters",// => _("Connect client printers at logon"),
						"defaultprinter",//	 	=> _("Default to main client printer"),

						"shadow",//				=> _("Shadowing"),
						"brokenconn",//			=> _("On broken or timed out"),
						"reconn",//				=> _("Reconnect if disconnected"),

						"inherit",//				=> _("Inherit client config")
						"tslogin",//				=> _("Inherit client config")
		
						"CtxWFHomeDir",
						"CtxWFHomeDirDrive",
						"CtxWFProfilePath",

						"CtxMaxConnectionTime",
						"CtxMaxDisconnectionTime",
						"CtxMaxIdleTime",

						"CtxInitialProgram",
						"CtxWorkDirectory"
				
						) ;

$ACLD['netatalk']=	array(
			"netatalkShare",
			"netatalkUserHomepath");


$ACLD['proxyAccount']=      array(
			"proxyAccount",
			"gosaProxyAcctFlags",
			"gosaProxyQuota",
			"gosaProxyWorkingStart",
			"gosaProxyWorkingStop");

$ACLD['pureftpdAccount']=   array(
			"pureftpd",	
			"FTPUploadBandwidth",
			"FTPStatus",
			"FTPDownloadBandwidth",
			"FTPQuotaFiles",
			"FTPQuotaMBytes",
			"FTPUploadRatio",
			"FTPDownloadRatio");
$ACLD['conference']= array(
			"goFonConference",
			"goFonPIN",
			"base",
			"delete",
			"cn",
			"description",
			"telephoneNumber",			
			"goFonConferenceOption",
			"goFonConferenceOptionLifetime",
			"goFonConferenceOptionFormat",
			"goFonConferenceOption_s",
			"goFonConferenceOption_i",
			"goFonConferenceOption_r",
			"goFonConferenceOption_d",
			"goFonConferenceOption_D",
			"goFonConferenceOption_P",
			"goFonConferenceOption_M",
			"goFonConferenceOption_c",
			"goFonConferenceOwner");

$ACLD['environment']=array(
					"gotoPrinter",
					"gotoEnvironment",
					"gotoShare",
					"gotoProfileServer",
					"gotoProfileFlags",
					"gotoXResolution",
					"gotoLogonScript",
					"gotoKioskProfile",
					"gotoProfileQuota",
					"gotoHotplugDevice",
					"gotoShareAppleMounts"
					);

$ACLD['phpgwAccount']			=array("phpgwAccount" 			);
$ACLD['webdavAccount']			=array("webdavAccount" 			);
$ACLD['intranetAccount']		=array("intranetAccount" 		);
$ACLD['systems']			=array("systems" 		);
$ACLD['FAIclass']			=array("FAIclass" 		);
$ACLD['pptpAccount']			=array("gosapptp" 	  			);
$ACLD['phpscheduleitAccount']	=array("gosaphpscheduleit" 	  	);
$ACLD['opengwAccount']			=array(	"opengwAccount"	=>"Enable/disable account",	
										"LocationTeam"	=>"Location team",
										"TemplateUser"	=>"Template user",
										"is_locked"		=>"Lock status",
										"TeamIDs"		=>"Teams");

$ACLD['phoneAccount'] = array("goFonDeliveryMode",
      "goFonHardware","goFonPIN","goFonVoicemailPIN","telephoneNumber", "goFonMacro");

$ACLD['nagiosAccount'] = array("NagiosAlias"
, "NagiosPager"
, "NagiosMail"
, "HostNotificationPeriod"
, "ServiceNotificationPeriod"
, "HostNotificationCommands"
, "ServiceNotificationCommands"
, "HostNotificationOptions"
, "ServiceNotificationOptions"
, "AuthorizedAllHosts"
, "AuthorizedAllServices"
, "AuthorizedSystemCommands"
, "AuthorizedAllHostCommands"
, "AuthorizedAllServiceCommands"
, "AuthorizedConfigurationInformation"
, "AuthorizedSystemInformation");

$ACLD['addressbook']=  array("addressbook","add", "delete",
	  "sn", "givenName", "mail", "title",
      "initials", "homePostalAddress", "displayName",
      "homePhone", "mobile", "o", "postalAddress", "l",
      "postalCode", "st", "ou", "telephoneNumber",
      "facsimileTelephoneNumber", "pager");
$ACLD['fonreport']	=  array("fonreport", "src", "dst", "channel", "lastapp", "disposition", "duration");
$ACLD['faxreport']	=  array("faxreport");
$ACLD['connectivity']=  array("connectivity");
$ACLD['logview']	=  array("logview");
$ACLD['mailqueue']	=  array("mailqueue","unhold_all","hold_all","del_all","requeue_all","unhold","hold","del","requeue","query","header");
$ACLD['ldapmanager']=  array("ldapmanager","import","export","xlsexport","csvimport");

$ACLD['FAIclass']	= 	array(
								// Allow displaying of FAI menu element
								"FAIclass"	=> "FAI management enabled");
$ACLD['goFonMacro']	=array("goFonMacro","edit","delete");
$ACLD['kolabAccount']	=array("kolabAccount","kolabFreeBusyFuture", "unrestrictedMailSize", "calFBURL","kolabDelegate");

?>