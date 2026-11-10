/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f3a60; name: FUN_.text__001f3a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001f3a60(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined8 local_b0;
  code *local_a8;
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
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
LAB__text__001f3bd0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  plVar4 = (long *)FUN__text__0018d6a0();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB__text__001f3bd0;
  }
  lVar5 = FUN__text__00321ac0();
  uVar7 = 0x1b;
  if ((1 << (ulong)(*(uint *)(lVar5 + 0x19ad9c) & 0x1f) & 0x1fbfeU) == 0) {
    if (*(uint *)(lVar5 + 0x19ad9c) == 0) {
      lVar5 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_d0,_DAT_008a05f8);
      uVar6 = FUN__text__003eec14(lVar5);
      local_40 = 0;
      uStack_38 = 0;
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
      local_a8 = (code *)0x0;
      iVar2 = FUN__text__003ef560(lVar5,auStack_d0,uVar6,0);
      if ((iVar2 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar5 + 0x210),auStack_d0,iVar2,uVar6,0,&local_b0,0),
         pcVar1 = local_a8, local_a8 != (code *)0x0)) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar1)(&local_90);
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      }
      uVar7 = 0x19;
    }
  }
  else {
    uVar7 = 0x1c;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0x13;
  *(undefined4 *)(puVar8 + 0x17) = uVar7;
  return;
}


