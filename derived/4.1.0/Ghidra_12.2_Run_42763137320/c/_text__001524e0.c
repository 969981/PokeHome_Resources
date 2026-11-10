/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001524e0; name: FUN_.text__001524e0
 */


void FUN__text__001524e0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                        long *param_5,long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_60;
  long local_58;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  uVar3 = *param_3;
  uVar4 = *param_4;
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_6;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  FUN__text__00152858(uVar1,uVar3,uVar4,&local_58,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  param_1[2] = 0x18;
  param_1[3] = 8;
  lVar2 = *(long *)(uVar5 + 0x98);
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(long *)(uVar5 + 0x98) = lVar2 + -1;
  return;
}


