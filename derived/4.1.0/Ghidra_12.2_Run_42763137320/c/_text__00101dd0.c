/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00101dd0; name: FUN_.text__00101dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00101dd0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = _DAT_0089f3b0 + 0xe8;
  *param_1 = _DAT_0089f3b0 + 0x10;
  param_1[1] = lVar1;
  if (((char)param_1[0x15] == '\0') && (uVar2 = FUN__text__005f6a58(param_1 + 5), (uVar2 & 1) == 0))
  {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN__text__005f6850(param_1 + 5);
  FUN__text__005f6c00(param_1);
  FUN__text__005f5500();
  plVar3 = (long *)FUN__text__005f52b0();
                    /* WARNING: Could not recover jumptable at 0x00101e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1,0,8);
  return;
}


