/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680a48; name: FUN_.text__00680a48
 */


void FUN__text__00680a48(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar1 = *param_2;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  *param_1 = lVar1;
  param_1[3] = *(long *)(*param_2 + 0x10);
  param_1[5] = *(long *)(*param_2 + 0x18);
  param_1[4] = *(long *)(param_2[1] + 0x10);
  param_1[6] = *(long *)(param_2[1] + 0x18);
  uVar2 = *(undefined1 *)((long)param_2 + 0x14);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 7) = uVar2;
  FUN__text__00683168(*param_1);
  FUN__text__00683168(param_1[1]);
  return;
}


