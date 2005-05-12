<table style="width:100%; vertical-align:top; text-align:left;" cellpadding=4>
<tr>
  <td style="vertical-align:top;">
   <div class="contentboxh" style="height:20px;">
    <p class="contentboxh" style="font-size:12px">
     <b>{t}Select objects to add{/t} {$hint}</b>
    </p>
   </div>
   <div class="contentboxb">
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;background-color:#F8F8F8">
     <select style="width:500px; height:450px; margin-top:4px;" name="objects[]" size=15" multiple>
      {$objects}
     </select>
     <input type=hidden name="edit_helper">
    </p>
   </div>
  </td>
  <td style="vertical-align:top;">
   <div class="contentboxh" style="height:20px;">
    <p class="contentboxh" style="font-size:12px"><img src="{$launchimage}" align="right" alt="[F]"><b>{t}Filters{/t}</b></p>
   </div>
   <div class="contentboxb">
    <p class="contentboxb" style="border-top:1px solid #B0B0B0; background-color:#F8F8F8">
     <table style="width:100%;">
      {$alphabet}
     </table>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0; background-color:#F8F8F8">
    <input type=checkbox name="departments" value="1" {$departments} onClick="mainform.submit()" title="{t}Select to see departments{/t}">{t}Show departments{/t}<br>
    <input type=checkbox name="accounts" value="1" {$accounts} onClick="mainform.submit()" title="{t}Select to see GOsa accounts{/t}">{t}Show people{/t}<br>
    <input type=checkbox name="groups" value="1" {$groups} onClick="mainform.submit()" title="{t}Select to see GOsa groups{/t}">{t}Show groups{/t}<br>
    <input type=checkbox name="applications" value="1" {$applications} onClick="mainform.submit()" title="{t}Select to see applications{/t}">{t}Show applications{/t}<br>
    <input type=checkbox name="servers" value="1" {$servers} onClick="mainform.submit()" title="{t}Select to see servers{/t}">{t}Show servers{/t}<br>
    <input type=checkbox name="workstations" value="1" {$workstations} onClick="mainform.submit()" title="{t}Select to see workstations{/t}">{t}Show workstations{/t}<br>
    <input type=checkbox name="terminals" value="1" {$terminals} onClick="mainform.submit()" title="{t}Select to see terminals{/t}">{t}Show terminals{/t}<br>
    <input type=checkbox name="printers" value="1" {$printers} onClick="mainform.submit()" title="{t}Select to see printers{/t}">{t}Show printers{/t}<br>
    <input type=checkbox name="phones" value="1" {$phones} onClick="mainform.submit()" title="{t}Select to see phones{/t}">{t}Show phones{/t}<br>
 </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;background-color:#F8F8F8">
    <table width="100%"><tr><td width="50%"><img src="{$tree_image}" align=center>&nbsp;{t}Display objects of department{/t}</td>
    <td><select name="dselect" size=1 onChange="mainform.submit()" title="{t}Choose the department the search will be based on{/t}">
      {html_options options=$deplist selected=$dselect}
    </select></td></tr></table>
    </p>
    <p class="contentboxb" style="border-top:1px solid #B0B0B0;background-color:#F8F8F8">
    <table width="100%"><tr><td width="50%"><img src="{$search_image}" align=center>&nbsp;{t}Display objects matching{/t}</td>
    <td><input type='text' name='regex' maxlength='20' value='{$regex}' title='{t}Regular expression for matching object names{/t}' onChange="mainform.submit()"></td></tr></table>
    </p>
   {$apply}
   </div>
  </td>
</tr>
</table>

<p class="plugbottom">
  <input type=submit name="add_object_finish" value="{t}Add{/t}">
  &nbsp;
  <input type=submit name="add_object_cancel" value="{t}Cancel{/t}">
</p>

