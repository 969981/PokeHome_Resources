/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127d20; name: FUN_.text__00127d20
 */


void FUN__text__00127d20(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  bVar3 = 1;
  for (puVar4 = *(undefined8 **)(param_1 + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    bVar2 = FUN__text__0012959c(*puVar4);
    bVar3 = bVar3 & bVar2;
  }
  *(byte *)(param_1 + 0xc0) = bVar3;
  return;
}


