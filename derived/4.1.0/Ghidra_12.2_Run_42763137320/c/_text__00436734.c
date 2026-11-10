/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436734; name: FUN_.text__00436734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00436734(long *param_1,undefined4 *param_2,undefined4 *param_3,long *param_4,
                   undefined8 param_5,undefined1 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_64;
  
  lVar6 = *param_4;
  puVar8 = (undefined8 *)param_4[2];
  piVar1 = (int *)(lVar6 + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    if (*piVar1 == 0) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        return 0;
      }
      if (*(char *)(lVar6 + 0x29) != '\0') {
        return 0;
      }
      goto LAB__text__00436898;
    }
    bVar3 = true;
    lVar7 = *param_1;
joined_r0x004367b8:
    if (lVar7 != 0) goto LAB__text__0043679c;
LAB__text__004367bc:
    lVar7 = FUN__text__00400f80(0x10,0x30);
    if (lVar7 == 0) {
      *param_1 = 0;
      return 0;
    }
    FUN__text__00436088(lVar7,lVar6,param_4[1]);
    *param_1 = lVar7;
    cVar2 = *(char *)(lVar7 + 0x29);
  }
  else {
    bVar3 = *(char *)(puVar8 + 1) == '\0';
    if (*(char *)(puVar8 + 1) == '\0' && *(char *)((long)param_4 + 0x1c) == '\0') {
      bVar3 = *(char *)((long)puVar8 + 9) != '\0';
      lVar7 = *param_1;
      goto joined_r0x004367b8;
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB__text__004367bc;
LAB__text__0043679c:
    cVar2 = *(char *)(lVar7 + 0x29);
  }
  if (cVar2 != '\0') {
    return 0;
  }
  local_64 = *param_3;
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar8;
  }
  if (!bVar3) {
    piVar1 = (int *)0x0;
  }
  uVar4 = FUN__text__004360fc(*param_2,lVar7,&local_64,uVar5,piVar1,(int)param_4[3],param_5);
  *param_3 = local_64;
  if ((uVar4 & 1) != 0) {
    *param_6 = 0;
    *param_3 = *param_2;
    *(undefined4 *)(param_1 + 4) = *param_2;
    return 1;
  }
  lVar6 = *param_1;
LAB__text__00436898:
  if (*(long *)(lVar6 + 0x10) != 0) {
    FUN__text__0042f5a0(*_DAT_008a4648,*(long *)(lVar6 + 0x10),lVar6);
    *(undefined8 *)(lVar6 + 0x10) = 0;
  }
  *(undefined1 *)(lVar6 + 0x28) = 0;
  return 0;
}


