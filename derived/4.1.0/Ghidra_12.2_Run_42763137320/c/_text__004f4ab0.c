/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4ab0; name: FUN_.text__004f4ab0
 */


undefined8 FUN__text__004f4ab0(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    do {
      uVar1 = FUN__text__004ef5f8(*puVar3,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0xf8) + (ulong)*(uint *)(param_1 + 0x100) * 8));
  }
  uVar2 = FUN__text__004696c0(param_1,param_2,param_3,0);
  return uVar2;
}


