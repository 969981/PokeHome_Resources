/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2568; name: FUN_.text__005e2568
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e2568(long *param_1,long *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  uVar2 = FUN__text__005e40dc();
  FUN__text__005e6534(param_1,uVar2);
  lVar1 = _DAT_0089fdb0;
  param_1[0x4c] = 0;
  *(undefined1 *)((long)param_1 + 0x26c) = param_3;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x68;
  param_1[10] = lVar1 + 0xa8;
  *(undefined4 *)(param_1 + 0x4d) = 1;
  (**(code **)(*param_2 + 0x20))(&local_18,param_2);
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
  }
  param_1[0x4c] = local_18;
  return;
}


