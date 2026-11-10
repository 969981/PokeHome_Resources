/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00450ed0; name: FUN_.text__00450ed0
 */


int FUN__text__00450ed0(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int local_58;
  int local_54;
  undefined1 auStack_50 [8];
  short *local_48;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  lVar2 = *(long *)(param_2 + 0x2a0);
  if ((*(long *)(param_2 + 0x340) != 0) && (*(int *)(param_2 + 0x348) != 0)) {
    iVar1 = FUN__text__004aed30(*(long *)(param_2 + 0x340),*(int *)(param_2 + 0x348),auStack_50,0,
                                auStack_24,auStack_28,&local_54,&local_58,0,0,1);
    if (iVar1 != 1) {
      FUN__text__00475a44(param_2,1);
      return iVar1;
    }
    if (*local_48 == -2) {
      *(undefined4 *)(lVar2 + 0x18) = 0x10001;
    }
    if ((uint)(local_54 + local_58) <= *(uint *)(param_2 + 0x348)) {
      *(ushort *)(lVar2 + 0xc) = *(ushort *)(lVar2 + 0xc) & 0xff8f | 0xc;
    }
  }
  if ((((*(ushort *)(lVar2 + 0xc) & 0x7c) == 0xc) && (*(long *)(param_2 + 0x340) == 0)) ||
     (lVar2 = FUN__text__0042843c(*(ushort *)(lVar2 + 0xc) >> 2 & 0x1f,*(undefined4 *)(lVar2 + 0x18)
                                  ,param_2), lVar2 == 0)) {
    FUN__text__00475a44(param_2,1);
    iVar1 = 2;
  }
  else {
    iVar1 = FUN__text__00451000(param_1,lVar2,param_3 & 1,1);
  }
  return iVar1;
}


