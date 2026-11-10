/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3abc; name: FUN_.text__003c3abc
 */


void FUN__text__003c3abc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  FUN__text__003c3b4c(param_1,param_4,param_5,param_6 & 1);
  FUN__text__003c3de0(param_1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


