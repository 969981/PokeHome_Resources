/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004590a0; name: FUN_.text__004590a0
 */


void FUN__text__004590a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar1 = *(long *)(param_1 + 0x30); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    if (*(int *)(lVar1 + 0x148) != 0) {
      lVar2 = *(long *)(lVar1 + 0x140);
      do {
        *(undefined8 *)(lVar2 + 0x18) = 0;
        lVar2 = lVar2 + 0x118;
      } while (lVar2 != *(long *)(lVar1 + 0x140) + (ulong)*(uint *)(lVar1 + 0x148) * 0x118);
    }
  }
  return;
}


