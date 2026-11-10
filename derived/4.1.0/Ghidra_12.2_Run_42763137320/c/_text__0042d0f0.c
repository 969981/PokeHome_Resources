/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d0f0; name: FUN_.text__0042d0f0
 */


bool FUN__text__0042d0f0(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(param_1 + 0x10) != 0;
  }
  puVar1 = (undefined8 *)FUN__text__00400f80(2,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return puVar1 != (undefined8 *)0x0;
}


