/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3560; name: FUN_.text__005f3560
 */


bool FUN__text__005f3560(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  bool bVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  
  uVar5 = *param_1;
  if (uVar5 == *param_2) {
    do {
      if (uVar5 == 0x10) {
        puVar3 = param_1 + 1;
        uVar4 = (ulong)*puVar3;
        lVar6 = uVar4 * 2 + 4;
        param_1 = param_1 + uVar4 + 2;
        puVar1 = param_2 + uVar4 + 2;
        while (param_2 = param_2 + 1, lVar6 != 0) {
          uVar5 = *puVar3;
          lVar6 = lVar6 + -2;
          puVar3 = puVar3 + 1;
          if (uVar5 != *param_2) goto LAB__text__005f35ec;
        }
        uVar5 = *param_1;
        param_2 = puVar1;
      }
      bVar2 = uVar5 == 0;
      if (uVar5 == 0) {
        return true;
      }
      param_1 = param_1 + 1;
      uVar5 = *param_1;
      param_2 = param_2 + 1;
    } while (uVar5 == *param_2);
  }
  else {
LAB__text__005f35ec:
    bVar2 = false;
  }
  return bVar2;
}


