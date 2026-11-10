/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7c10; name: FUN_.text__003c7c10
 */


void FUN__text__003c7c10(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar2 = *plVar1;
    while (lVar2 != *param_2) {
      plVar1 = plVar1 + 2;
      lVar2 = *plVar1;
    }
  }
  lVar2 = plVar1[1];
  *(undefined8 *)(lVar2 + 0x48) = *param_3;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  return;
}


