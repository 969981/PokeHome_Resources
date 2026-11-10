/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683670; name: FUN_.text__00683670
 */


undefined8 FUN__text__00683670(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) {
    uVar1 = FUN__text__00683578();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  }
  *puVar2 = param_2;
  return 0;
}


