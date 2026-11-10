/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129654; name: FUN_.text__00129654
 */


undefined8 FUN__text__00129654(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) || ((lVar3 = param_1[0xd], lVar3 != 0 && (lVar3 != param_2)))) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (lVar3 == 0) {
    param_1[0xd] = param_2;
    plVar1 = param_1 + 0xf;
    (**(code **)(*param_1 + 0x78))(param_1,plVar1);
    (**(code **)(*param_1 + 0x70))(param_1,plVar1,param_1 + 0x15);
    FUN__text__00168178(param_1 + 0x27,plVar1);
    FUN__text__00168178(param_1 + 0x2d,param_1 + 0x15);
    param_1[0x35] = param_1[0x1d];
    param_1[0x36] = param_1[0x1e];
    param_1[0x37] = param_1[0x1f];
    param_1[0x33] = param_1[0x1b];
    param_1[0x34] = param_1[0x1c];
    FUN__text__0012a350(param_1 + 0x22);
    return 0;
  }
  uVar2 = FUN__text__0012b2e8(param_1 + 0x22);
  return uVar2;
}


