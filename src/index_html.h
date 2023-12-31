const char index_html[] PROGMEM = R"rawliteral(<!DOCTYPE html>
<html style="font-family: Arial, Helvetica, sans-serif;
display: inline-block;
text-align: center;">
<head>
  <title>KNOMI Settings Manager</title>
  <link rel='shortcut icon' type='image/x-icon' href='/favicon.ico' />
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    h1 {
      font-size: 1.8rem;
      color: black;
    }
    h2 {
      font-size: 0.8rem;
      color: black;
    }
    p {
      font-size: 1.4rem;
    }
    svg {
      margin-bottom: 2px;
      margin-left: 15px;
      margin-right: 20px; /* Adjust the value to add space between the image and text */
    }
    .topnav {
      overflow: hidden;
      display: flex;
      align-items: center;
      background: rgb(255,255,255);
      background: linear-gradient(180deg, rgba(255,255,255,1) 0%, rgba(255,255,255,1) 53%, rgba(231,231,231,1) 84%, rgba(193,193,193,1) 100%);
    }
    body {
      margin: 0;
    }
    .mainTitle {
      align-self: right;
    }
    .content {
      padding: 5%;
    }
    .card-grid {
      max-width: 800px;
      margin: 0 auto;
      display: flex;
      justify-content: center;
      align-items: center;
      display: block;
    }
    .card {
      background-color: white;
      box-shadow: 2px 2px 12px 1px rgba(140,140,140,.5);
      padding: 15px 15px;
      border: 1px solid lightgrey;
      flex: 1;
      min-height: 100px;
      display: flex;
      justify-content: center;
      align-items: center;
      flex-direction: column;
    }
    .card-title {
      font-size: 1.2rem;
      font-weight: bold;
      color: #034078
    }
    input[id="sys-btn"] {
      border: none;
      color: #d2d4d4;
      padding: 15px 15px;
      text-align: center;
      text-decoration: none;
      display: inline-block;
      font-size: 16px;
      width: 230px;
      height: 45;
      margin-right: 0px;
      margin-bottom: 0px;
      border-radius: 5px;
      transition-duration: 0.4s;
    }
    input[id="submit-btn"] {
      border: none;
      color: black;
      background-color: #d2d4d4;
      padding: 10px 10px;
      text-align: center;
      text-decoration: none;
      display: inline-block;
      font-size: 16px;
      width: 100px;
      height: 45;
      margin-left: 20px;
      margin-right: 0px;
      margin-bottom: 0px;
      border-radius: 5px;
      transition-duration: 0.4s;
    }
    input[type=submit]:active {
      opacity: 0.8;
    }
    p {
      display: flex;
      flex-flow: column;
      height: 100%;
      width: 100%;
    }
    input[type=text], input[type=password], select {
      width: 100%;
      padding: 12px 12px;
      border: 1px solid #ccc;
      margin-right: 0px;
      margin-left: 0px;
      border-radius: 5px;
      box-sizing: border-box;
      display: table-cell;
    }
    label {
      font-size: 1.2rem;
      text-align: center;
      padding: 10px;
      display: flex;
    }
    .value {
      font-size: 1.2rem;
      color: #1282A2;
    }
    .refresh-btn {
      max-width: 800px;
      margin: 0 auto;
      position: relative;
      bottom: 0;
      left: 0;
      right: 0;
      width: 100%;
      border: none;
      color: black;
      background-color: #d2d4d4;
      text-align: center;
      text-decoration: none;
      font-size: 16px;
      border-radius: 5px;
      transition-duration: 0.4s;
    };
    .state {
      font-size: 1.2rem;
      color: #1282A2;
    }
    .table-container {
        height: 13em;
        box-shadow: 2px 2px 12px 1px rgba(140,140,140,.5);
        max-width: 800px;
        margin: 0 auto;
        position: relative;
    }
    table {
        display: flex;
        flex-flow: column;
        height: 100%;
        width: 100%;
        padding: 5px;
    }
    table thead {
        /* head takes the height it requires,
        and it's not scaled when table is resized */
        flex: 0 0 auto;
        width: calc(100% - 0.9em);
    }
    table tbody {
        /* body takes all the remaining available space */
        flex: 1 1 auto;
        display: block;
        overflow-y: scroll;
    }
    table tbody tr {
        width: 100%;
    }
    table thead,
    table tbody tr {
        display: table;
        table-layout: fixed;
    }
    table {
        border: 1px solid lightgrey;
    }
    table td, table th {
        padding: 0.3em;
        text-align: center;
    }
    table th {
        background-color: #d2d4d4;
        color: black;
    }
    tr:nth-child(even) {background-color: #f2f2f2;}
    .modal {
      display: none;
      position: fixed;
      z-index: 8;
      left: 0;
      top: 0;
      width: 100%;
      height: 100%;
      overflow: auto;
      background-color: rgb(0, 0, 0);
      background-color: rgba(0, 0, 0, 0.4);
    }
    .modal-content {
      margin: 300px auto;
      border: 0px solid #999;
      width: 60%;
    }
    h2,
    p {
      margin: 0 0 20px;
      font-weight: 400;
      color: #999;
    }
    span {
      color: #666;
      display: block;
      padding: 0 0 5px;
      white-space: nowrap;
    }
    .modal_form {
      padding: 25px;
      margin: 25px;
      box-shadow: 0 2px 5px #f5f5f5;
      background: #eee;
    }
    input,
    textarea {
      width: 90%;
      padding: 10px;
      border: 1px solid #1c87c9;
      outline: none;
    }
    .contact-form button {
      width: 100%;
      padding: 10px;
      border: none;
      background: #d2d4d4;
      font-size: 16px;
      font-weight: 400;
      color: #fff;
    }
    button:active {
      opacity: 0.8;
    }
    .close {
      color: #aaa;
      float: right;
      font-size: 28px;
      font-weight: bold;
    }
    .close:hover,
    .close:focus {
      color: black;
      text-decoration: none;
      cursor: pointer;
    }
    .ant-form-item-row{
      display: flex;
      justify-content: center;
      align-items: center;
      margin: 20px 0;
    }
    body {
        padding: 0;
        margin: 0;
    }

    .btn_confirm {
        background-color: Blue;
        color: #fff;
        padding: 5px 10px;
        border: 1px solid blue;
        border-radius: 5px;
        margin-right: 10px;
        cursor: pointer;
    }

    .btn_cancel {
        background-color: #fff;
        padding: 5px 10px;
        border: 1px solid #000;
        border-radius: 5px;
        margin-right: 10px;
        cursor: pointer;
    }

    .form_item span {
        display: inline-block;
        width: 100px;
    }

    .form_item input {
        width: 200px;
        height: 25px;
        line-height: 25px;
        outline: none;
        border-radius: 5px;
    }

    .form_item {
        margin-bottom: 10px;
    }

    .form_item:last-child {
        margin-bottom: 0;
    }

    .overlap {
        background: #000;
        opacity: 0.6;
        width: 100%;
        height: 100%;
        display: none;
        position: absolute;
    }

    #popup_id {
        position: fixed;
        left: 0px;
        top: 0px;
        width: 100%;
        height: 100%;
        font-size: 16px;
        background-color: rgba(0, 0, 0, 0.5);
        filter: progid:DXImageTransform.Microsoft.gradient(startColorstr=#7f000000,endColorstr=#7f000000);
        display: none;
    }
    .popup {
        background-color: #ffffff;
        max-width: 400px;
        min-width: 200px;
        height: auto;
        border-radius: 5px;
        margin: 100px auto;
        text-align: center;
    }
    .popup_title {
        height: 60px;
        line-height: 60px;
        border-bottom: solid 1px #cccccc;
    }
    .popup_content {
        height: auto;
        line-height: 25px;
        padding: 15px 10px;
        text-align: left;
        color: #000000;
    }
    .popup_btn {
        padding-bottom: 10px;
    }
    .popup_btn button {
        color: black;
        width: 40%;
        height: 40px;
        cursor: pointer;
        border: solid 1px #cccccc;
        border-radius: 5px;
        margin: 5px 10px;
        color: #ffffff;
        background-color: #d2d4d4;
    }
</style>
  <script>
        var popup_clicked = false;
        var popup_btn = false;
        async function waitPopupBtn(){
            await new Promise( (resolve) =>{
                let timer = setInterval(() =>{
                    if(popup_clicked){
                        clearInterval(timer)
                        resolve(true)
                    }
                },100)
            })
            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "none";
            return Promise.resolve(true)
        }
        async function showPopupKlipper(){
            popup_clicked = false;
            popup_btn = false;
            var ip = document.getElementById("ip").value;
            var port = document.getElementById("port").value;
            var tool = document.getElementById("tool").value;
            document.getElementById("popup_title_id").innerHTML="Klipper Config";
            document.getElementById("popup_content_id").innerHTML="<div>" + "Klipper IP: "+ "<font color='black'>" + ip + "</font><br>"
                                                                + "Klipper Port: " + "<font color='black'>" + port + "</font><br>"
                                                                + "Tool ID: " + "<font color='black'>" + tool + "</font><br></div>";

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('klipper-form').submit();
            }
            return popup_btn;
        }
        async function showPopupKnomi(){
            popup_clicked = false;
            popup_btn = false;
            var obj_mode = document.getElementById("mode");
            var mode = obj_mode.options[obj_mode.selectedIndex].text;
            var ssid = document.getElementById("ap-ssid").value;
            var pwd = document.getElementById("ap-pwd").value;
            var name = document.getElementById("hostname").value;
            document.getElementById("popup_title_id").innerHTML="KNOMI Config";
            document.getElementById("popup_content_id").innerHTML="<div>" + "WiFi mode: "+ "<font color='black'>" + mode + "</font><br>"
                                                                + "AP SSID: " + "<font color='black'>" + ssid + "</font><br>"
                                                                + "AP PWD: " + "<font color='black'>" + pwd + "</font><br>"
                                                                + "Hostname: " + "<font color='black'>" + name + "</font><br></div>";

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('knomi-form').submit();
            }
            return popup_btn;
        }
        async function showPopupRestart(){
            popup_clicked = false;
            popup_btn = false;
            document.getElementById("popup_title_id").innerHTML="Restart?";
            document.getElementById("popup_content_id").innerHTML="KNOMI will disconnect the network connection and restart.<br>Please reconnect after KNOMI restart."

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('restart-form').submit();
            }
            return popup_btn;
        }
        function popupConfirm(){
            popup_clicked = true;
            popup_btn = true;
        }
        function popupCancel(){
            popup_clicked = true;
            popup_btn = false;
        }
  </script>
</head>
<body>
  <div class="topnav">
    <svg
   xmlns:dc="http://purl.org/dc/elements/1.1/"
   xmlns:cc="http://creativecommons.org/ns#"
   xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
   xmlns:svg="http://www.w3.org/2000/svg"
   xmlns="http://www.w3.org/2000/svg"
   version="1.1"
   width="130.29948"
   height="28.088511"
   id="logo"
   xml:space="preserve">
     <g
     transform="matrix(0.39011821,0,0,-0.39011821,0,28.088511)"
     id="g10"><g
       transform="scale(0.1,0.1)"
       id="g12"><path
         d="m 670,280 c 0,-77.883 62.875,-280 350,-280 284.76,0 360,183.152 360,280 0,83.445 -64.67,300 -360,300 C 732.875,580 670,363.445 670,280 z m 350,120 c 159.59,0 178.21,-89.141 179.89,-119.57 C 1198.28,260.371 1181.72,180 1020,180 869.75,180 851.824,254.961 850.098,280.41 851.605,310.676 868.945,400 1020,400"
         id="path14"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /><path
         d="m 1420,0 180,0 0,720 -180,0 0,-720 z"
         id="path16"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /><path
         d="m 1640,0 180,0 0,720 -180,0 0,-720 z"
         id="path18"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /><path
         d="m 1860,280 c 0,-96.848 75.24,-280 360,-280 l 140.07,0 0,180 -140.07,0 c -161.72,0 -178.28,80.371 -179.89,100.43 1.68,30.429 20.3,119.57 179.89,119.57 162.43,0 178.87,-92.473 180,-121.262 C 2400,276.25 2400,0 2400,0 l 180,0 0,280 c 0,83.445 -64.67,300 -360,300 -295.33,0 -360,-216.555 -360,-300"
         id="path20"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /><path
         d="m 2620,720 0,-440 c 0,-96.848 75.23,-280 360,-280 284.77,0 360,183.152 360,280 0,83.445 -64.67,300 -360,300 0,0 -100,0 -180,0 0,60.742 0,140 0,140 l -180,0 z m 360,-320 c 159.59,0 178.2,-89.141 179.88,-119.57 C 3158.28,260.371 3141.72,180 2980,180 c -165.14,0 -178.95,83.918 -180,101.738 0,0.93 0,71.348 0,118.262 80,0 180,0 180,0"
         id="path22"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /><path
         d="M 360,580 C 64.6719,580 0,363.445 0,280 0,183.152 75.2383,0 360,0 l 270,0 0,180 -270,0 C 198.277,180 181.723,260.371 180.113,280.43 181.793,310.859 200.41,400 360,400 l 270,0 0,180 -270,0"
         id="path24"
         style="fill:#2d2d3f;fill-opacity:1;fill-rule:nonzero;stroke:none" /></g></g></svg>
    <h1 class="mainTitle">KNOMI Settings Manager</h1>
  </div>
  <div class="content">
    <div class="card-grid">
      <div class="card">
        <form id="klipper-form" name="klipper-form" action="/" method="POST">
            <label class="ant-form-item-row">
                <span>Klipper IP:&nbsp</span>
                <input type="text" id ="ip" name="ip" $ip$ maxlength="64" placeholder="1.2.3.4 or printer.local">
            </label>
            <label class="ant-form-item-row">
                <span>Klipper Port:&nbsp</span>
                <input type="text" id ="port" name="port" $port$ maxlength="5">
            </label>
            <label class="ant-form-item-row">
                <span>Tool ID:&nbsp</span>
                <input type="text" id ="tool" name="tool" $tool$ maxlength="6">
            </label>
        </form>
        <input type ="submit" id="submit-btn" value ="Submit" onclick="showPopupKlipper()">
      </div>
    </div>
    <div id="modalOne" class="modal">
      <div class="modal-content">
        <div class="contact-form">
          <a class="close">&times;</a>
          <form class="modal_form" action="/" method="POST">
            <div>
              <input readonly id ="ssid" class="fname" type="text" name="ssid" placeholder="ssid" />
              <span></span>
              <input class="fname" type="text" name="password" placeholder="password" />
              <span></span>
            </div>
            <button type="submit" >Connect</button>
          </form>
        </div>
      </div>
    </div>
    <div class="table-container">
      <table>
        <thead>
          <tr>
            <th>SSID</th>
            <th>RSSI</th>
            <th>STATUS</th>
          </tr>
        </thead>
        <tbody>
          $wifi_list$
        </tbody>
      </table>
    </div>
    <form name="refresh" action="/" method="POST">
      <input type ="submit" class="refresh-btn" name="refresh" value="Refresh">
    </form>

    <div class="card-grid">
      <div class="card">
        <form id="knomi-form" name="knomi-form" action="/" method="POST">
          <select id ="mode" name="mode">
            <option value="ap" $ap$>AP</option>
            <option value="sta" $sta$>STA</option>
            <option value="apsta" $apsta$>AP+STA</option>
          </select>
          <label class="ant-form-item-row">
              <span>AP SSID:&nbsp</span>
              <input type="text" id ="ap-ssid" name="ap_ssid" $ap_ssid$ minlength="1" maxlength="32" required="required">
          </label>
          <label class="ant-form-item-row">
              <span>AP PWD:&nbsp</span>
              <input type="text" id ="ap-pwd" name="ap_password" $ap_password$ minlength="6" maxlength="64">
          </label>
          <label class="ant-form-item-row">
              <span>Hostname:&nbsp</span>
              <input type="text" id ="hostname" name="hostname" $hostname$ maxlength="15">
          </label>
        </form>
        <input type ="submit" id="submit-btn" value ="Submit" onclick="showPopupKnomi()">
      </div>
    </div>
    <div class="card-grid">
      <div class="card">
        <a href="update"><input type="submit" style="color: black; background-color: #d2d4d4" id="sys-btn" value ="Update Firmware"></a>
        <span style="width: 10px;"></span>
        <form id="restart-form" name="restart-form" action="/" method="POST">
            <input type="hidden" name="restart">
        </form>
        <input type ="submit" style="background-color: #6b6d6e" id="sys-btn" value="Restart" onclick="showPopupRestart()">
      </div>
    </div>
    <div id="popup_id">
      <div class="popup">
        <p id="popup_title_id" class="popup_title"></p>
        <p id="popup_content_id" class="popup_content"></p>
        <div class="popup_btn">
          <button style="background-color: #525252" onclick="popupCancel()">Cancel</button>
          <button onclick="popupConfirm()">Confirm</button>
        </div>
      </div>
    </div>
  </div>

  <script>
    let modalBtns = [...document.querySelectorAll(".showpop")];
    modalBtns.forEach(function (btn, index) {
      btn.onclick = function (event) {
        let modal = btn.getAttribute("data-modal");
        document.getElementById(modal).style.display = "block";
        console.log(modalBtns[index].getElementsByClassName("ssid")[0].innerHTML,document.getElementById("ssid"))
        document.getElementById("ssid").value = modalBtns[index].getElementsByClassName("ssid")[0].innerHTML;
      };
    });
    let closeBtns = [...document.querySelectorAll(".close")];
    closeBtns.forEach(function (btn) {
      btn.onclick = function () {
        let modal = btn.closest(".modal");
        modal.style.display = "none";
      };
    });
    window.onclick = function (event) {
      if (event.target.className === "modal") {
        event.target.style.display = "none";
      }
    };
  </script>
</body>
</html>)rawliteral";
