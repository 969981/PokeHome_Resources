/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475978; name: FUN_.text__00475978
 */


ulong FUN__text__00475978(long param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x313);
  uVar3 = *puVar1;
  if ((uVar3 >> 7 & 1) != 0) {
    *param_2 = uVar3 & 7;
    return (ulong)(*puVar1 >> 3 & 0xf);
  }
  *puVar1 = uVar3 | 0x80;
  uVar2 = FUN__text__00495c50(*(undefined8 *)(param_1 + 0x1e8),param_2);
  if ((int)uVar2 == 3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1e8) + 600))
                      (*(long **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
    uVar3 = 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = 2;
    }
    uVar2 = (ulong)uVar3;
  }
  *puVar1 = *param_2 & 7 | ((uint)uVar2 & 0xf) << 3 | *puVar1 & 0xffffff80;
  return uVar2;
}


