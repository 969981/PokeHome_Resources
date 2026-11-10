/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce770; name: FUN_.text__002ce770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002ce770(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [24];
  long local_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  if (*(long *)(uVar10 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  if (plVar5 != (long *)0x0) {
    *_DAT_008a2728 = 1;
    lVar6 = _DAT_008a2730;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[10] = 0;
    plVar5[8] = 0;
    plVar5[9] = lVar6 + 0x40;
    *plVar5 = lVar6 + 0x10;
    plVar5[1] = (long)param_1;
    plVar5[2] = (long)plVar5;
    plVar5[3] = 0x58;
    plVar5[4] = 8;
    plVar5[5] = 0;
    puVar3 = _DAT_008a2720;
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
    puVar9 = (undefined8 *)*puVar3;
    *puVar3 = plVar5;
    if (puVar9 != (undefined8 *)0x0) {
      plVar5 = (long *)puVar9[1];
      uVar8 = puVar9[2];
      uVar2 = puVar9[3];
      uVar11 = puVar9[4];
      (**(code **)*puVar9)(puVar9);
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,uVar2,uVar11);
      plVar5 = (long *)*puVar3;
    }
    plVar1 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 9;
    }
    FUN__text__005e914c(plVar1);
    return *puVar3;
  }
  lVar6 = (**(code **)(*param_1 + 0xb8))(param_1);
  uStack_58 = 0x2ce89c;
  local_60 = auStack_80 + 0x40;
  local_50 = uVar10;
  uStack_48 = param_1;
  lVar7 = FUN__text__002ced90(&local_100,*(undefined8 *)(lVar6 + 8));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x50) + 0x48) + 0x18))();
  }
  *(long *)(lVar6 + 0x50) = lVar7;
  FUN__text__005e927c(auStack_80,0x87b0d0);
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  uVar10 = FUN__text__002ce1c4(lVar7,auStack_80,&local_100);
  pcVar4 = local_f8;
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar4)(auStack_e0);
  }
  uVar8 = 0;
  if (local_68 != 0) {
    uVar8 = (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return uVar8;
}


