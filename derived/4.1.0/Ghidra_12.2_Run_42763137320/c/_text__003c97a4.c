/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c97a4; name: FUN_.text__003c97a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c97a4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = _DAT_0089f690 + 0x10;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  lVar2 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = 0x883ec0;
  param_1[1] = lVar2;
  param_1[9] = 0x883f00;
  param_1[0xc] = 0x867b70;
  lVar2 = *(long *)(param_3 + 8);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,param_1 + 0x12);
    lVar2 = *(long *)(param_3 + 0x28);
    param_1[0xf] = *(long *)(param_3 + 0x18);
    param_1[0x11] = lVar2;
    lVar2 = *(long *)(param_3 + 0x10);
    param_1[0x10] = *(long *)(param_3 + 0x20);
    param_1[0xe] = lVar2;
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
    (**(code **)(param_3 + 0xa0))(param_3 + 0xb0,param_1 + 0x22);
    lVar2 = *(long *)(param_3 + 0xa8);
    param_1[0x1f] = *(long *)(param_3 + 0x98);
    param_1[0x21] = lVar2;
    lVar2 = *(long *)(param_3 + 0x90);
    param_1[0x20] = *(long *)(param_3 + 0xa0);
    param_1[0x1e] = lVar2;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0xc] = 0x867b50;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  return;
}


