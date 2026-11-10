/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6650; name: FUN_.text__001c6650
 */


bool FUN__text__001c6650(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  lVar7 = 0;
  while( true ) {
    lVar6 = param_1 + lVar7;
    uVar5 = FUN__text__00196360(lVar6 + 0x20);
    if (((((uVar5 & 1) != 0) && (*(int *)(lVar6 + 0x24) == iVar1)) &&
        (*(int *)(lVar6 + 0x28) == iVar3)) &&
       ((*(int *)(lVar6 + 0x2c) == iVar2 && (*(int *)(lVar6 + 0x30) == iVar4)))) break;
    lVar7 = lVar7 + 0x14;
    lVar6 = param_1 + 0x278;
    if (lVar7 == 600) {
LAB__text__001c66e0:
      return lVar6 != param_1 + 0x278;
    }
  }
  lVar6 = lVar6 + 0x20;
  goto LAB__text__001c66e0;
}


