/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003aec90; name: FUN_.text__003aec90
 */


undefined8 FUN__text__003aec90(long *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((char)param_1[0x10a] == '\0') {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0xe8))();
  if (uVar2 < 2) {
    return 0;
  }
  if (*(long *)param_1[0x104] != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)param_1[0x104] + 0x50))();
    plVar4 = (long *)FUN__text__003b37cc();
    if (plVar4 == plVar3) {
LAB__text__003aed18:
      if ((int)param_1[0x112] != 2) {
        return 0;
      }
      if (*param_2 == '\0') {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x90c) = 1;
      *(undefined4 *)(param_1 + 0x122) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((long)param_1 + 0x914) = *(undefined4 *)(param_2 + 8);
      if (((int)param_1[0x121] == 2) && (param_2[1] != '\0')) {
        local_18 = *(undefined4 *)(param_2 + 0xc);
        uStack_14 = *(undefined4 *)(param_2 + 0x10);
        uVar5 = FUN__text__003b6d98(param_1[0xfc],&local_18);
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x121) = 3;
          return 1;
        }
        uVar5 = FUN__text__003ae464(param_1,&local_18);
        if ((uVar5 & 1) != 0) {
          param_1[0x123] = 0;
          param_1[0x124] = 0;
          *(undefined4 *)(param_1 + 0x121) = 1;
          param_1[0x125] = 0;
          param_1[0x126] = 0;
          param_1[0x127] = 0;
          param_1[0x128] = 0;
          param_1[0x129] = 0;
          param_1[0x12a] = 0;
          param_1[299] = 0;
          param_1[300] = 0;
          param_1[0x12d] = 0;
          param_1[0x12e] = 0;
          *(int *)(param_1 + 0x120) = (int)param_1[0x122];
          param_1[0x12f] = 0;
          param_1[0x130] = 0;
          param_1[0x131] = 0;
          param_1[0x132] = 0;
          param_1[0x133] = 0;
          param_1[0x134] = 0;
          param_1[0x135] = 0;
          param_1[0x136] = 0;
          param_1[0x137] = 0;
          param_1[0x138] = 0;
          *(undefined4 *)((long)param_1 + 0x904) = *(undefined4 *)((long)param_1 + 0x914);
          param_1[0x139] = 0;
          param_1[0x13a] = 0;
          param_1[0x13b] = 0;
          param_1[0x13c] = 0;
          param_1[0x13d] = 0;
          param_1[0x13e] = 0;
          param_1[0x13f] = 0;
          param_1[0x140] = 0;
          *(undefined4 *)(param_1 + 0x141) = 0;
          return 1;
        }
      }
      return 1;
    }
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 != (long *)0x0) goto LAB__text__003aed18;
  }
  if ((int)param_1[0x112] == 2) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x82) == '\0') {
    return 0;
  }
  if ((int)param_1[0x112] != 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x84) == '\0') {
    return 0;
  }
  plVar3 = (long *)FUN__text__003ae040(param_1[0x104]);
  if (plVar3 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x68))();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((int)param_1[0x112] != 0) {
      return 0;
    }
    uVar5 = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (param_2[1] != '\0') {
      local_18 = *(undefined4 *)(param_2 + 0xc);
      uStack_14 = *(undefined4 *)(param_2 + 0x10);
      uVar5 = FUN__text__003b6d98(param_1[0xfc],&local_18);
      if ((uVar5 & 1) != 0) {
        uVar6 = 3;
        goto LAB__text__003aeef0;
      }
    }
    local_18 = *(undefined4 *)(param_2 + 0xc);
    uStack_14 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = FUN__text__003ae464(param_1,&local_18);
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
LAB__text__003aeef0:
      *(undefined4 *)(param_1 + 0x121) = uVar6;
      uVar6 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x120) = uVar6;
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x122) = uVar6;
      param_1[0x123] = 0;
      param_1[0x124] = 0;
      param_1[0x125] = 0;
      param_1[0x126] = 0;
      param_1[0x127] = 0;
      param_1[0x128] = 0;
      param_1[0x129] = 0;
      param_1[0x12a] = 0;
      param_1[299] = 0;
      param_1[300] = 0;
      param_1[0x12d] = 0;
      param_1[0x12e] = 0;
      param_1[0x12f] = 0;
      *(undefined1 *)((long)param_1 + 0x90c) = 1;
      param_1[0x130] = 0;
      param_1[0x131] = 0;
      param_1[0x132] = 0;
      param_1[0x133] = 0;
      param_1[0x134] = 0;
      param_1[0x135] = 0;
      param_1[0x136] = 0;
      param_1[0x137] = 0;
      *(undefined4 *)((long)param_1 + 0x904) = uVar1;
      *(undefined4 *)((long)param_1 + 0x914) = uVar1;
      param_1[0x138] = 0;
      param_1[0x139] = 0;
      param_1[0x13a] = 0;
      param_1[0x13b] = 0;
      param_1[0x13c] = 0;
      param_1[0x13d] = 0;
      param_1[0x13e] = 0;
      param_1[0x13f] = 0;
      param_1[0x140] = 0;
      *(undefined4 *)(param_1 + 0x141) = 0;
      FUN__text__003b24a0(param_1[0x104],param_1[1]);
      if ((code *)param_1[0x98] != (code *)0x0) {
        local_18 = 2;
        (*(code *)param_1[0x98])(param_1 + 0x9c,&local_18);
      }
      (**(code **)(**(long **)param_1[0x104] + 0x38))();
      *(undefined4 *)(param_1 + 0xfb) = 0;
      *(undefined4 *)(param_1 + 0x112) = 2;
      *(undefined1 *)((long)param_1 + 0x85) = 0;
      FUN__text__003a1648(param_1,1);
      return 1;
    }
  }
  return 0;
}


