//HEADER_GOES_HERE
#ifndef __LOADSAVE_H__
#define __LOADSAVE_H__

extern BYTE *tbuff;

void LoadGame(BOOL firstflag);
char BLoad();
int WLoad();
int ILoad();
BOOL OLoad();
void CopyItems(const int n, ItemStruct *pItem);
void CopyItem(ItemStruct *pItem);

void LoadPlayer(int i);
void LoadMonster(int i);
void LoadMissile(int i);
void LoadObject(int i);
void LoadItem(int t);
void LoadPremium(int t);
void LoadQuest(int i);
void LoadLighting(int i);
void LoadVision(int i);
void LoadPortal(int i);
void SaveGame();
void BSave(char v);
void WSave(int v);
void ISave(int v);
void OSave(BOOL v);
void SavePlayer(int i);
void SaveMonster(int i);
void SaveMissile(int i);
void SaveObject(int i);
void SaveItem(int i);
void SavePremium(int i);
void SaveQuest(int i);
void SaveLighting(int i);
void SaveVision(int i);
void SavePortal(int i);
void SaveLevel();
void LoadLevel();

#endif /* __LOADSAVE_H__ */
