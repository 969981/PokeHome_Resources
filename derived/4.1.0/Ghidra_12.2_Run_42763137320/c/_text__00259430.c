/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00259430; name: FUN_.text__00259430
 */


void FUN__text__00259430(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  long local_28;
  
  *(int *)(param_1 + 0x6ec) = *(int *)(param_1 + 0x6ec) + param_2;
  iVar7 = FUN__text__0024ede0(*(undefined8 *)(param_1 + 0x640));
  uVar9 = *(uint *)(param_1 + 0x6ec);
  if ((int)uVar9 < 0) {
    uVar9 = iVar7 - 1U;
LAB__text__00259484:
    *(uint *)(param_1 + 0x6ec) = uVar9;
  }
  else if (iVar7 - 1U < uVar9) {
    uVar9 = 0;
    goto LAB__text__00259484;
  }
  lVar10 = *(long *)(param_1 + 0x640);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_28 = *(long *)(param_1 + 0xfe0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar10,&local_28,param_1 + 0x1004,uVar9);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  iVar3 = *(int *)(param_1 + 0x1004);
  iVar7 = 3;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  iVar4 = *(int *)(param_1 + 0x6e8);
  *(bool *)(param_1 + 0x1008) = iVar3 == 0;
  *(int *)(param_1 + 0x1000) = iVar7;
  if (iVar4 == 3) {
    uVar8 = FUN__text__003279a0();
    if ((uVar8 & 1) != 0) goto LAB__text__00259564;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB__text__00259564;
      uVar8 = FUN__text__00327990();
      if ((uVar8 & 1) != 0) goto LAB__text__00259524;
      iVar7 = *(int *)(param_1 + 0x1000);
    }
    uVar8 = FUN__text__003279b0(iVar7);
    if ((uVar8 & 1) == 0) goto LAB__text__00259564;
  }
LAB__text__00259524:
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  FUN__text__0012c378(param_1 + 0x110,0x72c6e0);
  FUN__text__0012c378(param_1 + 0x110,0x72c6e8);
  FUN__text__002575d4(param_1);
  FUN__text__002579c0(param_1,0,0xffffffffffffffff);
LAB__text__00259564:
  FUN__text__0012bcbc(*(long *)(param_1 + 0x678) + 0x110,1);
  uVar8 = FUN__text__003279b0(*(undefined4 *)(param_1 + 0x1000));
  lVar10 = param_1 + 0x110;
  bVar6 = (uVar8 & 1) == 0;
  uVar1 = 0x72c6f0;
  if (bVar6) {
    uVar1 = 0x72c700;
  }
  uVar2 = 0x72c6f8;
  if (bVar6) {
    uVar2 = 0x72c708;
  }
  FUN__text__0012c378(lVar10,uVar1);
  FUN__text__0012c378(lVar10,uVar2);
  FUN__text__00259690(param_1,1,*(undefined4 *)(param_1 + 0x6ec));
  *(undefined1 *)(param_1 + 0x6f0) = 1;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  FUN__text__0025b6d0(param_1);
  local_c0 = FUN__text__0025edbc;
  local_b8 = FUN__text__0025ee80;
  local_b0 = &LAB__text__0025ee84;
  uVar1 = 0x719406;
  if (-1 < param_2) {
    uVar1 = 0x714fee;
  }
  local_a8 = &LAB__text__0025ee90;
  alStack_a0[0] = param_1;
  FUN__text__0012c3b0(lVar10,uVar1,&local_c0);
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(alStack_a0);
  }
  return;
}


