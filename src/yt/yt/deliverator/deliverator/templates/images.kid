<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xmlns:py="http://purl.org/kid/ns#"
    py:extends="'master.kid'">
<head>
<script>
function SelectAllList(CONTROL){
    for (var i = 0; i &lt; CONTROL.length; i++) {
        CONTROL.options[i].selected = true;
    }
}
function DeSelectAllList(CONTROL){
    for (var i = 0; i &lt; CONTROL.length; i++) {
        CONTROL.options[i].selected = false;
    }
}
</script>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" py:replace="''"/>
<title>Select Images</title>
</head>
<body>

  <div id="status_block">The Deliverator now open for business</div>
  <div id="getting_started">
    ${form(action="images")}
  </div>
</body>
</html>
