/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067aeb8; name: FUN_.text__0067aeb8
 */


undefined8 FUN__text__0067aeb8(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = FUN__text__00680914();
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar2 + 0xdc) == 5))
  {
    return 0xfffffe0b;
  }
  lVar6 = *(long *)(lVar2 + 0xa8);
  if (lVar6 != 0) {
    uVar3 = FUN__text__00685cf8(lVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((*(char *)(lVar6 + 0x90) == '\0') && (lVar6 != *(long *)(param_1 + 0x150))) {
      FUN__text__00683bec(lVar6,param_1 + 0x890);
      FUN__text__006809e4(param_1 + 0x890,lVar6);
    }
  }
  if ((*(code **)(param_1 + 0x818) != (code *)0x0) &&
     (iVar1 = (**(code **)(param_1 + 0x818))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
    return 0xfffffc7a;
  }
  if (param_2 == 0) {
    if ((*(byte *)(lVar2 + 0xe4) & 1) != 0) goto LAB__text__0067afc0;
LAB__text__0067afb0:
    bVar4 = false;
    plVar5 = (long *)(param_1 + 0x8f0);
  }
  else {
    param_2 = *(char *)(param_1 + 0x9aa) == '\0' ^ param_2;
    if ((*(byte *)(lVar2 + 0xe4) & 1) == 0) {
      if ((param_2 & 1) != 0) goto LAB__text__0067afb0;
      plVar5 = (long *)(param_1 + 0x8e8);
      bVar4 = true;
    }
    else {
      if ((param_2 & 1) == 0) {
        bVar4 = true;
        goto LAB__text__0067afd4;
      }
LAB__text__0067afc0:
      bVar4 = false;
      plVar5 = (long *)(param_1 + 0x8f8);
    }
  }
  *plVar5 = *plVar5 + -1;
LAB__text__0067afd4:
  *(byte *)(lVar2 + 0xe4) = *(byte *)(lVar2 + 0xe4) | 2;
  if ((*(byte *)(param_1 + 0x99c) >> 4 & 1) == 0) {
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      bVar4 = true;
    }
    if ((!bVar4) && (iVar1 = FUN__text__006863d4(lVar2), iVar1 != 0)) {
      if (*(long *)(param_1 + 0x8c8) == 0) {
        *(long *)(param_1 + 0x8c0) = lVar2;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x8c8) + 0x98) = lVar2;
        *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x8c8);
      }
      *(long *)(param_1 + 0x8c8) = lVar2;
      *(long *)(param_1 + 0x908) = *(long *)(param_1 + 0x908) + 1;
      return 0;
    }
  }
  uVar3 = FUN__text__0067b054(param_1,lVar2);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}


