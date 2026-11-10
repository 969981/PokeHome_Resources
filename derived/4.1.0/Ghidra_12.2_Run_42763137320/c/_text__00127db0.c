/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127db0; name: FUN_.text__00127db0
 */


uint FUN__text__00127db0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  uVar3 = 1;
  for (puVar4 = *(undefined8 **)(param_1 + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = (**(code **)(*(long *)*puVar4 + 0x48))();
    uVar3 = uVar3 & uVar2;
  }
  return uVar3;
}


