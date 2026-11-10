/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fa00; name: FUN_.text__0042fa00
 */


void FUN__text__0042fa00(undefined8 param_1,int param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *__dest;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      __dest = (long *)(*param_3 + (ulong)uVar6 * 8);
      lVar5 = *__dest;
      if (*(int *)(lVar5 + 0x30) == 0) {
        if (uVar6 + 1 < uVar3) {
LAB__text__0042fad4:
          memmove(__dest,__dest + 1,(ulong)((uVar3 + ~uVar6) * 8));
          uVar3 = *(uint *)(param_3 + 1);
        }
LAB__text__0042faec:
        *(uint *)(param_3 + 1) = uVar3 - 1;
        FUN__text__0042fb4c(lVar5);
        FUN__text__00400fc0(0,lVar5);
        uVar4 = uVar6;
      }
      else {
        iVar1 = *(int *)(lVar5 + 0x3c);
        if (iVar1 == 0) {
LAB__text__0042faa8:
          uVar2 = FUN__text__0042fc10(lVar5,param_2);
          uVar4 = uVar6 + 1;
          if ((uVar2 & 1) != 0) {
            uVar3 = *(uint *)(param_3 + 1);
            if (uVar6 + 1 < uVar3) {
              __dest = (long *)(*param_3 + (ulong)uVar6 * 8);
              goto LAB__text__0042fad4;
            }
            goto LAB__text__0042faec;
          }
        }
        else {
          if (iVar1 == 3) {
            *(undefined4 *)(lVar5 + 0x3c) = 0;
            *(int *)(lVar5 + 0x18) = (param_2 - *(int *)(lVar5 + 0x24)) + *(int *)(lVar5 + 0x18);
            goto LAB__text__0042faa8;
          }
          if (iVar1 == 1) {
            *(int *)(lVar5 + 0x24) = param_2;
            *(undefined4 *)(lVar5 + 0x3c) = 2;
          }
          uVar4 = uVar6 + 1;
        }
      }
      uVar3 = *(uint *)(param_3 + 1);
      uVar6 = uVar4;
    } while (uVar4 < uVar3);
  }
  return;
}


