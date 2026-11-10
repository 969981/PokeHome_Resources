/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec9f0; name: FUN_.text__004ec9f0
 */


int FUN__text__004ec9f0(long param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  *(int *)(param_1 + 0x90) = param_2;
  iVar2 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x78));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))();
  iVar3 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    iVar5 = iVar3;
    do {
      uVar4 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar6);
      iVar3 = FUN__text__004efda0(uVar4,iVar2 + param_2);
      uVar6 = uVar6 + 1;
      if (iVar3 <= iVar5) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (uVar1 != uVar6);
  }
  return iVar3;
}


