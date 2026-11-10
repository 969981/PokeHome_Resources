/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404260; name: FUN_.text__00404260
 */


void FUN__text__00404260(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 0xd1c) != 0) {
    FUN__text__00404660(param_1,param_3);
    FUN__text__00402220(param_1,param_2);
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x2c);
  if (uVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0xbd8);
    *(long *)(param_2 + 0xbd8) = lVar2 + 1;
    *(long *)(param_2 + lVar2 * 8 + 0xbe0) = param_3;
    if (*(long *)(param_2 + 0xbd8) == 0x20) {
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbe0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbe8));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbf0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbf8));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc00));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc08));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc10));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc18));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc20));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc28));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc30));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc38));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc40));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc48));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc50));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc58));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc60));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc68));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc70));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc78));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc80));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc88));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc90));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc98));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xca0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xca8));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcb0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcb8));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcc0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcc8));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcd0));
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcd8));
      *(undefined8 *)(param_2 + 0xbd8) = 0;
    }
  }
  else {
    lVar4 = param_2 + (ulong)uVar1 * 0x108;
    lVar2 = *(long *)(lVar4 + 0xb18);
    *(long *)(lVar4 + 0xb18) = lVar2 + 1;
    ((long *)(lVar4 + 0xb18))[lVar2 + 1] = param_3;
    uVar3 = 0x20 - (ulong)(uVar1 >> 1);
    if (*(ulong *)(lVar4 + 0xb18) == uVar3) {
      lVar2 = 6;
      if (uVar3 < 0x10) {
        lVar2 = (uVar3 >> 2) + 2;
      }
      lVar6 = uVar3 - lVar2;
      puVar5 = (undefined8 *)
               ((ulong)uVar1 * 0x108 + (lVar2 + (ulong)(uVar1 >> 1)) * -8 + param_2 + 0xc20);
      do {
        FUN__text__00404660(param_1,*puVar5);
        lVar2 = lVar2 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar2 != 0);
      *(long *)(lVar4 + 0xb18) = lVar6;
      return;
    }
  }
  return;
}


