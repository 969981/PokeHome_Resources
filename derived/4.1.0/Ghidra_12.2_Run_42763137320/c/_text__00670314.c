/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670314; name: FUN_.text__00670314
 */


int FUN__text__00670314(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN__text__00678414(1,0x16f8);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
    iVar1 = FUN__text__0064f240(lVar2,lVar2 + 0x1288);
    if (iVar1 != 0) {
      FUN__text__006783e4(lVar2);
      return iVar1;
    }
    lVar3 = FUN__text__006783d4(0x4001);
    *(long *)(lVar2 + 0x1130) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN__text__006783d4(0x100);
      *(long *)(lVar2 + 0x1120) = lVar3;
      if (lVar3 != 0) {
        FUN__text__0067014c(lVar2);
        *(undefined8 *)(lVar2 + 0x1128) = 0x100;
        FUN__text__006535fc(lVar2);
        *(undefined8 *)(lVar2 + 0x1118) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x1140) = 0xffffffffffffffff;
        *(uint *)(lVar2 + 0xfac) = *(uint *)(lVar2 + 0xfac) | 0x10;
        FUN__text__006619c4(lVar2 + 0x1100);
        *param_1 = lVar2;
        return 0;
      }
    }
    thunk_FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1288));
    FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1130));
    FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1120));
    FUN__text__0066fe70(lVar2);
    FUN__text__006783e4(lVar2);
  }
  return 0x1b;
}


