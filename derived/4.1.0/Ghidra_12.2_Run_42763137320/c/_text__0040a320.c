/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040a320; name: FUN_.text__0040a320
 */


undefined4 FUN__text__0040a320(int *param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 *local_50;
  ulong local_48;
  uint local_24;
  
  uVar7 = param_2 >> 0x20;
  local_24 = (uint)param_2;
  iVar6 = (int)(param_2 >> 0x20);
  local_70 = CONCAT44(local_70._4_4_,iVar6);
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  lVar8 = DAT_00ae99f8;
  if (iVar6 == 0 && local_24 == 0) {
    for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x20)) {
      if (*(char *)(lVar8 + 0x555) != '\0') goto LAB__text__0040a4a4;
    }
  }
  else {
    uVar5 = param_2 & 0xffffffff;
    if ((local_24 == 0) || (iVar6 == 0)) {
      FUN__text__00408da0(&local_24,&local_70);
      uVar7 = local_70 & 0xffffffff;
      uVar5 = (ulong)local_24;
    }
    if (DAT_00ae99f8 != 0) {
      lVar8 = DAT_00ae99f8;
      do {
        if (*(ulong *)(lVar8 + 0x28) == (uVar5 | uVar7 << 0x20)) goto LAB__text__0040a4a4;
        lVar8 = *(long *)(lVar8 + 0x20);
      } while (lVar8 != 0);
    }
  }
  bVar3 = false;
  uVar4 = 0;
  local_70 = *(ulong *)param_1;
  uStack_68 = *(undefined8 *)(param_1 + 2);
  iVar6 = *param_1;
joined_r0x0040a4d0:
  if (iVar6 == 0) {
    local_70._4_4_ = (int)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    FUN__text__0041595c(1);
    FUN__text__00409f80(param_2,1);
    uVar2 = local_70;
  }
  else {
    FUN__text__00461fb0(uVar4);
    FUN__text__0041595c(1);
    FUN__text__00409f80(param_2,1);
    uVar2 = local_70;
  }
  if (bVar3 != false) {
    DAT_00ae9adc = uVar2;
    DAT_00ae9ae4 = uStack_68;
  }
  local_70._4_4_ = (int)((ulong)uVar2 >> 0x20);
  iVar6 = local_70._4_4_;
  bVar1 = local_70._4_4_ == 0;
  local_70 = uVar2;
  if (bVar1) {
    FUN__text__00408da0(&local_70,(ulong)&local_70 | 4);
  }
  uVar4 = FUN__text__00409744(local_70,&local_70,auStack_60,bVar3,iVar6 == 0);
  if ((local_50 != (undefined1 *)0x0) &&
     (local_48 = local_48 & 0xffffffff00000000, local_50 != auStack_60)) {
    FUN__text__00400fc0(4);
  }
  return uVar4;
LAB__text__0040a4a4:
  uVar4 = *(undefined4 *)(lVar8 + 100);
  FUN__text__0040a5b0(auStack_60,lVar8 + 0x40);
  bVar3 = *(char *)(lVar8 + 0x555) != '\0';
  param_2 = *(ulong *)(lVar8 + 0x28);
  local_70 = *(ulong *)param_1;
  uStack_68 = *(undefined8 *)(param_1 + 2);
  iVar6 = *param_1;
  goto joined_r0x0040a4d0;
}


