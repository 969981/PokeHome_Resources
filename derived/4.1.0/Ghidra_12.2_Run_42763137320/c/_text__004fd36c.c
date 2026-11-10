/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd36c; name: FUN_.text__004fd36c
 */


undefined8 FUN__text__004fd36c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  long *local_28;
  
  local_38 = (undefined1 *)&local_40;
  local_40 = *param_2;
  local_3c = 1;
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0 || *(long *)(param_1 + 0x10) != 0) {
    return 2;
  }
  local_30 = 0;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  uVar1 = FUN__text__004fb000();
  local_28 = (long *)FUN__text__004fb0ac(param_1,uVar1);
  if ((local_28 != (long *)0x0) &&
     (FUN__text__004fb1a0(param_1,uVar1,&local_38,&local_28), local_28 != (long *)0x0)) {
    (**(code **)(*local_28 + 0x80))();
  }
  return 1;
}


