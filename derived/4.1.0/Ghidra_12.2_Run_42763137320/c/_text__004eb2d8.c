/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb2d8; name: FUN_.text__004eb2d8
 */


long FUN__text__004eb2d8(long param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                        long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_190 [264];
  long local_88;
  char local_68;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
  FUN__text__004f6114(auStack_190,*(long *)(param_1 + 0x10),0);
  if (local_88 == 0) {
    lVar3 = 0;
    *param_3 = 0;
    goto LAB__text__004eb460;
  }
  lVar4 = lVar4 - lVar3;
  *param_3 = 1;
  lVar5 = *(long *)(local_88 + 0x18);
  *param_4 = 0;
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x5a) & 1) == 0)) {
    iVar1 = 3;
LAB__text__004eb34c:
    if (local_68 != '\0') {
LAB__text__004eb354:
      lVar3 = 0;
      *param_3 = iVar1 != 3;
      goto LAB__text__004eb460;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_190,0);
    if (*(long *)(local_88 + 0x18) == 0) {
      lVar3 = 0;
      *param_3 = iVar1 != 3;
      if ((lVar5 == 0) || (iVar1 != 1)) goto LAB__text__004eb460;
      if ((*(byte *)(lVar5 + 0x5a) & 1) != 0) {
LAB__text__004eb438:
        lVar3 = FUN__text__004f6200(auStack_190);
        *param_5 = lVar3;
        lVar3 = lVar3 - lVar4;
        goto LAB__text__004eb460;
      }
    }
    else {
      if ((iVar1 == 3) && ((*(byte *)(*(long *)(local_88 + 0x18) + 0x5a) & 1) == 0))
      goto LAB__text__004eb354;
      *param_4 = 1;
      iVar2 = FUN__text__004eb490(param_1,auStack_190,param_2,param_5);
      *param_3 = iVar1 != 3 || iVar2 != 3;
      if (iVar2 - 2U < 2) {
        if (iVar1 != 3) goto LAB__text__004eb438;
      }
      else if (iVar2 == 0) goto LAB__text__004eb450;
    }
  }
  else {
    iVar1 = FUN__text__004eb490(param_1,auStack_190,param_2,param_5);
    if (iVar1 != 2) {
      if (iVar1 != 0) goto LAB__text__004eb34c;
LAB__text__004eb450:
      lVar3 = *param_5 - lVar4;
      goto LAB__text__004eb460;
    }
  }
  lVar3 = 0;
LAB__text__004eb460:
  FUN__text__004f6174(auStack_190);
  return lVar3;
}


