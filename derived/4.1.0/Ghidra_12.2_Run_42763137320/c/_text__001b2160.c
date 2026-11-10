/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b2160; name: FUN_.text__001b2160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b2160(long param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_150 [24];
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_11c [4];
  undefined4 local_118;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar6 != 0) {
    uVar3 = *param_2;
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((((*(long *)(param_1 + 0x18) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar6 == 0)) ||
        (lVar4 = *(long *)(param_1 + 0x38), *(long *)(lVar4 + 0xe8) == 0)) ||
       ((*(long *)(lVar4 + 0x108) == 0 || (*(long *)(lVar4 + 0x128) == 0))))
    goto LAB__text__001b2f70;
    uVar5 = *(uint *)(lVar4 + 0x1e8);
    if (((param_3 & 1) != 0) && ((uVar5 != 3 && (uVar5 != 6)))) {
      uVar5 = 0;
    }
    local_108 = *(undefined8 *)(param_1 + 0x5a58);
    uStack_100 = *(undefined8 *)(param_1 + 0x5a60);
    local_f8 = *(undefined4 *)(param_1 + 0x5a68);
    local_f0 = uVar3;
    FUN__text__00191328(auStack_11c,&local_108,&local_f0);
    if (*(int *)(param_1 + 0x4cc) == 1) {
      if ((param_3 & 1) == 0) {
        lVar6 = FUN__text__0019616c(lVar6,local_118,auStack_110);
        if (lVar6 == 0) {
          if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0))
          goto LAB__text__001b2f70;
          FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
          lVar6 = *_DAT_0089f598;
          uVar3 = _DAT_008a0628;
        }
        else {
          local_130 = *(undefined8 *)(lVar6 + 8);
          uStack_128 = *(undefined8 *)(lVar6 + 0x10);
          FUN__text__001a19ec(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),3,
                              &local_130,0,0);
          lVar6 = *_DAT_0089f598;
          uVar3 = _DAT_008a0640;
        }
        FUN__text__005e927c(auStack_150,uVar3);
        uVar3 = FUN__text__003eec14(lVar6);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        iVar2 = FUN__text__003ef560(lVar6,auStack_150,uVar3,0);
        if ((iVar2 != 0) &&
           (FUN__text__0015e5bc(*(undefined8 *)(lVar6 + 0x210),auStack_150,iVar2,uVar3,0,&local_f0,0
                               ), pcVar1 = local_e8, local_e8 != (code *)0x0)) {
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          local_e8 = (code *)0x0;
          (*pcVar1)(&local_d0);
        }
        if (local_138 != 0) {
          (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
        }
        goto LAB__text__001b2eb8;
      }
    }
    else if (uVar5 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x001b22d8 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__001b22e4 + (ulong)*(ushort *)((ulong)uVar5 * 2 + 0x725e30) * 4))();
      return;
    }
    if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
LAB__text__001b2eb8:
      (**(code **)(*plVar7 + 0x18))();
      return;
    }
  }
LAB__text__001b2f70:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


