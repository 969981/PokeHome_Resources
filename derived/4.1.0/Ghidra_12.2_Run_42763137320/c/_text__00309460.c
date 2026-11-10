/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309460; name: FUN_.text__00309460
 */


undefined8
FUN__text__00309460(long param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4,
                   uint param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_48;
  
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
  if ((param_5 & 1) != 0) {
    FUN__text__00308cf8(param_1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 400) = uVar4;
  std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3));
  *(undefined2 *)(param_1 + 0x214) = *param_4;
  pcVar2 = *(code **)(param_1 + 0x228);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    (*pcVar2)(param_1 + 0x240);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x240);
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x228) = param_3[1];
    *(undefined8 *)(param_1 + 0x238) = uVar3;
    uVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x230) = param_3[2];
    *(undefined8 *)(param_1 + 0x220) = uVar3;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  FUN__text__00240ddc(&local_48,*(undefined8 *)(param_1 + 0x1f8),0x734664);
  if (*(long *)(param_1 + 0x200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x200) = local_48;
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  pcVar2 = *(code **)(local_48 + 0x378);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(local_48 + 0x380) = 0;
    *(undefined8 *)(local_48 + 0x388) = 0;
    *(undefined8 *)(local_48 + 0x370) = 0;
    *(undefined8 *)(local_48 + 0x378) = 0;
    (*pcVar2)(local_48 + 0x390);
  }
  *(long *)(local_48 + 0x390) = param_1;
  *(code **)(local_48 + 0x370) = FUN__text__0030a150;
  *(undefined **)(local_48 + 0x378) = &DAT__text__0030a2d8;
  *(undefined1 **)(local_48 + 0x380) = &LAB__text__0030a2dc;
  *(undefined1 **)(local_48 + 0x388) = &LAB__text__0030a2e8;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x200),0x7194b7,0xffffffff,0x10);
  return 0;
}


