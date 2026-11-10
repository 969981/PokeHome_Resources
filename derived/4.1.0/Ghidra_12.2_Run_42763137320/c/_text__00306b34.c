/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306b34; name: FUN_.text__00306b34
 */


void FUN__text__00306b34(long param_1,int param_2)

{
  uint uVar1;
  long local_28;
  
  local_28 = *(long *)(param_1 + 0x58);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN__text__005fc7ec(&local_28,param_2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  uVar1 = param_2 - 1;
  if (((uVar1 & 0xff) < 7) && ((0x5fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((long)(char)uVar1 * 4 + 0x734648);
  }
  return;
}


