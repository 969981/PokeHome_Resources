/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4754; name: FUN_.text__003c4754
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c4754(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[0x14];
  uVar3 = param_2;
  if ((*_DAT_008a01f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(_DAT_008a01f8);
    puVar1 = _DAT_008a0200;
    uVar3 = param_2 & 0xffffffff;
    if (iVar2 != 0) {
      _DAT_008a0200[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0xcbf29ce484222645;
      puVar1[1] = 0x70f683;
      FUN__text__001001d0(_DAT_008a0208,_DAT_008a0200,&__DT_FINI_ARRAY);
      __cxa_guard_release(_DAT_008a01f8);
      uVar3 = param_2 & 0xffffffff;
    }
  }
  *(int *)(lVar4 + 0x180) = (int)*_DAT_008a0200;
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xf) = 7;
    return;
  }
  *(undefined4 *)(param_1 + 0xf) = 5;
                    /* WARNING: Could not recover jumptable at 0x003c47a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}


