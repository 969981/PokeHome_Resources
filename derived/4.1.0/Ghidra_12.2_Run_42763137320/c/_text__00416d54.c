/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416d54; name: FUN_.text__00416d54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00416d54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = *_DAT_008a4b70;
  lVar7 = FUN__text__0040a740(param_2);
  if (lVar7 == 0) {
    return 2;
  }
  uVar3 = FUN__text__0045ceb0(param_2);
  uVar4 = uVar3 >> 8 & 0xf;
  if ((uVar4 < 4) && (((uVar3 & 0xff) != 0 || (uVar4 == 3)))) {
    uVar5 = FUN__text__0045ceb0(param_2);
    goto LAB__text__00416e4c;
  }
  uVar8 = FUN__text__0045ceb0(param_2);
  if ((uVar8 & 0xf00) == 0) {
    if (param_3 == 0) {
      uVar5 = *(undefined4 *)(lVar7 + 0x60);
      goto LAB__text__00416ea8;
    }
    uVar5 = *(undefined4 *)(param_3 + 0x160);
    goto LAB__text__00416e50;
  }
  uVar4 = FUN__text__0045ceb0(param_2);
  if ((uVar4 & 0xf00) == 0xe00) {
    cVar9 = *(char *)(lVar7 + 0x558);
LAB__text__00416de0:
    puVar1 = (undefined4 *)(lVar7 + 0x60);
    if (cVar9 != '\0') {
      puVar1 = (undefined4 *)(lVar7 + 0x90);
    }
    uVar5 = *puVar1;
  }
  else {
    uVar4 = FUN__text__0045ceb0(param_2);
    if (((uVar4 ^ 0xffffffff) & 0xf00) == 0) {
      cVar9 = *(char *)(lVar7 + 0x558);
      if ((cVar9 == '\0') || ((*(byte *)(lVar7 + 0x9c) & 1) == 0)) goto LAB__text__00416de0;
      uVar5 = 0x3102;
    }
    else {
      uVar5 = 0;
    }
  }
LAB__text__00416e4c:
  if (param_3 == 0) {
LAB__text__00416ea8:
    FUN__text__0045cc84(auStack_70,param_2);
    iVar6 = FUN__text__004d39c8(param_1,param_1,uVar5,uVar2,auStack_70,0);
    FUN__text__0045cca8(auStack_70);
    return iVar6;
  }
LAB__text__00416e50:
  FUN__text__0045cc84(auStack_58,param_2);
  iVar6 = FUN__text__004d39c8(param_1,param_1,uVar5,uVar2,auStack_58,param_3);
  FUN__text__0045cca8(auStack_58);
  if (iVar6 == 1) {
    iVar6 = FUN__text__0045b1a0(param_1,param_3,0);
  }
  return iVar6;
}


