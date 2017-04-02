/////////////////////////////////////////////////////////////////
/////////// This File was Edited by GUI D3V by Shinji ///////////
/////////////////////////////////////////////////////////////////
class TresorDialog {
   idd = 18504;
   name = "TresorDialog";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class Life_RscText0 : Life_RscText
       {
           x = 0.197916666666667 * safezoneW + safezoneX;
           y = 0.106172130509569 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.596875 * safezoneW;
           text = " Schließfach";
           colorbackground[] = {0.254901960784314,0.411764705882353,0.882352941176471,0.647058823529412};
           idc = 1000;
       };
       class Life_RscText1 : Life_RscText
       {
           x = 0.1984375 * safezoneW + safezoneX;
           y = 0.143559488692232 * safezoneH + safezoneY;
           h = 0.706924240419466 * safezoneH;
           w = 0.596875 * safezoneW;
           colorbackground[] = {0,0,0,0.686274509803922};
           idc = 1001;
       };
   };
   class controls
   {
       class ListTresor : Life_RscListBox
       {
           idc = 1002;
           x = 0.209375 * safezoneW + safezoneX;
           y = 0.258135444151275 * safezoneH + safezoneY;
           w = 0.26875 * safezoneW;
           h = 0.456024626209323 * safezoneH;
           onlbdblclick = "[3] spawn life_fnc_tresorHandle";
       };
       class Life_RscText2 : Life_RscText
       {
           x = 0.209375 * safezoneW + safezoneX;
           y = 0.207533421284081 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.1359375 * safezoneW;
           text = "Schließfach";
           idc = 1003;
       };
       class Life_RscText20 : Life_RscText
       {
           x = 0.514583333333333 * safezoneW + safezoneX;
           y = 0.207533421284081 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.127604166666667 * safezoneW;
           text = "Inventar";
           idc = 1004;
       };
       class ListInv : Life_RscListBox
       {
           idc = 1005;
           x = 0.514583333333333 * safezoneW + safezoneX;
           y = 0.258135444151275 * safezoneH + safezoneY;
           w = 0.26875 * safezoneW;
           h = 0.456024626209323 * safezoneH;
           onlbdblclick = "[2] spawn life_fnc_tresorHandle";
       };
       class EditTresor : Life_RscEdit
       {
           idc = 1006;
           text = "1";
           x = 0.209375 * safezoneW + safezoneX;
           y = 0.728671943711522 * safezoneH + safezoneY;
           w = 0.26875 * safezoneW;
           h = 0.0329815303430079 * safezoneH;
       };
       class EditInv : Life_RscEdit
       {
           idc = 1007;
           text = "1";
           x = 0.514583333333333 * safezoneW + safezoneX;
           y = 0.728671943711522 * safezoneH + safezoneY;
           w = 0.269791666666667 * safezoneW;
           h = 0.0329815303430079 * safezoneH;
       };
       class BT_Close : Life_RscButtonMenu
       {
           idc = 1008;
           text = "X";
           action = "closedialog 0";
           x = 0.771476333333333 * safezoneW + safezoneX;
           y = 0.10420556217132 * safezoneH + safezoneY;
           w = 0.0248778333333333 * safezoneW;
           h = 0.037 * safezoneH;
       };
       class WeightTres : Life_RscText
       {
           x = 0.345833333333333 * safezoneW + safezoneX;
           y = 0.207533421284081 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.133333333333333 * safezoneW;
           style = ST_CENTER;
           text = "%1 / %2";
           idc = 1009;
       };
       class WeightInv : Life_RscText
       {
           x = 0.650520833333334 * safezoneW + safezoneX;
           y = 0.207533421284081 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.133333333333333 * safezoneW;
           style = ST_CENTER;
           text = "%1 / %2";
           idc = 1010;
       };
       class BT_TakeTresor : Life_RscButtonMenu
       {
           idc = 1011;
           text = "Nehmen";
           x = 0.272916666666667 * safezoneW + safezoneX;
           y = 0.782502817941953 * safezoneH + safezoneY;
           w = 0.139859833333333 * safezoneW;
           h = 0.039216 * safezoneH;
           onbuttonclick = "[1] spawn life_fnc_tresorHandle;";
       };
       class BT_TakeInv : Life_RscButtonMenu
       {
           idc = 1012;
           text = "Lagern";
           x = 0.578507583333334 * safezoneW + safezoneX;
           y = 0.782502817941953 * safezoneH + safezoneY;
           w = 0.139859833333333 * safezoneW;
           h = 0.039216 * safezoneH;
           onbuttonclick = "[0] spawn life_fnc_tresorHandle;";
       };
       class Life_RscButtonMenu0 : Life_RscButtonMenu
       {
           idc = 1013;
           text = "Upgrade";
           x = 0.626041666666667 * safezoneW + safezoneX;
           y = 0.10420556217132 * safezoneH + safezoneY;
           w = 0.136336166666667 * safezoneW;
           h = 0.037 * safezoneH;
           onbuttonclick = "[] spawn life_fnc_tresorUpgrade";
       };
       class Hider : Life_RscText
       {
           x = 0.197916666666667 * safezoneW + safezoneX;
           y = 0.144542772861357 * safezoneH + safezoneY;
           h = 0.704636866540578 * safezoneH;
           w = 0.596875 * safezoneW;
           colorbackground[] = {0,0,0,1};
		   text="";
           idc = 1520;
       };
       class HidingText : Life_RscText
       {
           x = 0.338020833333333 * safezoneW + safezoneX;
           y = 0.389591468777485 * safezoneH + safezoneY;
           h = 0.160980211081794 * safezoneH;
           w = 0.3 * safezoneW;
           colorbackground[] = {1,1,1,0};
		   text="";
           idc = 1521;
       };
       class HidingText0 : Life_RscText
       {
           x = 0.209375 * safezoneW + safezoneX;
           y = 0.158447947556448 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.574479166666667 * safezoneW;
           colorbackground[] = {1,1,1,0};
           idc = 1014;
		   text="";
       };
   };
};
/////////////////////////////////////////////////////////////////
////////////////////////// FILE END /////////////////////////////
/////////////////////////////////////////////////////////////////
