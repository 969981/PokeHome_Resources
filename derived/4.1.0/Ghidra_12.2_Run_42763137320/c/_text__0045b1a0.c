/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b1a0; name: FUN_.text__0045b1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0045b1a0(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_60;
  long lStack_58;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x174) = 0x42ca0000;
  }
  lVar6 = param_2;
  if ((*(byte *)(param_2 + 0x1bc) >> 2 & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x30);
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        if (*(int *)(lVar7 + 0x194) == 0) {
          lVar6 = *(long *)(lVar7 + 0x160);
          lVar8 = *(long *)(lVar7 + 0x170);
          lVar5 = FUN__text__0045cdec(param_2 + 0x68);
          if (lVar8 == lVar5) break;
        }
        lVar7 = *(long *)(lVar7 + 0x20);
      } while (lVar7 != 0);
    }
  }
  plVar1 = (long *)(param_1 + 0x30);
  lVar6 = FUN__text__0045c13c(plVar1,param_1,param_2,lVar6,param_3,
                              (*(byte *)(param_1 + 0x58) & 3) != 1);
  if (lVar6 == 0) {
    return 0x34;
  }
  *(undefined8 *)(lVar6 + 0x18) = 0;
  plVar2 = (long *)(param_2 + 0x20);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0x18) + 0x18);
  }
  *plVar2 = lVar6;
  *(long *)(param_2 + 0x18) = lVar6;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  FUN__text__0045c1d8();
  lVar7 = FUN__text__0040a740();
  if (lVar7 == 0) {
    iVar4 = 2;
    local_60 = *plVar1;
  }
  else {
    uVar3 = FUN__text__0045c058(lVar6);
    iVar4 = FUN__text__004884b0(lVar7 + 200,uVar3);
    if (iVar4 == 1) goto LAB__text__0045b320;
    local_60 = *plVar1;
  }
  if (local_60 != 0) {
    if (*(long *)(local_60 + 0x158) == param_2) {
      lStack_58 = 0;
    }
    else {
      do {
        lStack_58 = local_60;
        local_60 = *(long *)(lStack_58 + 0x20);
        if (local_60 == 0) goto LAB__text__0045b320;
      } while (*(long *)(local_60 + 0x158) != param_2);
    }
    FUN__text__00458f70(param_1,&local_60);
  }
LAB__text__0045b320:
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) {
    *_DAT_008a4da0 = 1;
  }
  return iVar4;
}


