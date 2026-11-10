/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec620; name: FUN_.text__004ec620
 */


undefined8 FUN__text__004ec620(long param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  
  FUN__text__004eb8dc();
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))();
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar3);
      if ((*(int *)(lVar2 + 300) == 3) && (lVar2 = FUN__text__004eda60(param_1,lVar2), lVar2 != 0))
      {
        if (*(long *)(*(long *)(lVar2 + 0x50) + 0x138) != 0) {
          FUN__text__004edd4c(lVar2);
        }
        if (*(long *)(param_1 + 0x88) == 0) {
          *(long *)(param_1 + 0x88) = lVar2;
          *(undefined8 *)(lVar2 + 0x70) = 0;
        }
        else {
          *(long *)(lVar2 + 0x70) = *(long *)(param_1 + 0x88);
          *(long *)(param_1 + 0x88) = lVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return 1;
}


