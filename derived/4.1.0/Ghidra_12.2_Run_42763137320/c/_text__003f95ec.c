/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f95ec; name: FUN_.text__003f95ec
 */


void FUN__text__003f95ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN__text__00400f80(7,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xf0 | 0xb;
  }
  return;
}


