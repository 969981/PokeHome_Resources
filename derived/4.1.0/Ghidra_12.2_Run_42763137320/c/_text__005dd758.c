/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd758; name: FUN_.text__005dd758
 */


ulong FUN__text__005dd758(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 8);
  if (*(long *)(param_1 + 0xc) == 0) {
    uVar2 = nn::fs::Commit(pcVar4);
    *param_1 = (uint)uVar2;
    return uVar2;
  }
  plVar3 = (long *)(*(long *)(param_1 + 0xc) + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = nn::fs::Commit(pcVar4);
  *param_1 = uVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return (ulong)uVar1;
}


