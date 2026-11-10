/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680cb8; name: FUN_.text__00680cb8
 */


undefined8 FUN__text__00680cb8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x440);
  if (param_2 <= *(ulong *)(param_1 + 0x440)) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x30) = uVar1;
  uVar2 = *(ulong *)(param_1 + 0x448);
  if (uVar1 <= *(ulong *)(param_1 + 0x448)) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + 0x448) = uVar2;
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN__text__00680cfc(param_1,param_1 + 0x40);
  return 0;
}


