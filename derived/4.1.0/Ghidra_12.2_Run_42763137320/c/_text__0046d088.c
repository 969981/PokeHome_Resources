/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d088; name: FUN_.text__0046d088
 */


void FUN__text__0046d088(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *local_30;
  undefined1 local_28 [4];
  char local_24 [4];
  
  local_24[0] = '\0';
  local_28[0] = 0;
  local_30 = (long *)0x0;
  FUN__text__0043e620(param_2,param_3,param_4,param_5,&local_30,local_24,local_28);
  if ((local_24[0] != '\0') && (local_30 != (long *)0x0)) {
    uVar3 = FUN__text__0043d900((ulong)*(uint *)(param_2 + 0x10) | 0x400000000,local_30 + 1);
    if ((uVar3 & 1) == 0) {
      *(int *)((long)local_30 + 0xbc) = *(int *)((long)local_30 + 0xbc) + 1;
      FUN__text__004449ec();
      FUN__text__00444060(local_30);
      plVar2 = local_30;
      iVar1 = *(int *)((long)local_30 + 0xbc) + -1;
      *(int *)((long)local_30 + 0xbc) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        FUN__text__00400fc0(0,plVar2);
        return;
      }
    }
    else {
      FUN__text__0046e348(*param_1,local_30);
    }
  }
  return;
}


