/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ad65c; name: FUN_.text__005ad65c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ad65c(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar3 = tpidr_el0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = 0;
  if (uVar3 != 0) {
    if (*(long *)(uVar3 + 0x98) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = _DAT_008a5760 + 0x90;
  lVar2 = _DAT_008a5760 + 0xc0;
  *param_1 = _DAT_008a5760 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar1;
  param_1[0xb] = lVar2;
  param_1[0xc] = 0;
  FUN__text__005b25b4(param_1 + 0xd,param_2,0);
  param_1[0x27] = (long)param_3;
  *param_1 = 0x895e28;
  param_1[9] = 0x895ea8;
  param_1[0xb] = 0x895ed8;
  if (param_3 != (long *)0x0) {
    (**(code **)(param_3[9] + 0x10))();
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = -1;
  param_1[0x2b] = 0;
  (**(code **)(*param_3 + 0x28))(&local_60,param_3,param_4,param_5);
  param_1[0x28] = local_60;
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
  }
  lVar1 = local_48;
  lVar4 = local_58;
  local_60 = 0;
  local_58 = 0;
  param_1[0x29] = lVar4;
  param_1[0x2a] = local_50;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  param_1[0x2b] = lVar1;
  FUN__text__005b509c(&local_60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  FUN__text__005b27c4(param_1 + 0xd,param_4,param_1[0x2a]);
  return;
}


