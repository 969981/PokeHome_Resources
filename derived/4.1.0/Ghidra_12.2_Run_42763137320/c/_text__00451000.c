/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451000; name: FUN_.text__00451000
 */


int FUN__text__00451000(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[3];
  *(long *)(lVar5 + 0x2a8) = param_1;
  if ((param_3 & param_4 & 1) != 0) {
    uVar2 = FUN__text__00475978(lVar5,param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    if ((*(int *)(lVar5 + 0x1cc) == 0) &&
       (uVar4 = FUN__text__00451a80(lVar5 + 0x1c0,1), (uVar4 & 1) == 0)) {
      iVar3 = 2;
      goto LAB__text__00451140;
    }
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    uVar4 = FUN__text__00478120(lVar5 + 0x18,0);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x114) == 1)) {
      iVar3 = 3;
      goto LAB__text__00451140;
    }
    if (((uVar4 & 1) != 0) &&
       ((*(int *)(param_1 + 0x110) == 0 && (((param_3 & param_4 ^ 1) & 1) == 0)))) {
      if ((*(int *)(param_1 + 0x114) != 0) && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
        FUN__text__00477030(lVar5);
      }
      iVar3 = 1;
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
      goto LAB__text__004510dc;
    }
  }
  iVar3 = FUN__text__00428800(param_2);
  if ((iVar3 == 0x3f) || (iVar3 == 1)) {
LAB__text__004510dc:
    if ((param_3 & 1) == 0) {
      *(long **)(param_1 + 0xe8) = param_2;
      return iVar3;
    }
    *(long **)(param_1 + 0xe0) = param_2;
    lVar1 = 0;
    if (param_2[3] != 0) {
      lVar1 = param_2[3] + 0x18;
    }
    *(long *)(param_1 + 8) = lVar1;
    *(uint *)(lVar5 + 0x313) = *(uint *)(lVar5 + 0x313) & 0xfdffffff;
    return iVar3;
  }
LAB__text__00451140:
  (**(code **)(*param_2 + 0x60))(param_2,1);
  (**(code **)*param_2)(param_2);
  FUN__text__00400fc0(5,param_2);
  return iVar3;
}


