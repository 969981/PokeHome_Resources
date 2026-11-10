/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003061e8; name: FUN_.text__003061e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003061e8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_30;
  undefined8 local_28;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar3 = _DAT_008a2a18;
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
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x56) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 3;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[9] = lVar3 + 0x48;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *param_1 = lVar3 + 0x10;
  param_1[1] = lVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_28 = param_2;
  FUN__text__002a32ac(&local_30,param_2,&local_28);
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = local_30;
  lVar2 = FUN__text__00321ac0();
  lVar3 = *(long *)(lVar2 + 0x7a070);
  *(long *)(lVar2 + 0x7a070) = lVar3 + 1;
  param_1[0xc] = lVar3;
  *(undefined4 *)(param_1 + 0x12) = 3;
  return;
}


