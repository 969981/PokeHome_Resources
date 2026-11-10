/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b0a0; name: FUN_.text__0047b0a0
 */


void FUN__text__0047b0a0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if (0 < *(int *)(param_1 + 0x200)) {
    lVar3 = 0;
    lVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x1f8) + lVar3) + 0x10))();
      puVar5[-4] = uVar2;
      lVar4 = lVar4 + 1;
      lVar1 = *(long *)(param_1 + 0x1f8) + lVar3;
      lVar3 = lVar3 + 0x88;
      *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(lVar1 + 0x50);
      *puVar5 = 0;
      puVar5 = puVar5 + 6;
    } while (lVar4 < *(int *)(param_1 + 0x200));
  }
  return;
}


