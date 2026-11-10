/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657b14; name: FUN_.text__00657b14
 */


int FUN__text__00657b14(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 2;
  if ((param_2 == 0) && (param_3 == 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar2 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 != 0) {
        iVar2 = 0;
        do {
          iVar1 = FUN__text__00657fbc(lVar3);
          lVar3 = *(long *)(lVar3 + 0x10);
          if (iVar1 != 0) {
            iVar2 = iVar1;
          }
        } while (lVar3 != 0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return iVar2;
}


