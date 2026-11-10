/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003faf34; name: FUN_.text__003faf34
 */


undefined8 FUN__text__003faf34(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 0x1f;
  }
  uVar3 = (**(code **)(**(long **)(param_2 + 0x610) + 0x18))(*(long **)(param_2 + 0x610),param_3);
  if ((uVar3 != 0) && (uVar1 = *(uint *)(param_2 + 0x618), uVar3 <= uVar1)) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    if (uVar1 == uVar2 * uVar3) {
      *(uint *)(param_1 + 0x60) = uVar3;
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return 2;
}


