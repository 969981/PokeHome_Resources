/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477300; name: FUN_.text__00477300
 */


bool FUN__text__00477300(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint local_24;
  
  puVar1 = (uint *)(param_1 + 0x313);
  uVar2 = *puVar1;
  if ((uVar2 >> 7 & 1) != 0) {
    return (uVar2 >> 3 & 0xf) == 0;
  }
  *puVar1 = uVar2 | 0x80;
  uVar2 = FUN__text__00495c50(*(undefined8 *)(param_1 + 0x1e8),&local_24);
  if (uVar2 == 3) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1e8) + 600))
                      (*(long **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
    uVar2 = 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = 2;
    }
  }
  *puVar1 = local_24 & 7 | (uVar2 & 0xf) << 3 | *puVar1 & 0xffffff80;
  return uVar2 == 0;
}


