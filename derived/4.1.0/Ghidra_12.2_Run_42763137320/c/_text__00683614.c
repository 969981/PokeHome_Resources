/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683614; name: FUN_.text__00683614
 */


undefined8 FUN__text__00683614(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = *(undefined1 **)(lVar2 + 0x20);
  if (*(undefined1 **)(lVar2 + 0x10) == puVar3) {
    uVar1 = FUN__text__00683578();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    puVar3 = *(undefined1 **)(lVar2 + 0x20);
  }
  *(undefined1 **)(lVar2 + 0x20) = puVar3 + 1;
  *puVar3 = param_2;
  return 0;
}


