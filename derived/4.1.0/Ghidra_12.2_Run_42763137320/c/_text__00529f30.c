/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00529f30; name: FUN_.text__00529f30
 */


void FUN__text__00529f30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0x891c68;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 8) = 0;
    param_1[2] = 0;
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    puVar4 = puVar1;
    do {
      puVar2 = puVar3;
      puVar3 = (undefined8 *)*puVar4;
      puVar4 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)0x0 && puVar3 != param_1);
    if (puVar3 != (undefined8 *)0x0) {
      if ((undefined8 *)*puVar1 != puVar3) {
        puVar1 = puVar2 + 1;
      }
      *puVar1 = puVar3[1];
    }
    param_1[3] = 0;
  }
  return;
}


