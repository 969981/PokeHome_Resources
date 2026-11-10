/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064139c; name: FUN_.text__0064139c
 */


void FUN__text__0064139c(long param_1,byte param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  
  param_2 = param_2 & 1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN__text__0063a140(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10)
                       );
    if (*(long *)(param_1 + 8) != 0) {
      FUN__text__0063a140(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar1 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar2 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar1 != sVar2) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  if ((*(ushort *)(*(long *)(param_1 + 0x10) + 4) >> 2 & 1) == 0) {
    lVar4 = FUN__text__00641578();
    *(byte *)(lVar4 + 0x4a) = param_2;
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0') {
LAB__text__00641464:
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar3 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar3;
        FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,
                            **(undefined4 **)(param_1 + 0x10));
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN__text__0063a0c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else {
    DAT_00c2678a = param_2;
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0')
    goto LAB__text__00641464;
  }
  return;
}


