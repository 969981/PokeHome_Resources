/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045cb64; name: FUN_.text__0045cb64
 */


undefined8 FUN__text__0045cb64(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_2 * (param_3 * 4 + 0xcU & 0x7ffffff0);
  iVar1 = uVar2 * 2;
  if (iVar1 != (int)param_1[1]) {
    if ((int)param_1[1] != 0) {
      if (*param_1 != 0) {
        FUN__text__00400fc0(5);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (iVar1 != 0) {
      lVar3 = FUN__text__00400f90(5,iVar1,0x10);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return 2;
      }
      *(int *)(param_1 + 1) = iVar1;
      param_1[2] = lVar3;
      param_1[3] = lVar3 + (ulong)(uVar2 & 0x7fffffff);
    }
  }
  return 1;
}


