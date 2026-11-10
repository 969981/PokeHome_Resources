/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003062f4; name: FUN_.text__003062f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003062f4(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                        undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar1 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a2a18;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x56) = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[9] = lVar2 + 0x48;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 0x12) = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x310,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__00637458(lVar3,param_2,param_3,param_4,param_5);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x310;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  param_1[0xb] = lVar3;
  lVar3 = FUN__text__00321ac0();
  lVar2 = *(long *)(lVar3 + 0x7a070);
  *(long *)(lVar3 + 0x7a070) = lVar2 + 1;
  param_1[0xc] = lVar2;
  *(undefined4 *)(param_1 + 0x12) = 3;
  return;
}


