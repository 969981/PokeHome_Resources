/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025c534; name: FUN_.text__0025c534
 */


ulong FUN__text__0025c534(long param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = FUN__text__0063c6c8(param_3,0);
  uVar2 = uVar2 & 0xffffffff;
  if (((*param_2 != 0) && (uVar3 = FUN__text__00306588(), (uVar3 & 1) == 0)) &&
     (uVar3 = FUN__text__003279d0(*(undefined4 *)(param_1 + 0x1000)), (uVar3 & 1) != 0)) {
    iVar1 = FUN__text__003065f8(*param_2);
    if ((param_3 == 0x222) && (iVar1 == 0x289)) {
      iVar1 = FUN__text__003068a0(*param_2);
      if ((iVar1 - 0x74U & 0xffff) < 4) {
        uVar2 = (ulong)(0xe090c0a >> (ulong)((iVar1 - 0x74U & 3) << 3));
      }
    }
    else if (param_3 == 0x4a) {
      uVar2 = FUN__text__0063c6c8(0x4a,7);
      return uVar2;
    }
  }
  return uVar2;
}


