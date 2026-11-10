/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046cff0; name: FUN_.text__0046cff0
 */


void FUN__text__0046cff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                        undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (ulong)*(uint *)(param_3 + 1);
  if (*(uint *)(param_3 + 1) != 0) {
    puVar2 = (undefined8 *)*param_3;
    puVar3 = puVar2;
    do {
      if (*(char *)((long)*puVar3 + 0xd) == '\x04') {
        FUN__text__0046d170(param_1,param_2,*(undefined4 *)*puVar3,param_4,param_5);
        puVar2 = (undefined8 *)*param_3;
        uVar1 = (ulong)*(uint *)(param_3 + 1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + uVar1);
  }
  return;
}


