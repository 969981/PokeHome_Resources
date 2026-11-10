/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308f30; name: FUN_.text__00308f30
 */


undefined8 FUN__text__00308f30(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
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
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  *(undefined8 *)(param_1 + 400) = uVar4;
  std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  local_b0 = FUN__text__00309e74;
  local_a8 = FUN__text__00309fd4;
  local_a0 = &LAB__text__00309fd8;
  local_98 = &LAB__text__00309fe4;
  alStack_90[0] = param_1;
  FUN__text__00309060(param_1,param_2,&local_b0,0);
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(alStack_90);
  }
  return 0;
}


