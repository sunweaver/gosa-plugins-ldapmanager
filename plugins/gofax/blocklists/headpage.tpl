<table style="width:100%; vertical-align:top; text-align:left;" cellpadding=4>
<tr>
  <td>
  <div class="contentboxh">
    <p class="contentboxh">
     {t}List of blocklists{/t} {$hint}
    </p>
  </div>
  <div class="contentboxb">
    <p class="contentboxb">
      <select style="width:500px; height:450px;" name="blocklist" size=15 ondblclick="this.form.edit_helper.value='1'; this.form.submit()">
	{html_options options=$blocklists}
      </select>
      <br>
      <input type=submit value="{t}New{/t}..." name="new_blocklist">&nbsp;
      <input type=submit value="{t}Edit{/t}" name="select_blocklist">&nbsp;
      <input type=submit value="{t}Delete{/t}" name="delete_blocklist">
      <input type=hidden name="edit_helper">
    </p>
  </div>
  </td>
  <td style="vertical-align:top;">
   <div class="contentboxh">
    <p class="contentboxh"><img src="{$infoimage}" align="right" alt="[i]">{t}Information{/t}</p>
   </div>
   <div class="contentboxb">
   <p class="contentboxb">
    {t}This menu allows to create, delete and edit selected blocklists. Having a large size of lists, you might prefer the range selectors on top of the select box.{/t}
   </p>
   <p class="contentboxb">
    {t}-Edit- and -New blocklist- will provide an assistant to aid you when performing changes on your blocklist. -Delete- will ask you for confirmation before really deleting anything.{/t}
   </p>
   </div>
   <br>
   <div class="contentboxh">
    <p class="contentboxh"><img src="{$launchimage}" align="right" alt="[F]">{t}Filters{/t}</p>
   </div>
   <div class="contentboxb">
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;">
     <table style="width:100%;">
      {$alphabet}
     </table>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;">
    <input type=checkbox name="sendlists" value="1" {$sendlists} onClick="mainform.submit()" title="{t}Select to see send blocklists{/t}">{t}Show send blocklists{/t}<br>
    <input type=checkbox name="receivelists" value="1" {$receivelists} onClick="mainform.submit()" title="{t}Select to see receive blocklists{/t}">{t}Show receive blocklists{/t}<br>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;">
    <table width="100%"><tr><td width="50%"><img src="{$tree_image}" align=center>&nbsp;{t}Display lists of department{/t}</td>
    <td><select name="depselect" size=1 onChange="mainform.submit()" title="{t}Choose the department the search will be based on{/t}">
     {html_options options=$deplist selected=$depselect}
    </select></td></tr></table>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0">
    <table width="100%"><tr><td width="50%"><img src="{$search_image}" align=center>&nbsp;{t}Display lists matching{/t}</td>
    <td><input type='text' name='regex' maxlength='20' value='{$regex}' title='{t}Regular expression for matching list names{/t}' onChange="mainform.submit()"></td></tr></table>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0">
    <table width="100%"><tr><td width="50%"><img src="{$search_image}" align=center>&nbsp;{t}Display lists containing{/t}</td>
    <td><input type='text' name='entry' maxlength='20' value='{$entry}' title='{t}Show lists containing entered numbers{/t}' onChange="mainform.submit()"></td></tr></table>
   </p>
   {$apply}
   </div>
  </td>
</tr>
</table>

<input type="hidden" name="ignore">
