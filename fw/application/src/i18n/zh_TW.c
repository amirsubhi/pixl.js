
#include "language.h"

const char * lang_zh_tw[_L_COUNT] = {
    [_L_ON] = "開", 
    [_L_OFF] = "關", 
    [_L_BACK] = "返回",
    [_L_ERR] = "錯誤",
    [_L_ERR_CODE] = "錯誤碼",
    [_L_APP_AMIIBO] = "Amiibo模擬器", 
    [_L_APP_AMIIBOLINK] = "AmiiboLink",
    [_L_APP_BLE] = "藍牙傳送",
    [_L_APP_BLE_TITLE] = "藍牙傳送",
    [_L_APP_PLAYER] = "動畫播放器",
    [_L_APP_SET] = "系統設定",
    [_L_APP_SET_VERSION] = "版本",
    [_L_APP_SET_SKIP_DRIVER_SELECT] = "自動選擇儲存",
    [_L_APP_SET_OLED_CONTRAST] = "OLED對比度",
    [_L_APP_SET_OLED_CONTRAST_TITLE] = "OLED對比度",
    [_L_APP_SET_LCD_BACKLIGHT] = "背光亮度",
    [_L_APP_SET_LCD_BACKLIGHT_TITLE] = "背光亮度",
    [_L_APP_SET_ANIM] = "動畫效果",
    [_L_APP_SET_LIPO_BAT] = "LiPO電池",
    [_L_APP_SET_SHOW_MEM_USAGE] = "記憶體使用率",
    [_L_APP_SET_HIBERNATE] = "快速喚醒",
    [_L_APP_SET_SLEEP_TIMEOUT] = "休眠時間",
    [_L_APP_SET_LANGUAGE] = "系統語言",
    [_L_APP_SET_DFU] = "軟體升級",
    [_L_APP_SET_REBOOT] = "重啟設備",
    [_L_APP_SET_MENU_EXIT] = "返回主選單",
    [_L_15S] = "15秒",
    [_L_30S] = "30秒",
    [_L_45S] = "45秒",
    [_L_1MIN] = "1分鐘",
    [_L_2MIN] = "2分鐘",
    [_L_3MIN] = "3分鐘",
    [_L_AMIIBO_KEY_UNLOADED] = "Amiibo Key未載入",
    [_L_UPLOAD_KEY_RETAIL_BIN] = "上傳檔案 key_retail.bin\n到儲存根目錄下。",
    [_L_KNOW] = "知道了",
    [_L_RANDOM_GENERATION] = "隨機產生",
    [_L_AUTO_RANDOM_GENERATION] = "自動隨機產生",
    [_L_DELETE_TAG] = "刪除標籤",
    [_L_BACK_TO_DETAILS] = "返回詳情",
    [_L_BACK_TO_FILE_LIST] = "返回檔案清單",
    [_L_BACK_TO_MAIN_MENU] = "返回主選單",
    [_L_FORMAT] = "格式化",
    [_L_FORMAT_STORAGE] = "格式化儲存",
    [_L_DELETE_ALL_DATA] = "將刪除所有資料。\n確認格式化?",
    [_L_CONFIRM] = "確定",
    [_L_CANCEL] = "取消",
    [_L_BACK_TO_LIST] = "返回清單",
    [_L_NOT_MOUNTED] = "=====未掛載=====",
    [_L_MOUNTED_LFS] = "===已掛載[LFS]===",
    [_L_MOUNTED_FFS] = "===已掛載[FFS]===",
    [_L_TOTAL_SPACE] = "總空間",
    [_L_AVAILABLE_SPACE] = "可用空間",
    [_L_NOT_AMIIBO_FILE] = "這不是Amiibo檔案",
    [_L_READ_FILE_FAILED] = "讀取檔案失敗",
    [_L_INPUT_FOLDER_NAME] = "輸入資料夾名稱:",
    [_L_INPUT_AMIIBO_NAME] = "輸入amiibo名稱:",
    [_L_DELETE] = "刪除",
    [_L_INPUT_NEW_NAME] = "輸入新名稱:",
    [_L_CREATE_NEW_FOLDER] = "新建資料夾..",
    [_L_CREATE_NEW_TAG] = "新建標籤..",
    [_L_RENAME] = "重新命名",
    [_L_MAIN_MENU] = "[主選單]",
    [_L_OPEN_FOLDER_FAILED] = "開啟資料夾失敗",
    [_L_RENAME_FAILED] = "重新命名失敗",
    [_L_MAIN_RETURN] = "[返回]",
    [_L_RANDOM_MODE_MANUAL] = "隨機模式(手動)",
    [_L_RANDOM_MODE_AUTO] = "隨機模式(自動)",
    [_L_SEQUENCE_MODE] = "按序模式",
    [_L_READ_WRITE_MODE] = "讀寫模式",
    [_L_AMIIBOLINK_V1] = "V1(歷史版本)",
    [_L_AMIIBOLINK_V2] = "V2(最新版本)",
    [_L_AMILOOP] = "AmiLoop",
    [_L_MODE] = "模式",
    [_L_AUTO_RANDOM] = "自動隨機",
    [_L_COMPATIBLE_MODE] = "相容模式",
    [_L_TAG_DETAILS] = "[標籤詳情]",
    [_L_MODE_RANDOM] = "隨機(手動)",
    [_L_MODE_CYCLE] = "按序",
    [_L_MODE_NTAG] = "讀寫",
    [_L_MODE_RANDOM_AUTO_GEN] = "隨機(自動)",
    [_L_BLANK_TAG] = "空標籤",
    [_L_APP_AMIIDB] = "Amiibo數據庫",
    [_L_APP_AMMIDB_BROWSER] = "查看..",
    [_L_APP_AMIIDB_SEARCH] = "搜索..",
    [_L_APP_AMIIDB_MY_FAVORITES] = "我的收藏..",
    [_L_APP_AMIIDB_MY_TAGS] = "我的數據..",
    [_L_APP_AMIIDB_SETTINGS] = "設置..",
    [_L_APP_AMIIDB_EXIT] = "[退出]",
    [_L_APP_AMIIDB_BACK] = "[返回]",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY] = "密鑰文件",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_LOADED] = "已加載",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_NOT_LOADED] = "未加載",
    [_L_APP_AMIIDB_SETTINGS_SLOT_NUM] = "數據槽位",
    [_L_APP_AMIIDB_DETAIL_FAVORITE] = "收藏..",
    [_L_APP_AMIIDB_DETAIL_SAVE_AS] = "保存爲..",
    [_L_APP_AMIIDB_DETAIL_BACK_DETAIL] = "[返回詳情]",
    [_L_APP_AMIIDB_DETAIL_BACK_LIST] = "[返回列表]",
    [_L_APP_AMIIDB_SEARCH_HEAD] = "搜索:",
    [_L_APP_AMIIDB_MORE] = "[更多]",
    [_L_APP_AMIIDB_EMPTY_TAG] = "<空標簽>",
    [_L_APP_AMIIDB_SLOT_DELETE] = "重置..",
    [_L_APP_AMIIDB_CONFIRM] = "確認",
    [_L_APP_AMIIDB_CANCEL] = "取消",
    [_L_APP_AMIIDB_TIPS] = "提示",
    [_L_APP_AMIIDB_NEW] = "新建..",
    [_L_APP_AMIIDB_EMPTY] = "清空..",
    [_L_APP_AMIIDB_DELETE] = "删除..",
    [_L_APP_AMIIDB_FAV_NEW_HEAD] = "新建收藏夾:",
    [_L_APP_AMIIDB_FAV_EMPTY_MSG] = "確認清空收藏夾?",
    [_L_APP_AMIIDB_FAV_DELETE_MSG] = "確認刪除?",
    [_L_APP_AMIIDB_FAV_SELECT_FOLDER] = "選擇收藏夾..",
    [_L_APP_AMIIDB_FAV_SUCCESS] = "收藏成功",
    [_L_APP_AMIIDB_FAV_FAILED] = "收藏失敗",
    [_L_APP_AMIIDB_SLOT_SAVE_SUCCESS] = "保存成功",
    [_L_APP_AMIIDB_SLOT_SAVE_FAILED] = "保存失敗",
    [_L_APP_CHAMELEON] = "变色龙",
};