<table summary="" style="width:100%; vertical-align:top; text-align:left;" cellpadding=0 border=0>
 <tr>
  <td style="width:50%; vertical-align:top;">
   <h2><img alt="" align="middle" src="images/rightarrow.png"> {t}Generic{/t}</h2>
   <table summary="">
    <tr>
     <td><LABEL for="homeDirectory">{t}Home directory{/t}</LABEL>{$must}</td>
     <td>
      <input id="homeDirectory" name="homeDirectory" size=25 maxlength=120 {$homeDirectoryACL} value="{$homeDirectory}">
     </td>
    </tr>
    <tr>
     <td><LABEL for="loginShell">{t}Shell{/t}</LABEL></td>
     <td>
      <select id="loginShell" size="1" name="loginShell" {$loginShellACL}>
       {html_options values=$shells output=$shells selected=$loginShell}
      </select> 
     </td>
    </tr>
    <tr>
     <td><LABEL for="">{t}Primary group{/t}</LABEL></td>
     <td>
      <select id="primaryGroup" size="1" name="primaryGroup" {$gidNumberACL}>
       {html_options options=$secondaryGroups selected=$primaryGroup}
      </select> 
     </td>
    </tr>
    <tr>
     <td>{t}Status{/t}</td>
     <td>{$status}</td>
    </tr>
   </table>
   <table summary="">
    <tr>
     <td>
      <input id="force_ids" type=checkbox name="force_ids" value="1" {$force_ids} {$force_idsACL} onclick="changeState('uidNumber'); changeState('gidNumber');">
					</td>
					<td>
      <LABEL for="force_ids">{t}Force UID/GID{/t}</LABEL>
     </td>
					<td style="width:20px;"></td>
					<td>
						<LABEL for="uidNumber">{t}UID{/t}</LABEL>
					</td>
					<td>
						<input id="uidNumber" name="uidNumber" size=5 maxlength=5 {$forceMode} {$uidNumberACL} value="{$uidNumber}">
					</td>
				</tr>
				<tr>
					<td colspan="3"></td>
					<td>
						<LABEL for="gidNumber">{t}GID{/t}</LABEL>
					</td>
     <td>
						<input id="gidNumber" name="gidNumber" size=5 maxlength=5 {$forceMode} {$gidNumberACL} value="{$gidNumber}">
					</td>
				</tr>
   </table>
  </td>
  <td style="border-left:1px solid #A0A0A0">
    &nbsp;
  </td>
  <td style="vertical-align:top;">
   <h2><img alt="" align="middle" src="images/members.png"> {t}Group membership{/t}</h2>
   {if $groups eq "too_many_for_nfs"}
    <b style="color:red">{t}(Warning: more than 16 groups are not supported by NFS!){/t}</b>
    <br>
   {/if}
   <select style="width:400px; height:130px;" name="group_list[]" size=16 multiple>
    {html_options options=$groupMembership}
   </select>
   <br>
   <input type=submit value="{t}Add{/t}" name="edit_groupmembership" {$groupMembershipACL}>&nbsp;
   <input type=submit value="{t}Delete{/t}" name="delete_groupmembership" {$groupMembershipACL}>
  </td>
 </tr>
</table>

<p class="seperator">&nbsp;</p>

<table summary="" style="width:100% ; vertical-align:top; text-align:left;" cellpadding=0 border=0>
 <tr>
  <td>
   <h2><img alt="" align="middle" src="images/terminal_small.png"> {t}Account{/t}</h2>
  </td>
 </tr>
 <tr>
  <td>
   {include file="$pwmode.tpl"}
  </td>
 </tr>
</table>

<p class="seperator">&nbsp;</p>
<table summary="" style="width:100%; vertical-align:top; text-align:left;" cellpadding=0 border=0>
 <tr>
  <td style="vertical-align:top; width:50%">
   <h2><img alt="" align="middle" src="images/display.png"> {t}Environment{/t}</h2>
   <table summary="">
    <tr>
     <td><LABEL for="gosaDefaultPrinter">{t}Default printer{/t}</LABEL></td>
     <td>
      <select id="gosaDefaultPrinter" size="1" name="gosaDefaultPrinter" {$gosaDefaultPrinterACL}>
       {html_options options=$printerList selected=$gosaDefaultPrinter}
		<option disabled value="">&nbsp;</option>
      </select> 
     </td>
    </tr>
    <tr>
     <td><LABEL for="gosaDefaultLanguage">{t}Default language{/t}</LABEL></td>
     <td>
      <select size="1" id="gosaDefaultLanguage" name="gosaDefaultLanguage" {$gosaDefaultLanguageACL}>
       {html_options values=$languages output=$languages selected=$gosaDefaultLanguage}
      </select> 
     </td>
    </tr>
   </table>
  </td>
  <td style="border-left:1px solid #A0A0A0">
    &nbsp;
  </td>
  <td style="vertical-align:top;">
   <h2><img alt="" align="middle" src="images/closedlock.png" style="margin-bottom:10px;"> {t}System trust{/t}&nbsp;
    <select name="trustmode" id="trustmode" size=1 onchange="changeSelectState('trustmode', 'wslist'); changeSelectState('trustmode', 'add_ws'); changeSelectState('trustmode', 'del_ws');" {$trustmodeACL}>
      {html_options options=$trustmodes selected=$trustmode}
    </select>
   </h2>
   <select style="width:350px;" id="wslist" name="workstation_list[]" size=4 multiple {$trustmodeACL} {$trusthide}>
    {html_options values=$workstations output=$workstations}
	{if $emptyArrAccess}
		<option disabled>&nbsp;</option>
	{/if}
   </select>
   <br>
   <input type="submit" id="add_ws" value="{t}Add{/t}" name="add_ws"
        {$trustmodeACL} {$trusthide}>&nbsp;
   <input type="submit" id="del_ws" value="{t}Delete{/t}" name="delete_ws"
        {$trustmodeACL} {$trusthide}>
  </td>
 </tr>
</table>

<input type="hidden" name="posixTab" value="posixTab">

<!-- Place cursor -->
<script language="JavaScript" type="text/javascript">
  <!-- // First input field on page
  document.mainform.homeDirectory.focus();
  -->
</script>
