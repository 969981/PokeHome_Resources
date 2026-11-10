/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309240; name: FUN_.text__00309240
 */


undefined8
FUN__text__00309240(long param_1,undefined8 *param_2,void *param_3,uint param_4,undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *__s;
  long lVar4;
  undefined8 uVar5;
  ulong __n;
  long *plVar6;
  ulong uVar7;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  
  __n = (ulong)param_4;
  if (*(long *)(param_1 + 0x200) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x200) + 0x259) & 1) == 0) {
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200));
      bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259);
      while ((bVar1 & 1) == 0) {
        nn::os::SleepThread(1000000);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259);
      }
    }
    if (*(long *)(param_1 + 0x200) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
  }
  FUN__text__00308cf8(param_1);
  uVar3 = 2;
  if ((param_3 != (void *)0x0) && (param_4 != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x50));
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    *(undefined8 *)(param_1 + 0x180) = *param_2;
    *(undefined8 *)(param_1 + 0x188) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar5;
    std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3));
    plVar6 = *(long **)(param_1 + 0x1f8);
    *(uint *)(param_1 + 0x1b0) = param_4;
    __s = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,__n,1);
    uVar7 = tpidr_el0;
    uVar7 = uVar7 & 0xffffffffffffe000;
    if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    memset(__s,0,__n);
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    lVar4 = *(long *)(param_1 + 0x1b8);
    *(void **)(param_1 + 0x1b8) = __s;
    if (lVar4 != 0) {
      (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))
                (*(long **)(param_1 + 0x1c0),lVar4,*(undefined8 *)(param_1 + 0x1c8),
                 *(undefined8 *)(param_1 + 0x1d0));
      __s = *(void **)(param_1 + 0x1b8);
    }
    *(long **)(param_1 + 0x1c0) = plVar6;
    *(ulong *)(param_1 + 0x1c8) = __n;
    *(undefined8 *)(param_1 + 0x1d0) = 1;
    memcpy(__s,param_3,(ulong)*(uint *)(param_1 + 0x1b0));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
    local_e0 = FUN__text__00309ff0;
    local_d8 = FUN__text__0030a134;
    local_d0 = &LAB__text__0030a138;
    local_c8 = &LAB__text__0030a144;
    alStack_c0[0] = param_1;
    FUN__text__00309460(param_1,param_2,&local_e0,param_5,0);
    pcVar2 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar2)(alStack_c0);
    }
    uVar3 = 0;
  }
  return uVar3;
}


