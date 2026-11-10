/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462550; name: FUN_.text__00462550
 */


int FUN__text__00462550(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xe0);
    do {
      iVar1 = (**(code **)(*(long *)*puVar3 + 0x138))();
      if (iVar1 != 1) {
        for (puVar2 = *(undefined8 **)(param_1 + 0xe0); puVar3 != puVar2; puVar2 = puVar2 + 1) {
          (**(code **)(*(long *)*puVar2 + 0x140))();
        }
        return iVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 8));
  }
  return 1;
}


