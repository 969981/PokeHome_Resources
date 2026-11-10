/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c0004; name: FUN_.text__003c0004
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c0004(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar1 = _DAT_0089f690;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar1 + 0x10;
  lVar1 = _DAT_008a3688;
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar2 + 0x98) != 0) {
      lVar4 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar1 + 0x48;
  param_1[0xd] = 0x883688;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8836b0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xa0,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    _DAT_00000098 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
    plVar3 = (long *)FUN__text__003a1464();
    lVar1 = _DAT_008a3688 + 0x48;
    *plVar3 = _DAT_008a3688 + 0x10;
    plVar3[9] = lVar1;
    if (plVar3[0xb] != 0) {
      (**(code **)(*(long *)(plVar3[0xb] + 0x48) + 0x18))();
      plVar3[0xb] = 0;
    }
    return;
  }
  *plVar3 = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar5 = plVar3 + 9;
  *plVar5 = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  FUN__text__003a1464();
  lVar1 = _DAT_008a34d8;
  *plVar5 = _DAT_008a34d8 + 0x100;
  plVar3[10] = lVar1 + 0x140;
  *plVar3 = lVar1 + 0x10;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0xa0;
  plVar3[4] = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = (long)plVar3;
  plVar3[0xc] = -0x2de32bf12642dfdb;
  return;
}


