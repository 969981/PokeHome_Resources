/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e28cc; name: FUN_.text__002e28cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002e28cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_0089f7b0 + 0x50;
  lVar2 = _DAT_0089f7b0 + 0x90;
  *(long *)(param_1 + -0x60) = _DAT_0089f7b0 + 0x10;
  *(long *)(param_1 + -0x18) = lVar1;
  *(long *)(param_1 + -0x10) = lVar2;
  if (*(long *)(param_1 + -8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + -8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + -8) = 0;
  }
  return;
}


