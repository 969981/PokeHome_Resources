/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7a6c; name: FUN_.text__006d7a6c
 */


undefined8 FUN__text__006d7a6c(long param_1)

{
  undefined8 local_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN__text__006d7980(param_1);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  FUN__text__006d7980(param_1,*(undefined8 *)(param_1 + 0x150));
  if (*(code **)(param_1 + 0x248) != (code *)0x0) {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    lStack_28 = param_1;
    (**(code **)(param_1 + 0x248))(&local_30);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return 1;
}


