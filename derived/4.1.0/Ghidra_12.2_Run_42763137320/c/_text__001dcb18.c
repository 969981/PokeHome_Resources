/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dcb18; name: FUN_.text__001dcb18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001dcb18(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  long local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined1 *)
   (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe0) + (ulong)*(uint *)(param_1 + 0x8a00) * 8 + 4) = 1;
  FUN__text__003ae1d0(*(undefined8 *)(param_1 + 0x89c8));
  lVar6 = *_DAT_0089f598;
  FUN__text__005e927c(&local_e0,_DAT_008a0600);
  uVar4 = FUN__text__003eec14(lVar6);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  iVar3 = FUN__text__003ef560(lVar6,&local_e0,uVar4,0);
  if (iVar3 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar6 + 0x210),&local_e0,iVar3,uVar4,0,&local_c0,0);
    pcVar2 = (code *)CONCAT44(uStack_b4,local_b8);
    if (pcVar2 != (code *)0x0) {
      local_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      uStack_b4 = 0;
      (*pcVar2)(&local_a0);
    }
  }
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  uVar1 = *(undefined4 *)
           (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe0) + (ulong)*(uint *)(param_1 + 0x8a00) * 8);
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  FUN__text__0019a164(param_1 + 0x89f0,uVar1,&local_c0);
  local_e0 = CONCAT44(uStack_bc,local_c0);
  uStack_d8 = CONCAT44(uStack_b4,local_b8);
  local_d0 = local_b0;
  lVar5 = FUN__text__00195844(uVar4,uStack_bc);
  if (*(int *)(lVar5 + 0xc) != 1) {
    local_f8 = local_e0;
    uStack_f0 = uStack_d8;
    local_e8 = local_d0;
    FUN__text__001aa7a0(lVar6,&local_f8);
  }
  FUN__text__0019555c(uVar4,&local_e0);
  FUN__text__001aaaf4(lVar6,&local_e0);
  FUN__text__0019a1e0(param_1 + 0x89f0,uVar1,1);
  *(undefined1 *)(param_1 + 0x89f8) = 1;
  *(int *)(*(long *)(lVar6 + 8) + 0x2a8) = *(int *)(*(long *)(lVar6 + 8) + 0x2a8) + 1;
  *(undefined1 *)(param_1 + 0x8ba3) = 1;
  *(int *)(param_1 + 0x89fc) = *(int *)(param_1 + 0x89fc) + 1;
  if (*(int *)(param_1 + 0x8ba4) != 0) {
    *(int *)(param_1 + 0x8ba4) = *(int *)(param_1 + 0x8ba4) + -1;
  }
  if (*(int *)(param_1 + 0x8ba8) != 0) {
    *(int *)(param_1 + 0x8ba8) = *(int *)(param_1 + 0x8ba8) + -1;
  }
  FUN__text__001db72c(param_1);
  return;
}


