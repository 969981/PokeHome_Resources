/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068c36c; name: FUN_.text__0068c36c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068c36c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN__text__0068d4f0();
  plVar2 = param_1 + 5;
  *plVar2 = _DAT_008a66e8 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = -1;
  *param_1 = 0x89c540;
  FUN__text__0068d4cc(plVar2,0,0xc,0,0,0,1);
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  lVar1 = _DAT_008a66f8;
  param_1[9] = -1;
  param_1[10] = 0;
  *plVar2 = lVar1 + 0x10;
  FUN__text__0068d4cc(plVar2,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
                    /* WARNING: Could not recover jumptable at 0x0068c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,1,1);
  return;
}


