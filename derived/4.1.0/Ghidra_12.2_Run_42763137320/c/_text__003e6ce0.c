/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e6ce0; name: FUN_.text__003e6ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e6ce0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  param_1[7] = 0;
  lVar5 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar5 + 0x10;
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[9] = 0x8852c8;
  *param_1 = 0x885290;
  param_1[1] = (long)plVar4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar5 = _DAT_0089f590 + 0x10;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0xc] = lVar5;
  param_1[0xd] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0)) {
    lVar5 = FUN__text__005f52b0();
    plVar4 = (long *)param_1[1];
  }
  param_1[0x31] = lVar5;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0x48,8);
  FUN__text__0069b9b8();
  param_1[0xb] = lVar5;
  plVar4 = (long *)FUN__text__003e7c54(DAT_008e14a8);
  plVar3 = (long *)plVar4[1];
  for (plVar4 = (long *)*plVar4; plVar4 != plVar3; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    puVar2 = (undefined8 *)&DAT_008aa0f8;
    if (*(long *)(lVar5 + 0x60) != 0) {
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x60) + 0x60);
    }
    FUN__text__0069bf88(param_1[0xb],*puVar2,*(undefined8 *)(lVar5 + 0x58));
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


