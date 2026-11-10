/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201520; name: FUN_.text__00201520
 */


void FUN__text__00201520(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  uVar1 = *param_2;
  local_a0 = 0;
  local_88 = 0;
  uVar2 = *param_3;
  lVar6 = *param_4;
  lVar10 = *param_1;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  plVar4 = (long *)FUN__text__0012615c();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  local_80 = 0x1f6eb1d31106cd60;
  uStack_78 = 0x7167e8;
  local_70 = 0x17;
  local_68 = 0;
  uVar5 = FUN__text__0013bb90(puVar8[0xaf],&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_a8 = (ulong)uVar1 << 0x20;
  local_b0 = uVar5;
  local_a0 = uVar2;
  local_98 = lVar6 + 0x110;
  local_90 = FUN__text__0013dcb8(lVar6,0,uVar2);
  local_88 = FUN__text__0013dcb8(lVar6,9,uVar2);
  uVar7 = local_a0;
  lVar11 = *(long *)(lVar10 + 0x80);
  *(long *)(lVar11 + 8) = lVar6 + 0x110;
  FUN__text__0013dde8(uVar5,local_a0);
  if ((int)local_a8 == 0) {
    FUN__text__0013e06c(uVar5,0,uVar7);
    lVar9 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x60);
  }
  else {
    FUN__text__0013e15c(uVar5,0,uVar7);
    lVar9 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x60);
  }
  if (lVar9 == 0) {
    uVar5 = *(undefined8 *)(lVar10 + 0x80);
    local_80 = 0x7fc3474483fb7d45;
    uVar7 = *(undefined4 *)(param_1[1] + (ulong)uVar1 * 4);
    local_b8 = 0;
  }
  else {
    plVar3 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar5 = *(undefined8 *)(lVar10 + 0x80);
    local_80 = 0x7fc3474483fb7d45;
    uVar7 = *(undefined4 *)(param_1[1] + (ulong)uVar1 * 4);
    local_b8 = lVar9;
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN__text__001ac8c4(uVar5,&local_90,&local_b8,&local_80,0,uVar7);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  uVar5 = FUN__text__0013e1c4(lVar6,uVar2);
  FUN__text__003a14c4(uVar5,1);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  *(undefined8 *)(lVar11 + 8) = 0;
  return;
}


