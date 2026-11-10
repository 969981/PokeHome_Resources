/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433a20; name: FUN_.text__00433a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00433a20(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = _DAT_008a45f0;
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar3 = puVar2 + 1;
      FUN__text__00434930(*puVar1,*puVar2,param_1);
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 8));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


