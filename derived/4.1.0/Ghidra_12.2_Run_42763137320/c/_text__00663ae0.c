/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663ae0; name: FUN_.text__00663ae0
 */


undefined8 FUN__text__00663ae0(long param_1,long param_2,long param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x5d8) == *(int *)(param_3 + 0x218)) {
    *(undefined4 *)(param_1 + 0x5d8) = 0;
  }
  *(long *)(param_1 + 0x5e0) = *(long *)(param_1 + 0x5e0) - *(long *)(param_2 + 0x1520);
  *(undefined8 *)(param_2 + 0x1520) = 0;
  if ((*(int *)(param_1 + 0x5d8) == 0) &&
     (iVar3 = FUN__text__00661d1c(param_1,param_1 + 0x550,param_4), iVar3 != 0)) {
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(param_3 + 0x250) = 0;
  if (*(int *)(param_1 + 0x610) == 0) {
    if (*(char *)(param_3 + 0x21c) != '\0') {
      puVar6 = *(ulong **)(param_3 + 0x230);
      if (((puVar6 != (ulong *)0x0) && (piVar7 = (int *)*puVar6, piVar7 != (int *)0x0)) &&
         (0 < (long)puVar6[2])) {
        piVar1 = (int *)((long)piVar7 + puVar6[2]);
        do {
          iVar3 = *piVar7;
          iVar4 = FUN__text__0066748c(param_1,2,piVar7 + 1,iVar3);
          if (iVar4 != 0) {
            *param_4 = iVar4;
            return 0xffffffffffffffff;
          }
          piVar7 = (int *)((long)(piVar7 + 1) + (ulong)(iVar3 + 1));
        } while (piVar7 < piVar1);
      }
      *(undefined1 *)(param_3 + 0x251) = 1;
      return 0;
    }
    FUN__text__0066713c(param_2,0x71c653,*(undefined4 *)(param_3 + 0x218));
  }
  else {
    if (*(int *)(param_1 + 0x610) == 7) {
      FUN__text__00650d38(param_1,1);
      *(ushort *)(param_2 + 0x15a4) = *(ushort *)(param_2 + 0x15a4) | 4;
      iVar3 = 0x38;
      goto LAB__text__00663c24;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x218);
    uVar5 = FUN__text__00679e4c();
    FUN__text__0066713c(param_2,0x71ea92,uVar2,uVar5,*(undefined4 *)(param_1 + 0x610));
  }
  iVar3 = 0x5c;
LAB__text__00663c24:
  *param_4 = iVar3;
  return 0xffffffffffffffff;
}


