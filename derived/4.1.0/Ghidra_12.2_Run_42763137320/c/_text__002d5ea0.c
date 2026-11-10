/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5ea0; name: FUN_.text__002d5ea0
 */


ulong FUN__text__002d5ea0(undefined8 param_1,undefined2 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long local_8;
  
  FUN__text__002f0c20();
  FUN__text__002d63f8(&local_8);
  puVar1 = (ulong *)FUN__text__002d636c(local_8 + 0x60,param_2);
  uVar2 = *puVar1;
  if (local_8 != 0) {
    (**(code **)(*(long *)(local_8 + 0x48) + 0x18))();
  }
  return uVar2 >> 0x20;
}


