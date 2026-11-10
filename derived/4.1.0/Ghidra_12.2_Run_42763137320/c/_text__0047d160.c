/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d160; name: FUN_.text__0047d160
 */


void FUN__text__0047d160(undefined8 param_1,long param_2)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    do {
      puVar2 = puVar1 + 1;
      FUN__text__0047d1c0(param_1,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
  }
  return;
}


