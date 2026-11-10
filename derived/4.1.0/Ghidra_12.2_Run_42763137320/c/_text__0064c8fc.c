/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c8fc; name: FUN_.text__0064c8fc
 */


undefined8 FUN__text__0064c8fc(long param_1)

{
  int iVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  int local_34;
  undefined4 local_18 [2];
  
  if (*(long *)(param_1 + 0xca0) != 0) {
    iVar1 = nn::account::AsyncContext::GetResult();
    if (iVar1 == 0) {
      memset((char *)(param_1 + 0x98),0,0xc08);
      local_34 = nn::account::LoadNetworkServiceAccountIdTokenCache
                           ((ulong *)local_18,(char *)(param_1 + 0x98),0xc00,
                            (UserHandle *)(param_1 + 0x60));
      if (local_34 == 0) {
        local_34 = nn::account::GetNetworkServiceAccountId
                             ((NetworkServiceAccountId *)(param_1 + 0xc98),
                              (UserHandle *)(param_1 + 0x60));
        if (local_34 == 0) {
          return 1;
        }
        plVar5 = *(long **)(param_1 + 0x90);
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        lVar4 = 10;
      }
      else {
        plVar5 = *(long **)(param_1 + 0x90);
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        lVar4 = 9;
      }
      puVar2 = (ulong *)&local_34;
      pcVar3 = *(code **)(*plVar5 + lVar4 * 8);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x90);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      local_18[0] = nn::account::AsyncContext::GetResult();
      puVar2 = (ulong *)local_18;
      pcVar3 = *(code **)(*plVar5 + 0x40);
    }
    (*pcVar3)(plVar5,puVar2);
  }
  return 0;
}


