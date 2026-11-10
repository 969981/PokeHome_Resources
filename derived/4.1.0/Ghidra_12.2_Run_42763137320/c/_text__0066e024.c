/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e024; name: FUN_.text__0066e024
 */


int FUN__text__0066e024(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_2 = 0;
  uVar3 = (uint)*(undefined8 *)(lVar4 + 0xf40);
  if ((((uVar3 >> 0x19 & 1) == 0) || ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) != 0)) &&
     (*(long *)(lVar4 + 0x100) + *(long *)(lVar4 + 0x110) == 0)) {
    if ((((*(byte *)((long)param_1 + 0x3fc) >> 1 & 1) == 0) ||
        (((uVar3 >> 0x18 & 1) != 0 && ((*(byte *)(param_1[0x84] + 0x80) & 3) == 0)))) ||
       (*(int *)(lVar4 + 0xe90) == 0xb)) {
      if ((*(ushort *)(lVar4 + 0x15a4) >> 2 & 1) == 0) {
        return 0;
      }
      FUN__text__00666f74(*param_1,0x72079b);
      *(ushort *)(lVar4 + 0x15a4) = *(ushort *)(lVar4 + 0x15a4) & 0xfffb;
    }
    FUN__text__00666f74(*param_1,0x7120c8);
    lVar2 = FUN__text__00678404(*(undefined8 *)(*param_1 + 0xf48));
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
    FUN__text__00650d38(param_1,1);
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x2000;
    if (((*(byte *)(param_1[0x84] + 0x80) & 3) != 0) && (*(long *)(lVar4 + 0x108) != 0)) {
      iVar1 = FUN__text__0066cc28(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN__text__006783e4(*param_2);
      *param_2 = 0;
      return iVar1;
    }
  }
  return 0;
}


