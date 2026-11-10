/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ef2c; name: FUN_.text__0043ef2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0043ef2c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *local_38;
  
  lVar1 = param_1 + 0x58;
  plVar2 = param_2 + 1;
  local_38 = (long *)0x0;
  plVar4 = (long *)FUN__text__0043f030(lVar1,plVar2,&local_38,0);
  if ((plVar4 != (long *)0x0) && (lVar6 = *plVar4, lVar6 != 0)) {
    if ((local_38 == (long *)0x0) || (*local_38 == 0)) {
      FUN__text__004372a0(lVar6 + 0x48,param_1 + 0x18);
      uVar5 = FUN__text__0043ec20(lVar1,plVar2);
    }
    else {
      FUN__text__004372a0(lVar6 + 0x48,*local_38 + 0x48);
      uVar5 = FUN__text__0043ec20(lVar1,plVar2);
    }
    if ((uVar5 & 1) != 0) {
      FUN__text__0046db44(*_DAT_008a4640,*(undefined4 *)(param_1 + 0x10),plVar2,0);
      iVar3 = *(int *)((long)param_2 + 0xbc) + -1;
      *(int *)((long)param_2 + 0xbc) = iVar3;
      if (iVar3 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN__text__00400fc0(0,param_2);
        return;
      }
    }
  }
  return;
}


