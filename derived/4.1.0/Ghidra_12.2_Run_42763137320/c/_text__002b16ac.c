/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b16ac; name: FUN_.text__002b16ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b16ac(long param_1)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0x60);
  FUN__text__005dd7d8(&local_70);
  *(undefined8 *)(param_1 + 0x60) = local_70;
  *(undefined8 *)(param_1 + 0x68) = uStack_68;
  *(undefined4 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x78) = local_58;
  *(undefined8 *)(param_1 + 0x80) = uStack_50;
  *(undefined8 *)(param_1 + 0x88) = local_48;
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = local_40;
  *(undefined8 *)(param_1 + 0x98) = uStack_38;
  *(undefined8 *)(param_1 + 0xa0) = local_30;
  *(undefined8 *)(param_1 + 0xa8) = uStack_28;
  return;
}


