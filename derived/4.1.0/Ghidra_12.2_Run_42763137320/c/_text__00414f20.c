/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414f20; name: FUN_.text__00414f20
 */


void FUN__text__00414f20(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (-1 < (int)(DAT_00aea228 - 1U)) {
    lVar4 = (ulong)(DAT_00aea228 - 1U) << 3;
    lVar1 = DAT_00aea220;
    iVar3 = DAT_00aea228;
    do {
      lVar2 = *(long *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x30) == 0) {
          if (*(long *)(lVar2 + 0x68) == 0) {
            if (*(long *)(lVar2 + 0x70) != 0) goto LAB__text__00414fb8;
          }
          else if (*(long *)(*(long *)(lVar2 + 0x68) + 0x80) == 0) {
LAB__text__00414fb8:
            lVar1 = FUN__text__0040a740();
            if ((lVar1 != 0) &&
               ((*(long *)(lVar1 + 0x548) == lVar2 || (*(long *)(lVar1 + 0x548) == 0)))) {
              FUN__text__00406c04();
            }
          }
        }
        FUN__text__004d3fb0(lVar2);
        FUN__text__00400fc0(5,lVar2);
        lVar1 = DAT_00aea220;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -8;
    } while (0 < iVar3);
  }
  DAT_00aea228 = 0;
  return;
}


