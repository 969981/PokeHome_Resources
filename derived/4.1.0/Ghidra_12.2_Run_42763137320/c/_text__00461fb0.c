/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461fb0; name: FUN_.text__00461fb0
 */


void FUN__text__00461fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = (ulong)DAT_00aea6c0;
  if (DAT_00aea6c0 != 0) {
    plVar3 = DAT_00aea6b8;
    plVar6 = DAT_00aea6b8;
    do {
      lVar4 = *plVar6;
      iVar1 = *(int *)(lVar4 + 0x198);
      if (iVar1 == -1) {
        lVar5 = lVar4;
        do {
          lVar5 = *(long *)(lVar5 + 0x80);
          if (lVar5 == 0) {
            if (param_1 == -1) goto LAB__text__00462018;
            goto LAB__text__00461ff0;
          }
          iVar1 = *(int *)(lVar5 + 0x198);
        } while (iVar1 == -1);
        *(int *)(lVar4 + 0x198) = iVar1;
      }
      if (iVar1 == param_1) {
LAB__text__00462018:
        FUN__text__00461f30(*plVar6,param_2);
        uVar2 = (ulong)DAT_00aea6c0;
        plVar3 = DAT_00aea6b8;
      }
LAB__text__00461ff0:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar2);
  }
  return;
}


