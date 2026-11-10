/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9a08; name: FUN_.text__004f9a08
 */


undefined8 FUN__text__004f9a08(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x290))
                             (param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20,
                              *(byte *)(param_2 + 0x310) >> 2 & 1);
  if (plVar1 == (long *)0x0) {
    return 2;
  }
  (**(code **)(*plVar1 + 0x80))();
  local_2c = **(undefined4 **)(param_2 + 0x18);
  uStack_28 = (*(undefined4 **)(param_2 + 0x18))[1];
  local_24 = FUN__text__004f5ed0(plVar1);
  FUN__text__004ebee4(plVar1,&local_2c);
  return 1;
}


