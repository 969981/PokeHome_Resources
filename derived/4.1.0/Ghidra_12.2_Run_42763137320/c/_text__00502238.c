/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00502238; name: FUN_.text__00502238
 */


long FUN__text__00502238(long *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  long local_60;
  
  *param_2 = 0;
  if ((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0 && (char)param_1[0x19] != '\0') {
    uVar1 = (undefined4)param_1[0x18];
    uVar2 = *(undefined4 *)((long)param_1 + 0xc4);
    FUN__text__005010c4(param_1 + 0x13);
    lVar6 = param_1[0xf];
    if (lVar6 == 0) {
      lVar3 = FUN__text__004f79c0(param_1[0x12],0,uVar1);
      lVar4 = *(long *)(lVar3 + 0x50);
    }
    else {
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB__text__00502270;
      lVar3 = FUN__text__004f79c0(param_1[0x12],
                                  *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x78) + 0x20),
                                  uVar1);
      lVar4 = *(long *)(lVar3 + 0x50);
    }
    if (lVar4 == 0) {
      *param_2 = *(byte *)(lVar3 + 0x48) >> 6 & 1;
      lVar6 = FUN__text__00502860(param_1,lVar3,lVar6,uVar1,uVar2);
      return lVar6;
    }
    local_80 = *(byte *)(lVar3 + 0x30);
    local_a0 = 0;
    local_98 = 0;
    local_90 = *(undefined8 *)(lVar3 + 0x20);
    local_88 = *(undefined8 *)(lVar3 + 0x28);
    local_60 = 0;
    local_b0 = 0;
    local_a8 = 0;
    lVar4 = *(long *)(lVar3 + 0x50);
    local_7c = *(undefined8 *)(lVar4 + 4);
    local_74 = *(undefined4 *)(lVar4 + 0xc);
    uStack_70 = 0;
    cStack_68 = (*(byte *)(lVar4 + 0x1c) & 1) << 6;
    *param_2 = *(byte *)(lVar4 + 0x1c) & 1;
    lVar6 = FUN__text__00502860(param_1,&local_b0,lVar6,**(undefined4 **)(lVar3 + 0x50),0);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) {
        lVar6 = (**(code **)(*param_1 + 0x120))(param_1);
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x50);
        local_90 = *(undefined8 *)(lVar4 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar4 + 0x18));
        uVar5 = *(undefined8 *)(lVar3 + 0x41);
        local_80 = (*(byte *)(lVar4 + 0x1c) & 2) << 4 | local_80 & 0xc0 | 7;
        local_7c = *(undefined8 *)(lVar3 + 0x34);
        local_74 = (undefined4)*(undefined8 *)(lVar3 + 0x3c);
        uStack_70._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar3 + 0x3c) >> 0x20);
        uStack_70._1_3_ = (undefined3)uVar5;
        uStack_6c = (undefined4)((ulong)uVar5 >> 0x18);
        cStack_68 = (char)((ulong)uVar5 >> 0x38);
        FUN__text__00502860(param_1,&local_b0,lVar6,uVar1,uVar2);
      }
    }
    if (local_60 != 0) {
      FUN__text__00400fc0(2);
    }
    if (local_b0 != 0) {
      local_a8 = local_a8 & 0xffffffff00000000;
      FUN__text__00400fc0(0);
      local_b0 = 0;
      local_a8 = local_a8 & 0xffffffff;
    }
    if (local_a0 != 0) {
      local_98 = local_98 & 0xffffffff00000000;
      FUN__text__00400fc0(0);
    }
  }
  else {
LAB__text__00502270:
    lVar6 = 0;
  }
  return lVar6;
}


