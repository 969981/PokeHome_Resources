/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c700; name: FUN_.text__0064c700
 */


undefined8 FUN__text__0064c700(long param_1)

{
  ulong uVar1;
  long *plVar2;
  AsyncContext *this;
  long lVar3;
  undefined8 *puVar4;
  int local_24;
  
  if ((*(char *)(param_1 + 0x89) != '\0') &&
     (uVar1 = nn::nifm::IsNetworkAvailable(), (uVar1 & 1) != 0)) {
    local_24 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(param_1 + 0x60));
    if (local_24 == 0) {
      if (*(long *)(param_1 + 0xca0) != 0) {
        nn::account::AsyncContext::Cancel();
      }
      plVar2 = *(long **)(param_1 + 0x50);
      this = (AsyncContext *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,8);
      uVar1 = tpidr_el0;
      uVar1 = uVar1 & 0xffffffffffffe000;
      if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = plVar2;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      nn::account::AsyncContext::AsyncContext(this);
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      puVar4 = *(undefined8 **)(param_1 + 0xca0);
      *(AsyncContext **)(param_1 + 0xca0) = this;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(**(long **)(param_1 + 0xca8) + 0x18))
                  (*(long **)(param_1 + 0xca8),puVar4,*(undefined8 *)(param_1 + 0xcb0),
                   *(undefined8 *)(param_1 + 0xcb8));
        this = *(AsyncContext **)(param_1 + 0xca0);
      }
      *(long **)(param_1 + 0xca8) = plVar2;
      *(undefined8 *)(param_1 + 0xcb0) = 0x20;
      *(undefined8 *)(param_1 + 0xcb8) = 8;
      local_24 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                           (this,(UserHandle *)(param_1 + 0x60));
      if (local_24 == 0) {
        return 1;
      }
      puVar4 = *(undefined8 **)(param_1 + 0xca0);
      *(undefined8 *)(param_1 + 0xca0) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(**(long **)(param_1 + 0xca8) + 0x18))
                  (*(long **)(param_1 + 0xca8),puVar4,*(undefined8 *)(param_1 + 0xcb0),
                   *(undefined8 *)(param_1 + 0xcb8));
      }
      plVar2 = *(long **)(param_1 + 0x90);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      lVar3 = 8;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x90);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      lVar3 = 7;
    }
    (**(code **)(*plVar2 + lVar3 * 8))(plVar2,&local_24);
  }
  return 0;
}


